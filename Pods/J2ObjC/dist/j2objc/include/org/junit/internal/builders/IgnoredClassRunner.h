//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/internal/builders/IgnoredClassRunner.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitInternalBuildersIgnoredClassRunner_H_
#define _OrgJunitInternalBuildersIgnoredClassRunner_H_

@class IOSClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;

#import "JreEmulation.h"
#include "org/junit/runner/Runner.h"

@interface OrgJunitInternalBuildersIgnoredClassRunner : OrgJunitRunnerRunner {
 @public
  IOSClass *fTestClass_;
}

- (id)initWithIOSClass:(IOSClass *)testClass;
- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;
- (OrgJunitRunnerDescription *)getDescription;
- (void)copyAllFieldsTo:(OrgJunitInternalBuildersIgnoredClassRunner *)other;
@end

J2OBJC_FIELD_SETTER(OrgJunitInternalBuildersIgnoredClassRunner, fTestClass_, IOSClass *)

#endif // _OrgJunitInternalBuildersIgnoredClassRunner_H_
