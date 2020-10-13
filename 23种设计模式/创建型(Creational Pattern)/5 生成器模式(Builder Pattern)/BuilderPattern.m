//
//  BuilderPattern.m
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import "BuilderPattern.h"
#import "Builder.h"

@implementation BuilderPattern


-(void)test{
    
    // 创建过程进行拆分
    Builder *builder = [Builder new];
    [builder buildBody];
    [builder buildWheel];
    [builder buildEngine];
    
}

@end
