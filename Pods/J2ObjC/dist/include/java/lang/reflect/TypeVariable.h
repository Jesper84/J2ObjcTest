//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
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
