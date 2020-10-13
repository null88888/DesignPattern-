//
//  FacadePattern.h
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FacadePattern : NSObject



@end

NS_ASSUME_NONNULL_END

/*
 
 外观模式(Facade Pattern)：
    外观模式定义了一个高层接口，为子系统中的一组接口提供一个统一的接口。
 外观模式又称为门面模式，它是一种结构型设计模式模式。
 
    
 举例：
 外观模式提供了简单明确的接口，但是在内部众多子系统功能进行整合。
 就像图片缓存，内部包含了涉及到其他子系统的如缓存、下载等处理，外观模式将这些复杂的逻辑都隐藏了。
 在UIImageView和UIButton调用的时候，你只需要调一个setImageWithUrl:(NSString *)url接口就可以了，达到解耦合的目的。
 
 优点：
 实现了客户端与子系统间的解耦：客户端无需知道子系统的接口，简化了客户端调用子系统的调用过程，使得子系统使用起来更加容易。同时便于子系统的扩展和维护。
 符合迪米特法则（最少知道原则）：子系统只需要将需要外部调用的接口暴露给外观类即可，而且他的接口则可以隐藏起来。
 
 缺点：
 违背了开闭原则：在不引入抽象外观类的情况下，增加新的子系统可能需要修改外观类或客户端的代码。

 
 
 */
