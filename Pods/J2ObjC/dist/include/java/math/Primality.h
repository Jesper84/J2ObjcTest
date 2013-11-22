//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaMathPrimality_H_
#define _JavaMathPrimality_H_

@class IOSIntArray;
@class IOSObjectArray;
@class JavaMathBigInteger;
@class JavaUtilRandom;

#import "JreEmulation.h"

@interface JavaMathPrimality : NSObject {
}

+ (IOSIntArray *)primes;
+ (IOSObjectArray *)BIprimes;
+ (IOSIntArray *)BITS;
+ (IOSObjectArray *)offsetPrimes;
- (id)init;
+ (JavaMathBigInteger *)nextProbablePrimeWithJavaMathBigInteger:(JavaMathBigInteger *)n;
+ (JavaMathBigInteger *)consBigIntegerWithInt:(int)bitLength
                                      withInt:(int)certainty
                           withJavaUtilRandom:(JavaUtilRandom *)rnd;
+ (BOOL)isProbablePrimeWithJavaMathBigInteger:(JavaMathBigInteger *)n
                                      withInt:(int)certainty;
+ (BOOL)millerRabinWithJavaMathBigInteger:(JavaMathBigInteger *)n
                                  withInt:(int)t;
@end

#endif // _JavaMathPrimality_H_