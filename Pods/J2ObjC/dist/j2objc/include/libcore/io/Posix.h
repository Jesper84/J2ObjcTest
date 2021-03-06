//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/Posix.java
//
//  Created by tball on 9/18/13.
//

#ifndef _LibcoreIoPosix_H_
#define _LibcoreIoPosix_H_

@class JavaIoFileDescriptor;

#import "JreEmulation.h"
#include "libcore/io/Os.h"

@interface LibcoreIoPosix : NSObject < LibcoreIoOs > {
}

+ (int)defaultEncoding;
+ (int *)defaultEncodingRef;
- (id)init;
+ (void)nativeInit;
+ (void)throwErrnoExceptionWithNSString:(NSString *)message
                                withInt:(int)error;
+ (int)throwIfMinusOneWithNSString:(NSString *)name
                           withInt:(int)errorCode;
- (BOOL)accessWithNSString:(NSString *)path
                   withInt:(int)mode;
- (void)chmodWithNSString:(NSString *)path
                  withInt:(int)mode;
- (void)chownWithNSString:(NSString *)path
                  withInt:(int)uid
                  withInt:(int)gid;
- (void)closeWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)javaFd;
- (JavaIoFileDescriptor *)dupWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)oldFd;
- (JavaIoFileDescriptor *)dup2WithJavaIoFileDescriptor:(JavaIoFileDescriptor *)oldFd
                                               withInt:(int)newNativeFd;
- (void)fchmodWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                               withInt:(int)mode;
- (void)fchownWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                               withInt:(int)uid
                               withInt:(int)gid;
- (int)fcntlVoidWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                 withInt:(int)cmd;
- (void)fsyncWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;
- (int)fcntlLongWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                 withInt:(int)cmd
                                withLong:(long long int)arg;
- (BOOL)isattyWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;
- (JavaIoFileDescriptor *)openWithNSString:(NSString *)path
                                   withInt:(int)flags
                                   withInt:(int)mode;
- (NSString *)strerrorWithInt:(int)errno_;
- (void)tcdrainWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;
@end

#endif // _LibcoreIoPosix_H_
