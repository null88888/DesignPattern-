//
//  Tea.m
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import "Tea.h"

@implementation Tea
+ (instancetype)createTea {
    NSLog(@"add water");
    return [self new];
}
@end
