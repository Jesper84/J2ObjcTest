//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/junit/framework/JUnit4TestCaseFacade.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JunitFrameworkJUnit4TestCaseFacade_H_
#define _JunitFrameworkJUnit4TestCaseFacade_H_

@class JunitFrameworkTestResult;
@class OrgJunitRunnerDescription;

#import "JreEmulation.h"
#include "junit/framework/Test.h"
#include "org/junit/runner/Describable.h"

@interface JunitFrameworkJUnit4TestCaseFacade : NSObject < JunitFrameworkTest, OrgJunitRunnerDescribable > {
 @public
  OrgJunitRunnerDescription *fDescription_;
}

- (id)initWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;
- (NSString *)description;
- (int)countTestCases;
- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;
- (OrgJunitRunnerDescription *)getDescription;
- (void)copyAllFieldsTo:(JunitFrameworkJUnit4TestCaseFacade *)other;
@end

J2OBJC_FIELD_SETTER(JunitFrameworkJUnit4TestCaseFacade, fDescription_, OrgJunitRunnerDescription *)

#endif // _JunitFrameworkJUnit4TestCaseFacade_H_
