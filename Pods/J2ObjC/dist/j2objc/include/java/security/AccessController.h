//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/AccessController.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaSecurityAccessController_H_
#define _JavaSecurityAccessController_H_

@class JavaSecurityAccessControlContext;
@class JavaSecurityPermission;
@protocol JavaSecurityPrivilegedAction;
@protocol JavaSecurityPrivilegedExceptionAction;

#import "JreEmulation.h"

@interface JavaSecurityAccessController : NSObject {
}

- (id)init;
+ (id)doPrivilegedWithJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action;
+ (id)doPrivilegedWithJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action
              withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;
+ (id)doPrivilegedWithJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action;
+ (id)doPrivilegedWithJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action
                       withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;
+ (id)doPrivilegedWithCombinerWithJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action;
+ (id)doPrivilegedWithCombinerWithJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action;
+ (void)checkPermissionWithJavaSecurityPermission:(JavaSecurityPermission *)permission;
+ (JavaSecurityAccessControlContext *)getContext;
@end

#endif // _JavaSecurityAccessController_H_
