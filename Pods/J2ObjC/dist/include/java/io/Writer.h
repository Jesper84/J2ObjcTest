//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaIoWriter_H_
#define _JavaIoWriter_H_

@class IOSCharArray;
@protocol JavaLangCharSequence;

#import "JreEmulation.h"
#include "java/io/Closeable.h"
#include "java/io/Flushable.h"
#include "java/lang/Appendable.h"

@interface JavaIoWriter : NSObject < JavaLangAppendable, JavaIoCloseable, JavaIoFlushable > {
 @public
  id lock_;
}

+ (NSString *)TOKEN_NULL;
- (id)init;
- (id)initWithId:(id)lock;
- (void)close;
- (void)flush;
- (void)writeWithCharArray:(IOSCharArray *)buf;
- (void)writeWithCharArray:(IOSCharArray *)buf
                   withInt:(int)offset
                   withInt:(int)count;
- (void)writeWithInt:(int)oneChar;
- (void)writeWithNSString:(NSString *)str;
- (void)writeWithNSString:(NSString *)str
                  withInt:(int)offset
                  withInt:(int)count;
- (JavaIoWriter *)appendWithChar:(unichar)c;
- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;
- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                         withInt:(int)start
                                         withInt:(int)end;
- (BOOL)checkError;
- (void)copyAllFieldsTo:(JavaIoWriter *)other;
@end

J2OBJC_FIELD_SETTER(JavaIoWriter, lock_, id)

#endif // _JavaIoWriter_H_
