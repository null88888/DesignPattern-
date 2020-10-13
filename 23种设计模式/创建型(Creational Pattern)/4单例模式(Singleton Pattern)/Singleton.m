//
//  Singleton.m
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import "Singleton.h"

@implementation Singleton

+ (instancetype)shareInstance {
    static Singleton *shareInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        shareInstance = [[Singleton alloc] init];
    });
    return shareInstance;
}

@end
