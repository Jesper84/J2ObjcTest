//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/Test.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitTest_H_
#define _OrgJunitTest_H_

@class IOSClass;

#import "JreEmulation.h"
#include "java/lang/Throwable.h"
#include "java/lang/annotation/Annotation.h"

@protocol OrgJunitTest < JavaLangAnnotationAnnotation >

@property (readonly) IOSClass *expected;
@property (readonly) long long int timeout;

@end

@interface OrgJunitTestImpl : NSObject < OrgJunitTest > {
 @private
  IOSClass *expected;
  long long int timeout;
}

- (id)initWithExpected:(IOSClass *)expected_ withTimeout:(long long int)timeout_;

+ (IOSClass *)expectedDefault;
+ (long long int)timeoutDefault;

@end

#define OrgJunitTest_None_serialVersionUID 1

@interface OrgJunitTest_None : JavaLangThrowable {
}

- (id)init;
@end

#endif // _OrgJunitTest_H_
