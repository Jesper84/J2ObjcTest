//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/internal/RealSystem.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitInternalRealSystem_H_
#define _OrgJunitInternalRealSystem_H_

@class JavaIoPrintStream;

#import "JreEmulation.h"
#include "org/junit/internal/JUnitSystem.h"

@interface OrgJunitInternalRealSystem : NSObject < OrgJunitInternalJUnitSystem > {
}

- (void)exitWithInt:(int)code;
- (JavaIoPrintStream *)out;
- (id)init;
@end

#endif // _OrgJunitInternalRealSystem_H_