//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaIoReader_H_
#define _JavaIoReader_H_

@class IOSCharArray;
@class JavaNioCharBuffer;

#import "JreEmulation.h"
#include "java/io/Closeable.h"
#include "java/lang/Readable.h"

@interface JavaIoReader : NSObject < JavaLangReadable, JavaIoCloseable > {
 @public
  id lock_;
}

- (id)init;
- (id)initWithId:(id)lock;
- (void)close;
- (void)markWithInt:(int)readLimit;
- (BOOL)markSupported;
- (int)read;
- (int)readWithCharArray:(IOSCharArray *)buf;
- (int)readWithCharArray:(IOSCharArray *)buf
                 withInt:(int)offset
                 withInt:(int)count;
- (BOOL)ready;
- (void)reset;
- (long long int)skipWithLong:(long long int)count;
- (int)readWithJavaNioCharBuffer:(JavaNioCharBuffer *)target;
- (void)copyAllFieldsTo:(JavaIoReader *)other;
@end

J2OBJC_FIELD_SETTER(JavaIoReader, lock_, id)

#endif // _JavaIoReader_H_