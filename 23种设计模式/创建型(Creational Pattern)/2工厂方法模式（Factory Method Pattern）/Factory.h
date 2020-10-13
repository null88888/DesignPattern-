//
//  Factory.h
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import <Foundation/Foundation.h>
#import "Cola.h"
#import "CocaColaBox.h"
#import "PesiColaBox.h"
#import "CocaColaBottle.h"

NS_ASSUME_NONNULL_BEGIN

@interface Factory : NSObject

+ (Cola *)createCola;
+ (Bottle *)createBottle;
+ (Box *)createBox;

@end

NS_ASSUME_NONNULL_END
