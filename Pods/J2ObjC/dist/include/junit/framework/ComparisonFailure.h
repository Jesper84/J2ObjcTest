//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JunitFrameworkComparisonFailure_H_
#define _JunitFrameworkComparisonFailure_H_

#import "JreEmulation.h"
#include "junit/framework/AssertionFailedError.h"

#define JunitFrameworkComparisonFailure_MAX_CONTEXT_LENGTH 20
#define JunitFrameworkComparisonFailure_serialVersionUID 1

@interface JunitFrameworkComparisonFailure : JunitFrameworkAssertionFailedError {
 @public
  NSString *fExpected_;
  NSString *fActual_;
}

- (id)initWithNSString:(NSString *)message
          withNSString:(NSString *)expected
          withNSString:(NSString *)actual;
- (NSString *)getMessage;
- (NSString *)getActual;
- (NSString *)getExpected;
- (void)copyAllFieldsTo:(JunitFrameworkComparisonFailure *)other;
@end

J2OBJC_FIELD_SETTER(JunitFrameworkComparisonFailure, fExpected_, NSString *)
J2OBJC_FIELD_SETTER(JunitFrameworkComparisonFailure, fActual_, NSString *)

#endif // _JunitFrameworkComparisonFailure_H_
