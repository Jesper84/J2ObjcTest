//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaNioCharArrayBuffer_H_
#define _JavaNioCharArrayBuffer_H_

@class IOSCharArray;
@class JavaNioByteOrder;
@protocol JavaLangCharSequence;

#import "JreEmulation.h"
#include "java/nio/CharBuffer.h"

@interface JavaNioCharArrayBuffer : JavaNioCharBuffer {
 @public
  IOSCharArray *backingArray_;
  int offset_;
}

- (id)initWithCharArray:(IOSCharArray *)array;
- (id)initWithInt:(int)capacity;
- (id)initWithInt:(int)capacity
    withCharArray:(IOSCharArray *)backingArray
          withInt:(int)offset;
- (unichar)get;
- (unichar)getWithInt:(int)index;
- (JavaNioCharBuffer *)getWithCharArray:(IOSCharArray *)dest
                                withInt:(int)off
                                withInt:(int)len;
- (BOOL)isDirect;
- (JavaNioByteOrder *)order;
- (id<JavaLangCharSequence>)subSequenceFrom:(int)start to:(int)end;
- (NSString *)sequenceDescription;
- (void)copyAllFieldsTo:(JavaNioCharArrayBuffer *)other;
@end

J2OBJC_FIELD_SETTER(JavaNioCharArrayBuffer, backingArray_, IOSCharArray *)

#endif // _JavaNioCharArrayBuffer_H_
