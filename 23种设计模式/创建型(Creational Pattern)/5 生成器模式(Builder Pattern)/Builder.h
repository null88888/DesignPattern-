//
//  Builder.h
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 汽车生产器
@interface Builder : NSObject

- (void)buildEngine;
- (void)buildWheel;
- (void)buildBody;

@end

NS_ASSUME_NONNULL_END
