//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/lang/ClassNotFoundException.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaLangClassNotFoundException_H_
#define _JavaLangClassNotFoundException_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/lang/Exception.h"

#define JavaLangClassNotFoundException_serialVersionUID 9176873029745254542

@interface JavaLangClassNotFoundException : JavaLangException {
 @public
  JavaLangThrowable *ex_;
}

- (id)init;
- (id)initWithNSString:(NSString *)detailMessage;
- (id)initWithNSString:(NSString *)detailMessage
 withJavaLangThrowable:(JavaLangThrowable *)exception;
- (JavaLangThrowable *)getException;
- (JavaLangThrowable *)getCause;
- (void)copyAllFieldsTo:(JavaLangClassNotFoundException *)other;
@end

J2OBJC_FIELD_SETTER(JavaLangClassNotFoundException, ex_, JavaLangThrowable *)

#endif // _JavaLangClassNotFoundException_H_
