//
//  PrototypePattern.h
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PrototypePattern : NSObject

-(void)test;

@end

NS_ASSUME_NONNULL_END

/*
 
  原型模式（Prototype Pattern）: 使用原型实例指定待创建对象的类型，并且通过复制这个原型来创建新的对象。

 举例：
 原型模式就像复印技术，根据原对象复印出一个新对象，并根据需求对新对象进行微调。
 
 优点：
 可以利用原型模式简化对象的创建过程，尤其是对一些创建过程繁琐，包含对象层级比较多的对象来说，使用原型模式可以节约系统资源，提高对象生成的效率。
 可以很方便得通过改变值来生成新的对象：有些对象之间的差别可能只在于某些值的不同；用原型模式可以快速复制出新的对象并手动修改值即可。
 
 缺点：
 对象包含的所有对象都需要配备一个克隆的方法，这就使得在对象层级比较多的情况下，代码量会很大，也更加复杂。
 
 */
