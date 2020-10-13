//
//  AbstractFactoryPattern.m
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import "AbstractFactoryPattern.h"
#import "CocaColaFactory.h"
#import "PesiColaFactory.h"


@implementation AbstractFactoryPattern

-(void)test{
    
    // 可口可乐主题
    Cola *cocaCola = [CocaColaFactory createCola];
    Bottle *cocaColaBottle = [CocaColaFactory createBottle];
    Box *cocaColaBox = [CocaColaFactory createBox];

    // 百事可乐主题
    Cola *pesiCola = [PesiColaFactory createCola];
    Bottle *pesiColaBottle = [PesiColaFactory createBottle];
    Box *pesiColaBox = [PesiColaFactory createBox];
}

@end
