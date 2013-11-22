//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/runner/manipulation/Filter.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitRunnerManipulationFilter_H_
#define _OrgJunitRunnerManipulationFilter_H_

@class OrgJunitRunnerDescription;

#import "JreEmulation.h"

@interface OrgJunitRunnerManipulationFilter : NSObject {
}

+ (OrgJunitRunnerManipulationFilter *)ALL;
+ (void)setALL:(OrgJunitRunnerManipulationFilter *)ALL;
+ (OrgJunitRunnerManipulationFilter *)matchMethodDescriptionWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)desiredDescription;
- (BOOL)shouldRunWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;
- (NSString *)describe;
- (void)applyWithId:(id)child;
- (OrgJunitRunnerManipulationFilter *)intersectWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)second;
- (id)init;
@end

@interface OrgJunitRunnerManipulationFilter_$1 : OrgJunitRunnerManipulationFilter {
}

- (BOOL)shouldRunWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;
- (NSString *)describe;
- (void)applyWithId:(id)child;
- (OrgJunitRunnerManipulationFilter *)intersectWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)second;
- (id)init;
@end

@interface OrgJunitRunnerManipulationFilter_$2 : OrgJunitRunnerManipulationFilter {
 @public
  OrgJunitRunnerDescription *val$desiredDescription_;
}

- (BOOL)shouldRunWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;
- (NSString *)describe;
- (id)initWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)capture$0;
@end

J2OBJC_FIELD_SETTER(OrgJunitRunnerManipulationFilter_$2, val$desiredDescription_, OrgJunitRunnerDescription *)

@interface OrgJunitRunnerManipulationFilter_$3 : OrgJunitRunnerManipulationFilter {
 @public
  OrgJunitRunnerManipulationFilter *val$first_;
  OrgJunitRunnerManipulationFilter *val$second_;
}

- (BOOL)shouldRunWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;
- (NSString *)describe;
- (id)initWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)capture$0
          withOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)capture$1;
@end

J2OBJC_FIELD_SETTER(OrgJunitRunnerManipulationFilter_$3, val$first_, OrgJunitRunnerManipulationFilter *)
J2OBJC_FIELD_SETTER(OrgJunitRunnerManipulationFilter_$3, val$second_, OrgJunitRunnerManipulationFilter *)

#endif // _OrgJunitRunnerManipulationFilter_H_