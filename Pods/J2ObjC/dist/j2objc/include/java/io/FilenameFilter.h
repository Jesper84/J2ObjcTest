//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/io/FilenameFilter.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaIoFilenameFilter_H_
#define _JavaIoFilenameFilter_H_

@class JavaIoFile;

#import "JreEmulation.h"

@protocol JavaIoFilenameFilter < NSObject, JavaObject >
- (BOOL)acceptWithJavaIoFile:(JavaIoFile *)dir
                withNSString:(NSString *)filename;
@end

#endif // _JavaIoFilenameFilter_H_
