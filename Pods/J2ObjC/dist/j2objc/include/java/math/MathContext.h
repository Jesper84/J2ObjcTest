//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/math/src/main/java/java/math/MathContext.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaMathMathContext_H_
#define _JavaMathMathContext_H_

@class IOSCharArray;
@class JavaMathRoundingModeEnum;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define JavaMathMathContext_serialVersionUID 5579720004786848255

@interface JavaMathMathContext : NSObject < JavaIoSerializable > {
 @public
  int precision_;
  JavaMathRoundingModeEnum *roundingMode_;
}

+ (JavaMathMathContext *)DECIMAL128;
+ (JavaMathMathContext *)DECIMAL32;
+ (JavaMathMathContext *)DECIMAL64;
+ (JavaMathMathContext *)UNLIMITED;
+ (IOSCharArray *)chPrecision;
+ (IOSCharArray *)chRoundingMode;
- (id)initWithInt:(int)precision;
- (id)initWithInt:(int)precision
withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)roundingMode;
- (id)initWithNSString:(NSString *)val;
- (int)getPrecision;
- (JavaMathRoundingModeEnum *)getRoundingMode;
- (BOOL)isEqual:(id)x;
- (NSUInteger)hash;
- (NSString *)description;
- (void)copyAllFieldsTo:(JavaMathMathContext *)other;
@end

J2OBJC_FIELD_SETTER(JavaMathMathContext, roundingMode_, JavaMathRoundingModeEnum *)

#endif // _JavaMathMathContext_H_
