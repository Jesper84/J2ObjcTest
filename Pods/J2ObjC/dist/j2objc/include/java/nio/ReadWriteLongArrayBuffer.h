//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/nio/src/main/java/common/java/nio/ReadWriteLongArrayBuffer.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaNioReadWriteLongArrayBuffer_H_
#define _JavaNioReadWriteLongArrayBuffer_H_

@class IOSLongArray;
@class JavaNioLongBuffer;

#import "JreEmulation.h"
#include "java/nio/LongArrayBuffer.h"

@interface JavaNioReadWriteLongArrayBuffer : JavaNioLongArrayBuffer {
}

+ (JavaNioReadWriteLongArrayBuffer *)copy__WithJavaNioLongArrayBuffer:(JavaNioLongArrayBuffer *)other
                                                              withInt:(int)markOfOther OBJC_METHOD_FAMILY_NONE;
- (id)initWithLongArray:(IOSLongArray *)array;
- (id)initWithInt:(int)capacity;
- (id)initWithInt:(int)capacity
    withLongArray:(IOSLongArray *)backingArray
          withInt:(int)arrayOffset;
- (JavaNioLongBuffer *)asReadOnlyBuffer;
- (JavaNioLongBuffer *)compact;
- (JavaNioLongBuffer *)duplicate;
- (BOOL)isReadOnly;
- (IOSLongArray *)protectedArray;
- (int)protectedArrayOffset;
- (BOOL)protectedHasArray;
- (JavaNioLongBuffer *)putWithLong:(long long int)c;
- (JavaNioLongBuffer *)putWithInt:(int)index
                         withLong:(long long int)c;
- (JavaNioLongBuffer *)putWithLongArray:(IOSLongArray *)src
                                withInt:(int)off
                                withInt:(int)len;
- (JavaNioLongBuffer *)slice;
@end

#endif // _JavaNioReadWriteLongArrayBuffer_H_
