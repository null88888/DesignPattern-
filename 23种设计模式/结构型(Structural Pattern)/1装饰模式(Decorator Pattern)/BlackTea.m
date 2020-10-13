//
//  BlackTea.m
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import "BlackTea.h"

@implementation BlackTea

// 先加红茶，再加水
+ (instancetype)createTea {
    return [self new];
}

- (void)addBlackTea {
    NSLog(@"add black tea");
}

- (void)addLemon {
    NSLog(@"add lemon");
}

@end
