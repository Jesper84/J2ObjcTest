//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/runner/Description.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitRunnerDescription_H_
#define _OrgJunitRunnerDescription_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaUtilArrayList;
@class JavaUtilRegexMatcher;
@protocol JavaLangAnnotationAnnotation;
@protocol JavaUtilCollection;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define OrgJunitRunnerDescription_serialVersionUID 1

@interface OrgJunitRunnerDescription : NSObject < JavaIoSerializable > {
 @public
  JavaUtilArrayList *fChildren_;
  NSString *fDisplayName_;
  IOSObjectArray *fAnnotations_;
}

+ (OrgJunitRunnerDescription *)EMPTY;
+ (OrgJunitRunnerDescription *)TEST_MECHANISM;
+ (OrgJunitRunnerDescription *)createSuiteDescriptionWithNSString:(NSString *)name
                            withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;
+ (OrgJunitRunnerDescription *)createTestDescriptionWithIOSClass:(IOSClass *)clazz
                                                    withNSString:(NSString *)name
                           withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;
+ (OrgJunitRunnerDescription *)createTestDescriptionWithIOSClass:(IOSClass *)clazz
                                                    withNSString:(NSString *)name;
+ (OrgJunitRunnerDescription *)createSuiteDescriptionWithIOSClass:(IOSClass *)testClass;
- (id)initWithNSString:(NSString *)displayName
withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;
- (NSString *)getDisplayName;
- (void)addChildWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;
- (JavaUtilArrayList *)getChildren;
- (BOOL)isSuite;
- (BOOL)isTest;
- (int)testCount;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)obj;
- (NSString *)description;
- (BOOL)isEmpty;
- (OrgJunitRunnerDescription *)childlessCopy;
- (id)getAnnotationWithIOSClass:(IOSClass *)annotationType;
- (id<JavaUtilCollection>)getAnnotations;
- (IOSClass *)getTestClass;
- (NSString *)getClassName;
- (NSString *)getMethodName;
- (NSString *)parseMethod;
- (JavaUtilRegexMatcher *)methodStringMatcher;
- (void)copyAllFieldsTo:(OrgJunitRunnerDescription *)other;
@end

J2OBJC_FIELD_SETTER(OrgJunitRunnerDescription, fChildren_, JavaUtilArrayList *)
J2OBJC_FIELD_SETTER(OrgJunitRunnerDescription, fDisplayName_, NSString *)
J2OBJC_FIELD_SETTER(OrgJunitRunnerDescription, fAnnotations_, IOSObjectArray *)

#endif // _OrgJunitRunnerDescription_H_
