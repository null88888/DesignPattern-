//
//  DecoratorPattern.m
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import "DecoratorPattern.h"
#import "BlackTea.h"

@implementation DecoratorPattern

-(void)test{
    
    // 茶
    Tea *tea = [Tea createTea];
    // output: add water

    // 红茶
    BlackTea *blackTea = [BlackTea createTea];
    blackTea.tea = tea;
    [blackTea addBlackTea];
    [blackTea addLemon];
    // output:
    // add black tea
    // add lemon
    
}

@end
