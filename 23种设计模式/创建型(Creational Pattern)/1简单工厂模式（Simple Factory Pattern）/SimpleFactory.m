//
//  SimpleFactory.m
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import "SimpleFactory.h"
#import "CocaCola.h"
#import "PesiCola.h"

@implementation SimpleFactory

+ (Cola *)createColaWithType:(NSInteger)type {
    switch (type) {
        case 0:
            return [CocaCola new];
        case 1:
            return [PesiCola new];
        default:
            return nil;
            break;
    }
}

@end
