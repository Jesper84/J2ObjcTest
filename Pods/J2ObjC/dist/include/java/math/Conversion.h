//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaMathConversion_H_
#define _JavaMathConversion_H_

@class IOSIntArray;
@class JavaMathBigInteger;

#import "JreEmulation.h"

@interface JavaMathConversion : NSObject {
}

+ (IOSIntArray *)digitFitInInt;
+ (IOSIntArray *)bigRadices;
- (id)init;
+ (NSString *)bigInteger2StringWithJavaMathBigInteger:(JavaMathBigInteger *)val
                                              withInt:(int)radix;
+ (NSString *)toDecimalScaledStringWithJavaMathBigInteger:(JavaMathBigInteger *)val
                                                  withInt:(int)scale_;
+ (NSString *)toDecimalScaledStringWithLong:(long long int)value
                                    withInt:(int)scale_;
+ (long long int)divideLongByBillionWithLong:(long long int)a;
+ (double)bigInteger2DoubleWithJavaMathBigInteger:(JavaMathBigInteger *)val;
@end

#endif // _JavaMathConversion_H_