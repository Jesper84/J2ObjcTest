//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaLangException_H_
#define _JavaLangException_H_

#import "JreEmulation.h"
#include "java/lang/Throwable.h"

#define JavaLangException_serialVersionUID -3387516993124229948

@interface JavaLangException : JavaLangThrowable {
}

- (id)init;
- (id)initWithNSString:(NSString *)detailMessage;
- (id)initWithNSString:(NSString *)detailMessage
 withJavaLangThrowable:(JavaLangThrowable *)throwable;
- (id)initWithJavaLangThrowable:(JavaLangThrowable *)throwable;
@end

#endif // _JavaLangException_H_
