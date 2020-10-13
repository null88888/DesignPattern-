//
//  SimpleFactoryPattern.m
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import "SimpleFactoryPattern.h"
#import "SimpleFactory.h"

@implementation SimpleFactoryPattern

-(void)test{
    
    // 0 生产可口可乐
    Cola *cocaCola = [SimpleFactory createColaWithType:0];

    // 1 生产百事可乐
    Cola *pesiCola = [SimpleFactory createColaWithType:1];
    
}

@end
