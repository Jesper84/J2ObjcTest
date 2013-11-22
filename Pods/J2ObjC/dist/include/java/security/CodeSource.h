//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaSecurityCodeSource_H_
#define _JavaSecurityCodeSource_H_

@class IOSObjectArray;
@class JavaNetURL;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

@interface JavaSecurityCodeSource : NSObject < JavaIoSerializable > {
}

- (IOSObjectArray *)getObjects;
- (IOSObjectArray *)getCodeSigners;
- (JavaNetURL *)getLocation;
- (BOOL)impliesWithJavaSecurityCodeSource:(JavaSecurityCodeSource *)cs;
- (id)init;
@end

#endif // _JavaSecurityCodeSource_H_