//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JunitFrameworkTestCase_H_
#define _JunitFrameworkTestCase_H_

@class JunitFrameworkTestResult;

#import "JreEmulation.h"
#include "junit/framework/Assert.h"
#include "junit/framework/Test.h"

@interface JunitFrameworkTestCase : JunitFrameworkAssert < JunitFrameworkTest > {
 @public
  NSString *fName_;
}

- (id)init;
- (id)initWithNSString:(NSString *)name;
- (int)countTestCases;
- (JunitFrameworkTestResult *)createResult;
- (JunitFrameworkTestResult *)run;
- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;
- (void)runBare;
- (void)runTest;
- (void)setUp;
- (void)tearDown;
- (NSString *)description;
- (NSString *)getName;
- (void)setNameWithNSString:(NSString *)name;
- (void)copyAllFieldsTo:(JunitFrameworkTestCase *)other;
@end

J2OBJC_FIELD_SETTER(JunitFrameworkTestCase, fName_, NSString *)

#endif // _JunitFrameworkTestCase_H_
