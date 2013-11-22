//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaUtilPropertyResourceBundle_H_
#define _JavaUtilPropertyResourceBundle_H_

@class JavaIoInputStream;
@class JavaIoReader;
@class JavaUtilProperties;
@protocol JavaUtilSet;

#import "JreEmulation.h"
#include "java/util/Enumeration.h"
#include "java/util/ResourceBundle.h"

@interface JavaUtilPropertyResourceBundle : JavaUtilResourceBundle {
 @public
  JavaUtilProperties *resources_;
}

- (id)initWithJavaIoInputStream:(JavaIoInputStream *)stream;
- (id)initWithJavaIoReader:(JavaIoReader *)reader;
- (id<JavaUtilSet>)handleKeySet;
- (id<JavaUtilEnumeration>)getLocalKeys;
- (id<JavaUtilEnumeration>)getKeys;
- (id)handleGetObjectWithNSString:(NSString *)key;
- (void)copyAllFieldsTo:(JavaUtilPropertyResourceBundle *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilPropertyResourceBundle, resources_, JavaUtilProperties *)

@interface JavaUtilPropertyResourceBundle_$1 : NSObject < JavaUtilEnumeration > {
 @public
  JavaUtilPropertyResourceBundle *this$0_;
  id<JavaUtilEnumeration> local_;
  id<JavaUtilEnumeration> pEnum_;
  NSString *nextElement__;
}

- (BOOL)findNext;
- (BOOL)hasMoreElements;
- (NSString *)nextElement;
- (id)initWithJavaUtilPropertyResourceBundle:(JavaUtilPropertyResourceBundle *)outer$;
- (void)copyAllFieldsTo:(JavaUtilPropertyResourceBundle_$1 *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilPropertyResourceBundle_$1, this$0_, JavaUtilPropertyResourceBundle *)
J2OBJC_FIELD_SETTER(JavaUtilPropertyResourceBundle_$1, local_, id<JavaUtilEnumeration>)
J2OBJC_FIELD_SETTER(JavaUtilPropertyResourceBundle_$1, pEnum_, id<JavaUtilEnumeration>)
J2OBJC_FIELD_SETTER(JavaUtilPropertyResourceBundle_$1, nextElement__, NSString *)

#endif // _JavaUtilPropertyResourceBundle_H_
