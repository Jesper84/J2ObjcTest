//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaLangError_H_
#define _JavaLangError_H_

#import "JreEmulation.h"
#include "java/lang/Throwable.h"

#define JavaLangError_serialVersionUID 4980196508277280342

@interface JavaLangError : JavaLangThrowable {
}

- (id)init;
- (id)initWithNSString:(NSString *)detailMessage;
- (id)initWithNSString:(NSString *)detailMessage
 withJavaLangThrowable:(JavaLangThrowable *)throwable;
- (id)initWithJavaLangThrowable:(JavaLangThrowable *)throwable;
@end

#endif // _JavaLangError_H_