//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JunitFrameworkTestFailure_H_
#define _JunitFrameworkTestFailure_H_

@class JavaLangThrowable;
@protocol JunitFrameworkTest;

#import "JreEmulation.h"

@interface JunitFrameworkTestFailure : NSObject {
 @public
  id<JunitFrameworkTest> fFailedTest_;
  JavaLangThrowable *fThrownException_;
}

- (id)initWithJunitFrameworkTest:(id<JunitFrameworkTest>)failedTest
           withJavaLangThrowable:(JavaLangThrowable *)thrownException;
- (id<JunitFrameworkTest>)failedTest;
- (JavaLangThrowable *)thrownException;
- (NSString *)description;
- (NSString *)trace;
- (NSString *)exceptionMessage;
- (BOOL)isFailure;
- (void)copyAllFieldsTo:(JunitFrameworkTestFailure *)other;
@end

J2OBJC_FIELD_SETTER(JunitFrameworkTestFailure, fFailedTest_, id<JunitFrameworkTest>)
J2OBJC_FIELD_SETTER(JunitFrameworkTestFailure, fThrownException_, JavaLangThrowable *)

#endif // _JunitFrameworkTestFailure_H_
