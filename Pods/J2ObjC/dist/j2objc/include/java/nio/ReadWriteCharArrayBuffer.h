//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/nio/src/main/java/common/java/nio/ReadWriteCharArrayBuffer.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaNioReadWriteCharArrayBuffer_H_
#define _JavaNioReadWriteCharArrayBuffer_H_

@class IOSCharArray;
@class JavaNioCharBuffer;

#import "JreEmulation.h"
#include "java/nio/CharArrayBuffer.h"

@interface JavaNioReadWriteCharArrayBuffer : JavaNioCharArrayBuffer {
}

+ (JavaNioReadWriteCharArrayBuffer *)copy__WithJavaNioCharArrayBuffer:(JavaNioCharArrayBuffer *)other
                                                              withInt:(int)markOfOther OBJC_METHOD_FAMILY_NONE;
- (id)initWithCharArray:(IOSCharArray *)array;
- (id)initWithInt:(int)capacity;
- (id)initWithInt:(int)capacity
    withCharArray:(IOSCharArray *)backingArray
          withInt:(int)arrayOffset;
- (JavaNioCharBuffer *)asReadOnlyBuffer;
- (JavaNioCharBuffer *)compact;
- (JavaNioCharBuffer *)duplicate;
- (BOOL)isReadOnly;
- (IOSCharArray *)protectedArray;
- (int)protectedArrayOffset;
- (BOOL)protectedHasArray;
- (JavaNioCharBuffer *)putWithChar:(unichar)c;
- (JavaNioCharBuffer *)putWithInt:(int)index
                         withChar:(unichar)c;
- (JavaNioCharBuffer *)putWithCharArray:(IOSCharArray *)src
                                withInt:(int)off
                                withInt:(int)len;
- (JavaNioCharBuffer *)slice;
@end

#endif // _JavaNioReadWriteCharArrayBuffer_H_
