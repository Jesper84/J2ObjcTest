//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaLangRefPhantomReference_H_
#define _JavaLangRefPhantomReference_H_

@class JavaLangRefReferenceQueue;

#import "JreEmulation.h"
#include "java/lang/ref/Reference.h"

@interface JavaLangRefPhantomReference : JavaLangRefReference {
}

- (id)initWithId:(id)r
withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)q;
- (id)get;
@end

#endif // _JavaLangRefPhantomReference_H_