//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _OrgJunitRunnersSuite_H_
#define _OrgJunitRunnersSuite_H_

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;
@class OrgJunitRunnerRunner;
@class OrgJunitRunnersModelRunnerBuilder;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "java/lang/annotation/Annotation.h"
#include "org/junit/runners/ParentRunner.h"

@interface OrgJunitRunnersSuite : OrgJunitRunnersParentRunner {
 @public
  id<JavaUtilList> fRunners_;
}

+ (OrgJunitRunnerRunner *)emptySuite;
+ (IOSObjectArray *)getAnnotatedClassesWithIOSClass:(IOSClass *)klass;
- (id)initWithIOSClass:(IOSClass *)klass
withOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder;
- (id)initWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                              withIOSClassArray:(IOSObjectArray *)classes;
- (id)initWithIOSClass:(IOSClass *)klass
     withIOSClassArray:(IOSObjectArray *)suiteClasses;
- (id)initWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                   withIOSClass:(IOSClass *)klass
                              withIOSClassArray:(IOSObjectArray *)suiteClasses;
- (id)initWithIOSClass:(IOSClass *)klass
      withJavaUtilList:(id<JavaUtilList>)runners;
- (id<JavaUtilList>)getChildren;
- (OrgJunitRunnerDescription *)describeChildWithId:(OrgJunitRunnerRunner *)child;
- (void)runChildWithId:(OrgJunitRunnerRunner *)runner
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;
- (void)copyAllFieldsTo:(OrgJunitRunnersSuite *)other;
@end

J2OBJC_FIELD_SETTER(OrgJunitRunnersSuite, fRunners_, id<JavaUtilList>)

@protocol OrgJunitRunnersSuite_SuiteClasses < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

@end

@interface OrgJunitRunnersSuite_SuiteClassesImpl : NSObject < OrgJunitRunnersSuite_SuiteClasses > {
 @private
  IOSObjectArray *value;
}

- (id)initWithValue:(IOSObjectArray *)value_;

@end

#endif // _OrgJunitRunnersSuite_H_