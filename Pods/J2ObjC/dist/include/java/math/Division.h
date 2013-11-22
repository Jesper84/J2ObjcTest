//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaMathDivision_H_
#define _JavaMathDivision_H_

@class IOSIntArray;
@class IOSObjectArray;
@class JavaMathBigInteger;

#import "JreEmulation.h"

@interface JavaMathDivision : NSObject {
}

+ (IOSIntArray *)divideWithIntArray:(IOSIntArray *)quot
                            withInt:(int)quotLength
                       withIntArray:(IOSIntArray *)a
                            withInt:(int)aLength
                       withIntArray:(IOSIntArray *)b
                            withInt:(int)bLength;
+ (int)divideArrayByIntWithIntArray:(IOSIntArray *)dest
                       withIntArray:(IOSIntArray *)src
                            withInt:(int)srcLength
                            withInt:(int)divisor;
+ (int)remainderArrayByIntWithIntArray:(IOSIntArray *)src
                               withInt:(int)srcLength
                               withInt:(int)divisor;
+ (int)remainderWithJavaMathBigInteger:(JavaMathBigInteger *)dividend
                               withInt:(int)divisor;
+ (long long int)divideLongByIntWithLong:(long long int)a
                                 withInt:(int)b;
+ (IOSObjectArray *)divideAndRemainderByIntegerWithJavaMathBigInteger:(JavaMathBigInteger *)val
                                                              withInt:(int)divisor
                                                              withInt:(int)divisorSign;
+ (int)multiplyAndSubtractWithIntArray:(IOSIntArray *)a
                               withInt:(int)start
                          withIntArray:(IOSIntArray *)b
                               withInt:(int)bLen
                               withInt:(int)c;
+ (JavaMathBigInteger *)gcdBinaryWithJavaMathBigInteger:(JavaMathBigInteger *)op1
                                 withJavaMathBigInteger:(JavaMathBigInteger *)op2;
+ (long long int)gcdBinaryWithLong:(long long int)op1
                          withLong:(long long int)op2;
+ (JavaMathBigInteger *)modInverseMontgomeryWithJavaMathBigInteger:(JavaMathBigInteger *)a
                                            withJavaMathBigInteger:(JavaMathBigInteger *)p;
+ (int)calcNWithJavaMathBigInteger:(JavaMathBigInteger *)a;
+ (JavaMathBigInteger *)squareAndMultiplyWithJavaMathBigInteger:(JavaMathBigInteger *)x2
                                         withJavaMathBigInteger:(JavaMathBigInteger *)a2
                                         withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                         withJavaMathBigInteger:(JavaMathBigInteger *)modulus
                                                        withInt:(int)n2;
+ (JavaMathBigInteger *)modInverseHarsWithJavaMathBigInteger:(JavaMathBigInteger *)a
                                      withJavaMathBigInteger:(JavaMathBigInteger *)m;
+ (JavaMathBigInteger *)slidingWindowWithJavaMathBigInteger:(JavaMathBigInteger *)x2
                                     withJavaMathBigInteger:(JavaMathBigInteger *)a2
                                     withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                     withJavaMathBigInteger:(JavaMathBigInteger *)modulus
                                                    withInt:(int)n2;
+ (JavaMathBigInteger *)oddModPowWithJavaMathBigInteger:(JavaMathBigInteger *)base
                                 withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                 withJavaMathBigInteger:(JavaMathBigInteger *)modulus;
+ (JavaMathBigInteger *)evenModPowWithJavaMathBigInteger:(JavaMathBigInteger *)base
                                  withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                  withJavaMathBigInteger:(JavaMathBigInteger *)modulus;
+ (JavaMathBigInteger *)pow2ModPowWithJavaMathBigInteger:(JavaMathBigInteger *)base
                                  withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                                 withInt:(int)j;
+ (void)monReductionWithIntArray:(IOSIntArray *)res
          withJavaMathBigInteger:(JavaMathBigInteger *)modulus
                         withInt:(int)n2;
+ (JavaMathBigInteger *)monProWithJavaMathBigInteger:(JavaMathBigInteger *)a
                              withJavaMathBigInteger:(JavaMathBigInteger *)b
                              withJavaMathBigInteger:(JavaMathBigInteger *)modulus
                                             withInt:(int)n2;
+ (JavaMathBigInteger *)finalSubtractionWithIntArray:(IOSIntArray *)res
                              withJavaMathBigInteger:(JavaMathBigInteger *)modulus;
+ (JavaMathBigInteger *)modPow2InverseWithJavaMathBigInteger:(JavaMathBigInteger *)x
                                                     withInt:(int)n;
+ (void)inplaceModPow2WithJavaMathBigInteger:(JavaMathBigInteger *)x
                                     withInt:(int)n;
- (id)init;
@end

#endif // _JavaMathDivision_H_
