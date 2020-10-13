//
//  PrototypePattern.m
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import "PrototypePattern.h"
#import "Student.h"

@implementation PrototypePattern

-(void)test{
    
    // 原对象
    Student *lily = [[Student alloc] init];
    lily.name = @"lily";
    lily.age = @"13";
    lily.class = @"五年一班";
    lily.school = @"实现学校";

    // 复制原对象
    Student *tom = [lily copy];

    // 在原对象基础上微调
    tom.name = @"tom";
    
}

@end
