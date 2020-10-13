//
//  Factory.m
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import "Factory.h"

@implementation Factory

+ (Cola *)createCola {
    return [Cola new];
}

+ (Bottle *)createBottle {
    return [Bottle new];
}
+ (Box *)createBox {
    return [Box new];
}

@end
