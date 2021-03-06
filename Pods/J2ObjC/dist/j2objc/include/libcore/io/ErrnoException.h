//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/ErrnoException.java
//
//  Created by tball on 9/18/13.
//

#ifndef _LibcoreIoErrnoException_H_
#define _LibcoreIoErrnoException_H_

@class JavaIoIOException;
@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/lang/Exception.h"

@interface LibcoreIoErrnoException : JavaLangException {
 @public
  NSString *functionName_;
  int errno__;
}

- (id)initWithNSString:(NSString *)functionName
               withInt:(int)errno_;
- (id)initWithNSString:(NSString *)functionName
               withInt:(int)errno_
 withJavaLangThrowable:(JavaLangThrowable *)cause;
- (NSString *)getMessage;
- (JavaIoIOException *)rethrowAsIOException;
- (void)copyAllFieldsTo:(LibcoreIoErrnoException *)other;
@end

J2OBJC_FIELD_SETTER(LibcoreIoErrnoException, functionName_, NSString *)

#endif // _LibcoreIoErrnoException_H_
