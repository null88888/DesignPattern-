//
//  PesiColaFactory.m
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import "PesiColaFactory.h"

@implementation PesiColaFactory

+ (Cola *)createCola {
    return [PesiCola new];
}

+ (PesiColaBottle *)createBottle {
    return [PesiColaBottle new];
}
+ (PesiColaBox *)createBox {
    return [PesiColaBox new];
}

@end
