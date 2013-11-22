//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaIoFileInputStream_H_
#define _JavaIoFileInputStream_H_

@class IOSByteArray;
@class JavaIoFile;
@class JavaIoFileDescriptor;

#import "JreEmulation.h"
#include "java/io/Closeable.h"
#include "java/io/InputStream.h"

#define JavaIoFileInputStream_INVALID_STREAM -1

@interface JavaIoFileInputStream : JavaIoInputStream < JavaIoCloseable > {
 @public
  JavaIoFileDescriptor *fd_;
  long long int stream_;
  id repositioningLock_;
}

- (id)initWithJavaIoFile:(JavaIoFile *)file;
- (long long int)openWithNSString:(NSString *)path;
- (id)initWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;
- (id)initWithNSString:(NSString *)fileName;
- (int)available;
- (int)nativeAvailableWithLong:(long long int)descriptor;
- (int)nativeTtyAvailable;
- (void)close;
- (void)nativeClose;
- (void)dealloc;
- (JavaIoFileDescriptor *)getFD;
- (int)read;
- (int)readWithByteArray:(IOSByteArray *)buffer;
- (int)readWithByteArray:(IOSByteArray *)buffer
                 withInt:(int)offset
                 withInt:(int)count;
- (int)nativeReadWithByteArray:(IOSByteArray *)buffer
                       withInt:(int)offset
                       withInt:(int)count;
- (long long int)skipWithLong:(long long int)count;
- (long long int)seekWithLong:(long long int)count;
- (void)openCheck;
- (void)copyAllFieldsTo:(JavaIoFileInputStream *)other;
@end

J2OBJC_FIELD_SETTER(JavaIoFileInputStream, fd_, JavaIoFileDescriptor *)
J2OBJC_FIELD_SETTER(JavaIoFileInputStream, repositioningLock_, id)

#endif // _JavaIoFileInputStream_H_
