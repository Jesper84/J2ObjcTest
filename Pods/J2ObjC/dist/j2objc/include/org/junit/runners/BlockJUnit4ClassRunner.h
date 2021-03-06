//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/runners/BlockJUnit4ClassRunner.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitRunnersBlockJUnit4ClassRunner_H_
#define _OrgJunitRunnersBlockJUnit4ClassRunner_H_

@class IOSClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;
@class OrgJunitRunnersModelFrameworkMethod;
@class OrgJunitRunnersModelStatement;
@protocol JavaUtilList;
@protocol OrgJunitTest;

#import "JreEmulation.h"
#include "org/junit/internal/runners/model/ReflectiveCallable.h"
#include "org/junit/runners/ParentRunner.h"

@interface OrgJunitRunnersBlockJUnit4ClassRunner : OrgJunitRunnersParentRunner {
}

- (id)initWithIOSClass:(IOSClass *)klass;
- (void)runChildWithId:(OrgJunitRunnersModelFrameworkMethod *)method
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;
- (OrgJunitRunnerDescription *)describeChildWithId:(OrgJunitRunnersModelFrameworkMethod *)method;
- (id<JavaUtilList>)getChildren;
- (id<JavaUtilList>)computeTestMethods;
- (void)collectInitializationErrorsWithJavaUtilList:(id<JavaUtilList>)errors;
- (void)validateNoNonStaticInnerClassWithJavaUtilList:(id<JavaUtilList>)errors;
- (void)validateConstructorWithJavaUtilList:(id<JavaUtilList>)errors;
- (void)validateOnlyOneConstructorWithJavaUtilList:(id<JavaUtilList>)errors;
- (void)validateZeroArgConstructorWithJavaUtilList:(id<JavaUtilList>)errors;
- (BOOL)hasOneConstructor;
- (void)validateInstanceMethodsWithJavaUtilList:(id<JavaUtilList>)errors;
- (void)validateFieldsWithJavaUtilList:(id<JavaUtilList>)errors;
- (void)validateTestMethodsWithJavaUtilList:(id<JavaUtilList>)errors;
- (id)createTest;
- (NSString *)testNameWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method;
- (OrgJunitRunnersModelStatement *)methodBlockWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method;
- (OrgJunitRunnersModelStatement *)methodInvokerWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                                 withId:(id)test;
- (OrgJunitRunnersModelStatement *)possiblyExpectingExceptionsWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                                               withId:(id)test
                                                                    withOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)next;
- (OrgJunitRunnersModelStatement *)withPotentialTimeoutWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                                        withId:(id)test
                                                             withOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)next;
- (OrgJunitRunnersModelStatement *)withBeforesWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                               withId:(id)target
                                                    withOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;
- (OrgJunitRunnersModelStatement *)withAftersWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                              withId:(id)target
                                                   withOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;
- (OrgJunitRunnersModelStatement *)withRulesWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                             withId:(id)target
                                                  withOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;
- (OrgJunitRunnersModelStatement *)withMethodRulesWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                                   withId:(id)target
                                                        withOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)result;
- (id<JavaUtilList>)getMethodRulesWithId:(id)target;
- (id<JavaUtilList>)rulesWithId:(id)target;
- (OrgJunitRunnersModelStatement *)withTestRulesWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                                 withId:(id)target
                                                      withOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;
- (id<JavaUtilList>)getTestRulesWithId:(id)target;
- (IOSClass *)getExpectedExceptionWithOrgJunitTest:(id<OrgJunitTest>)annotation;
- (BOOL)expectsExceptionWithOrgJunitTest:(id<OrgJunitTest>)annotation;
- (long long int)getTimeoutWithOrgJunitTest:(id<OrgJunitTest>)annotation;
@end

@interface OrgJunitRunnersBlockJUnit4ClassRunner_$1 : OrgJunitInternalRunnersModelReflectiveCallable {
 @public
  OrgJunitRunnersBlockJUnit4ClassRunner *this$0_;
}

- (id)runReflectiveCall;
- (id)initWithOrgJunitRunnersBlockJUnit4ClassRunner:(OrgJunitRunnersBlockJUnit4ClassRunner *)outer$;
@end

J2OBJC_FIELD_SETTER(OrgJunitRunnersBlockJUnit4ClassRunner_$1, this$0_, OrgJunitRunnersBlockJUnit4ClassRunner *)

#endif // _OrgJunitRunnersBlockJUnit4ClassRunner_H_
