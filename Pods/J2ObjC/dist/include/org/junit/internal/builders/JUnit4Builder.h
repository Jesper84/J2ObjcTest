//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _OrgJunitInternalBuildersJUnit4Builder_H_
#define _OrgJunitInternalBuildersJUnit4Builder_H_

@class IOSClass;
@class OrgJunitRunnerRunner;

#import "JreEmulation.h"
#include "org/junit/runners/model/RunnerBuilder.h"

@interface OrgJunitInternalBuildersJUnit4Builder : OrgJunitRunnersModelRunnerBuilder {
}

- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)testClass;
- (id)init;
@end

#endif // _OrgJunitInternalBuildersJUnit4Builder_H_
