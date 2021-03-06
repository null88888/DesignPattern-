//
//  SimpleFactory.h
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import <Foundation/Foundation.h>
#import "Cola.h"

NS_ASSUME_NONNULL_BEGIN

@interface SimpleFactory : NSObject

+ (Cola *)createColaWithType:(NSInteger)type;

@end

NS_ASSUME_NONNULL_END
