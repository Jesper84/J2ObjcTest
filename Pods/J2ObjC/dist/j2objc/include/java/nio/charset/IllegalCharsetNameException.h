//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/IllegalCharsetNameException.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaNioCharsetIllegalCharsetNameException_H_
#define _JavaNioCharsetIllegalCharsetNameException_H_

#import "JreEmulation.h"
#include "java/lang/IllegalArgumentException.h"

#define JavaNioCharsetIllegalCharsetNameException_serialVersionUID 1457525358470002989

@interface JavaNioCharsetIllegalCharsetNameException : JavaLangIllegalArgumentException {
 @public
  NSString *charsetName_;
}

- (id)initWithNSString:(NSString *)charsetName;
- (NSString *)getCharsetName;
- (void)copyAllFieldsTo:(JavaNioCharsetIllegalCharsetNameException *)other;
@end

J2OBJC_FIELD_SETTER(JavaNioCharsetIllegalCharsetNameException, charsetName_, NSString *)

#endif // _JavaNioCharsetIllegalCharsetNameException_H_
