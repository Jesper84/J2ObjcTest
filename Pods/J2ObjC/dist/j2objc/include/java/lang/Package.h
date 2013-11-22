//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Package.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaLangPackage_H_
#define _JavaLangPackage_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaNetURL;
@protocol JavaLangAnnotationAnnotation;

#import "JreEmulation.h"
#include "java/lang/reflect/AnnotatedElement.h"

@interface JavaLangPackage : NSObject < JavaLangReflectAnnotatedElement > {
 @public
  NSString *name_;
  NSString *specTitle_;
  NSString *specVersion_;
  NSString *specVendor_;
  NSString *implTitle_;
  NSString *implVersion_;
  NSString *implVendor_;
  JavaNetURL *sealBase_;
}

+ (IOSObjectArray *)NO_ANNOTATIONS;
- (id)initWithNSString:(NSString *)name
          withNSString:(NSString *)specTitle
          withNSString:(NSString *)specVersion
          withNSString:(NSString *)specVendor
          withNSString:(NSString *)implTitle
          withNSString:(NSString *)implVersion
          withNSString:(NSString *)implVendor
        withJavaNetURL:(JavaNetURL *)sealBase;
- (id)getAnnotationWithIOSClass:(IOSClass *)annotationType;
- (IOSObjectArray *)getAnnotations;
- (IOSObjectArray *)getDeclaredAnnotations;
- (BOOL)isAnnotationPresentWithIOSClass:(IOSClass *)annotationType;
- (NSString *)getImplementationTitle;
- (NSString *)getImplementationVendor;
- (NSString *)getImplementationVersion;
- (NSString *)getName;
+ (JavaLangPackage *)getPackageWithNSString:(NSString *)packageName;
+ (IOSObjectArray *)getPackages;
- (NSString *)getSpecificationTitle;
- (NSString *)getSpecificationVendor;
- (NSString *)getSpecificationVersion;
- (NSUInteger)hash;
- (BOOL)isCompatibleWithWithNSString:(NSString *)version_;
- (BOOL)isSealed;
- (BOOL)isSealedWithJavaNetURL:(JavaNetURL *)url;
- (NSString *)description;
- (void)copyAllFieldsTo:(JavaLangPackage *)other;
@end

J2OBJC_FIELD_SETTER(JavaLangPackage, name_, NSString *)
J2OBJC_FIELD_SETTER(JavaLangPackage, specTitle_, NSString *)
J2OBJC_FIELD_SETTER(JavaLangPackage, specVersion_, NSString *)
J2OBJC_FIELD_SETTER(JavaLangPackage, specVendor_, NSString *)
J2OBJC_FIELD_SETTER(JavaLangPackage, implTitle_, NSString *)
J2OBJC_FIELD_SETTER(JavaLangPackage, implVersion_, NSString *)
J2OBJC_FIELD_SETTER(JavaLangPackage, implVendor_, NSString *)
J2OBJC_FIELD_SETTER(JavaLangPackage, sealBase_, JavaNetURL *)

#endif // _JavaLangPackage_H_
