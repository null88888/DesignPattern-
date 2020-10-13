//
//  BlackTea.h
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import <Foundation/Foundation.h>
#import "Tea.h"

NS_ASSUME_NONNULL_BEGIN

@interface BlackTea : Tea
@property (nonatomic, strong) Tea *tea;

// 加红茶
- (void)addBlackTea;
// 红茶可以加柠檬
- (void)addLemon;

@end

NS_ASSUME_NONNULL_END
