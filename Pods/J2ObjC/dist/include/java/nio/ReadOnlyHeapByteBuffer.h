//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaNioReadOnlyHeapByteBuffer_H_
#define _JavaNioReadOnlyHeapByteBuffer_H_

@class IOSByteArray;
@class JavaNioByteBuffer;

#import "JreEmulation.h"
#include "java/nio/HeapByteBuffer.h"

@interface JavaNioReadOnlyHeapByteBuffer : JavaNioHeapByteBuffer {
}

+ (JavaNioReadOnlyHeapByteBuffer *)copy__WithJavaNioHeapByteBuffer:(JavaNioHeapByteBuffer *)other
                                                           withInt:(int)markOfOther OBJC_METHOD_FAMILY_NONE;
- (id)initWithByteArray:(IOSByteArray *)backingArray
                withInt:(int)capacity
                withInt:(int)arrayOffset;
- (JavaNioByteBuffer *)asReadOnlyBuffer;
- (JavaNioByteBuffer *)compact;
- (JavaNioByteBuffer *)duplicate;
- (BOOL)isReadOnly;
- (IOSByteArray *)protectedArray;
- (int)protectedArrayOffset;
- (BOOL)protectedHasArray;
- (JavaNioByteBuffer *)putWithByte:(char)b;
- (JavaNioByteBuffer *)putWithInt:(int)index
                         withByte:(char)b;
- (JavaNioByteBuffer *)putWithByteArray:(IOSByteArray *)src
                                withInt:(int)off
                                withInt:(int)len;
- (JavaNioByteBuffer *)putDoubleWithDouble:(double)value;
- (JavaNioByteBuffer *)putDoubleWithInt:(int)index
                             withDouble:(double)value;
- (JavaNioByteBuffer *)putFloatWithFloat:(float)value;
- (JavaNioByteBuffer *)putFloatWithInt:(int)index
                             withFloat:(float)value;
- (JavaNioByteBuffer *)putIntWithInt:(int)value;
- (JavaNioByteBuffer *)putIntWithInt:(int)index
                             withInt:(int)value;
- (JavaNioByteBuffer *)putLongWithInt:(int)index
                             withLong:(long long int)value;
- (JavaNioByteBuffer *)putLongWithLong:(long long int)value;
- (JavaNioByteBuffer *)putShortWithInt:(int)index
                             withShort:(short int)value;
- (JavaNioByteBuffer *)putShortWithShort:(short int)value;
- (JavaNioByteBuffer *)putWithJavaNioByteBuffer:(JavaNioByteBuffer *)buf;
- (JavaNioByteBuffer *)slice;
@end

#endif // _JavaNioReadOnlyHeapByteBuffer_H_
