//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/internal/builders/AnnotatedBuilder.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitInternalBuildersAnnotatedBuilder_H_
#define _OrgJunitInternalBuildersAnnotatedBuilder_H_

@class IOSClass;
@class OrgJunitRunnerRunner;

#import "JreEmulation.h"
#include "org/junit/runners/model/RunnerBuilder.h"

@interface OrgJunitInternalBuildersAnnotatedBuilder : OrgJunitRunnersModelRunnerBuilder {
 @public
  OrgJunitRunnersModelRunnerBuilder *fSuiteBuilder_;
}

+ (NSString *)CONSTRUCTOR_ERROR_FORMAT;
- (id)initWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)suiteBuilder;
- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)testClass;
- (OrgJunitRunnerRunner *)buildRunnerWithIOSClass:(IOSClass *)runnerClass
                                     withIOSClass:(IOSClass *)testClass;
- (void)copyAllFieldsTo:(OrgJunitInternalBuildersAnnotatedBuilder *)other;
@end

J2OBJC_FIELD_SETTER(OrgJunitInternalBuildersAnnotatedBuilder, fSuiteBuilder_, OrgJunitRunnersModelRunnerBuilder *)

#endif // _OrgJunitInternalBuildersAnnotatedBuilder_H_
