//
//  Singleton.h
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Singleton : NSObject

+ (instancetype)shareInstance;

@end

NS_ASSUME_NONNULL_END

/*
 
 单例模式(Singleton Pattern)：
    单例模式确保某一个类只有一个实例，并提供一个访问它的全剧访问点。
 
 举例：
 单例模式下，对应类只能生成一个实例。就像一个王国只能有一个国王，一旦王国里的事务多起来，这唯一的国王也容易职责过重。
 
 
 优点：
 提供了对唯一实例的受控访问。因为单例类封装了它的唯一实例，所以它可以严格控制客户怎样以及何时访问它。
 因为该类在系统内存中只存在一个对象，所以可以节约系统资源。
 
 缺点：
 由于单例模式中没有抽象层，因此单例类很难进行扩展。
 对于有垃圾回收系统的语言 Java，C# 来说，如果对象长时间不被利用，则可能会被回收。
 那么如果这个单例持有一些数据的话，在回收后重新实例化时就不复存在了。
 
 
 */
