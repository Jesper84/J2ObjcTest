//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/lang/StackTraceElement.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaLangStackTraceElement_H_
#define _JavaLangStackTraceElement_H_

#import "JreEmulation.h"

@interface JavaLangStackTraceElement : NSObject {
 @public
  NSString *className__;
  NSString *methodName_;
  NSString *fileName_;
  int lineNumber_;
  long long int address_;
}

- (NSString *)getClassName;
- (NSString *)getMethodName;
- (NSString *)getFileName;
- (int)getLineNumber;
- (id)initWithNSString:(NSString *)className_
          withNSString:(NSString *)methodName
          withNSString:(NSString *)fileName
               withInt:(int)lineNumber;
- (id)initWithLong:(long long int)address;
- (NSString *)description;
- (void)initializeFromAddress OBJC_METHOD_FAMILY_NONE;
- (void)copyAllFieldsTo:(JavaLangStackTraceElement *)other;
@end

J2OBJC_FIELD_SETTER(JavaLangStackTraceElement, className__, NSString *)
J2OBJC_FIELD_SETTER(JavaLangStackTraceElement, methodName_, NSString *)
J2OBJC_FIELD_SETTER(JavaLangStackTraceElement, fileName_, NSString *)

#endif // _JavaLangStackTraceElement_H_
