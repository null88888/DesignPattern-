//
//  FactoryMethodPattern.m
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import "FactoryMethodPattern.h"
#import "PesiColaFactory.h"
#import "CocaColaFactory.h"

@implementation FactoryMethodPattern

-(void)test{
    
    // 根据不同的工厂类生产不同的产品
    Cola *pesiCola = [PesiColaFactory createCola];
    Cola *cocaCola = [CocaColaFactory createCola];
}

@end
