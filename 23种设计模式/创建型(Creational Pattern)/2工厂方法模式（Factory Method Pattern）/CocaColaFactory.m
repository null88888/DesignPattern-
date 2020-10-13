//
//  CocaColaFactory.m
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import "CocaColaFactory.h"
#import "CocaCola.h"

@implementation CocaColaFactory
+ (Cola *)createCola {
    return [CocaCola new];
}

+ (CocaColaBottle *)createBottle {
    return [CocaColaBottle new];
}

+ (CocaColaBox *)createBox {
    return [CocaColaBox new];
}

@end
