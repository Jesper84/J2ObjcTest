//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/util/concurrent/Future.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaUtilConcurrentFuture_H_
#define _JavaUtilConcurrentFuture_H_

@class JavaUtilConcurrentTimeUnitEnum;

#import "JreEmulation.h"

@protocol JavaUtilConcurrentFuture < NSObject, JavaObject >
- (BOOL)cancelWithBoolean:(BOOL)mayInterruptIfRunning;
- (BOOL)isCancelled;
- (BOOL)isDone;
- (id)get;
- (id)getWithLong:(long long int)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;
@end

#endif // _JavaUtilConcurrentFuture_H_
