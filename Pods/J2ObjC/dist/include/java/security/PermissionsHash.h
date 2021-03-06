//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaSecurityPermissionsHash_H_
#define _JavaSecurityPermissionsHash_H_

@class JavaSecurityPermission;
@class JavaUtilHashtable;
@protocol JavaUtilEnumeration;

#import "JreEmulation.h"
#include "java/security/PermissionCollection.h"

#define JavaSecurityPermissionsHash_serialVersionUID -8491988220802933440

@interface JavaSecurityPermissionsHash : JavaSecurityPermissionCollection {
 @public
  JavaUtilHashtable *perms_;
}

- (void)addWithJavaSecurityPermission:(JavaSecurityPermission *)permission;
- (id<JavaUtilEnumeration>)elements;
- (BOOL)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;
- (id)init;
- (void)copyAllFieldsTo:(JavaSecurityPermissionsHash *)other;
@end

J2OBJC_FIELD_SETTER(JavaSecurityPermissionsHash, perms_, JavaUtilHashtable *)

#endif // _JavaSecurityPermissionsHash_H_
