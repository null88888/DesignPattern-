//
//  CocaColaFactory.h
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import <Foundation/Foundation.h>
#import "Factory.h"
#import "CocaColaBox.h"
#import "CocaColaBottle.h"

NS_ASSUME_NONNULL_BEGIN

@interface CocaColaFactory : Factory

+ (Cola *)createCola;
+ (CocaColaBottle *)createBottle;
+ (CocaColaBox *)createBox;

@end

NS_ASSUME_NONNULL_END
