//
//  DecoratorPattern.h
//  23种设计模式
//
//  Created by lixiufang on 2020/10/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DecoratorPattern : NSObject

-(void)test;

@end

NS_ASSUME_NONNULL_END

/*
 装饰模式(Decorator Pattern) ：
    不改变原有对象的前提下，动态地给一个对象增加一些额外的功能。
 
 举例：
装饰模式贴合开闭原则，在不改变原有类的情况下，对父类进行改造或新增功能。
 举例，定一个抽象类Tea，只能提供白开水，但是通过装饰类BlackTea装饰之后拓展了新功能，通过BlackTea类可以用白开水泡红茶，还可以选择加柠檬。
 
 
 优点：
 比继承更加灵活：
    不同于在编译期起作用的继承；装饰者模式可以在运行时扩展一个对象的功能。
    另外也可以通过配置文件在运行时选择不同的装饰器，从而实现不同的行为。
    也可以通过不同的组合，可以实现不同效果。
 符合“开闭原则”：装饰者和被装饰者可以独立变化。用户可以根据需要增加新的装饰类，在使用时再对其进行组合，原有代码无须改变。

 缺点：
装饰者模式需要创建一些具体装饰类，会增加系统的复杂度。
 
 */
