//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/TypeVariable.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaLangReflectTypeVariable_H_
#define _JavaLangReflectTypeVariable_H_

@class IOSObjectArray;
@protocol JavaLangReflectGenericDeclaration;

#import "JreEmulation.h"
#include "java/lang/reflect/Type.h"

@protocol JavaLangReflectTypeVariable < JavaLangReflectType, NSObject, JavaObject >
- (IOSObjectArray *)getBounds;
- (id)getGenericDeclaration;
- (NSString *)getName;
@end

#endif // _JavaLangReflectTypeVariable_H_
