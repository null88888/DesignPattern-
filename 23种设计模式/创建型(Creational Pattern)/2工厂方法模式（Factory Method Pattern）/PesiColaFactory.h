//
//  PesiColaFactory.h
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import <Foundation/Foundation.h>
#import "Factory.h"
#import "PesiCola.h"
#import "PesiColaBottle.h"
#import "CocaColaBox.h"

NS_ASSUME_NONNULL_BEGIN

// 百事可乐工厂
@interface PesiColaFactory : Factory

+ (Cola *)createCola;
+ (PesiColaBottle *)createBottle;
+ (PesiColaBox *)createBox;

@end

NS_ASSUME_NONNULL_END
