//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/GeneralSecurityException.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaSecurityGeneralSecurityException_H_
#define _JavaSecurityGeneralSecurityException_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/lang/Exception.h"

#define JavaSecurityGeneralSecurityException_serialVersionUID 894798122053539237

@interface JavaSecurityGeneralSecurityException : JavaLangException {
}

- (id)initWithNSString:(NSString *)msg;
- (id)init;
- (id)initWithNSString:(NSString *)message
 withJavaLangThrowable:(JavaLangThrowable *)cause;
- (id)initWithJavaLangThrowable:(JavaLangThrowable *)cause;
@end

#endif // _JavaSecurityGeneralSecurityException_H_
