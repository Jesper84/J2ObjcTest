//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _LibcoreUtilEmptyArray_H_
#define _LibcoreUtilEmptyArray_H_

@class IOSBooleanArray;
@class IOSByteArray;
@class IOSCharArray;
@class IOSDoubleArray;
@class IOSIntArray;
@class IOSObjectArray;

#import "JreEmulation.h"

@interface LibcoreUtilEmptyArray : NSObject {
}

+ (IOSBooleanArray *)BOOLEAN;
+ (IOSByteArray *)BYTE;
+ (IOSCharArray *)CHAR;
+ (IOSDoubleArray *)DOUBLE;
+ (IOSIntArray *)INT;
+ (IOSObjectArray *)CLASS;
+ (IOSObjectArray *)OBJECT;
+ (IOSObjectArray *)STRING;
+ (IOSObjectArray *)THROWABLE;
+ (IOSObjectArray *)STACK_TRACE_ELEMENT;
- (id)init;
@end

#endif // _LibcoreUtilEmptyArray_H_
