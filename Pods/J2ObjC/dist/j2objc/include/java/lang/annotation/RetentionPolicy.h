//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/annotation/RetentionPolicy.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaLangAnnotationRetentionPolicy_H_
#define _JavaLangAnnotationRetentionPolicy_H_

#import "JreEmulation.h"
#include "java/lang/Enum.h"

typedef enum {
  JavaLangAnnotationRetentionPolicy_SOURCE = 0,
  JavaLangAnnotationRetentionPolicy_CLASS = 1,
  JavaLangAnnotationRetentionPolicy_RUNTIME = 2,
} JavaLangAnnotationRetentionPolicy;

@interface JavaLangAnnotationRetentionPolicyEnum : JavaLangEnum < NSCopying > {
}
+ (JavaLangAnnotationRetentionPolicyEnum *)SOURCE;
+ (JavaLangAnnotationRetentionPolicyEnum *)CLASS;
+ (JavaLangAnnotationRetentionPolicyEnum *)RUNTIME;
+ (IOSObjectArray *)values;
+ (JavaLangAnnotationRetentionPolicyEnum *)valueOfWithNSString:(NSString *)name;
- (id)copyWithZone:(NSZone *)zone;
- (id)initWithNSString:(NSString *)__name withInt:(int)__ordinal;
@end

#endif // _JavaLangAnnotationRetentionPolicy_H_
