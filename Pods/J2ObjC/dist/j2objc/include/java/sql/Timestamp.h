//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Timestamp.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaSqlTimestamp_H_
#define _JavaSqlTimestamp_H_

@class JavaLangIllegalArgumentException;
@class JavaLangStringBuilder;

#import "JreEmulation.h"
#include "java/util/Date.h"

#define JavaSqlTimestamp_serialVersionUID 2745179027874758501

@interface JavaSqlTimestamp : JavaUtilDate {
 @public
  int nanos_;
}

+ (NSString *)TIME_FORMAT_REGEX;
+ (NSString *)PADDING;
- (id)initWithInt:(int)theYear
          withInt:(int)theMonth
          withInt:(int)theDate
          withInt:(int)theHour
          withInt:(int)theMinute
          withInt:(int)theSecond
          withInt:(int)theNano;
- (id)initWithLong:(long long int)theTime;
- (BOOL)afterWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;
- (BOOL)beforeWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;
- (int)compareToWithId:(JavaUtilDate *)theObject;
- (int)compareToWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;
- (BOOL)isEqual:(id)theObject;
- (BOOL)equalsWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;
- (int)getNanos;
- (long long int)getTime;
- (void)setNanosWithInt:(int)n;
- (void)setTimeWithLong:(long long int)theTime;
- (void)setTimeImplWithLong:(long long int)theTime;
- (NSString *)description;
- (void)formatWithInt:(int)date
              withInt:(int)digits
withJavaLangStringBuilder:(JavaLangStringBuilder *)sb;
+ (JavaSqlTimestamp *)valueOfWithNSString:(NSString *)s;
+ (JavaLangIllegalArgumentException *)badTimestampStringWithNSString:(NSString *)s;
- (void)copyAllFieldsTo:(JavaSqlTimestamp *)other;
@end

#endif // _JavaSqlTimestamp_H_
