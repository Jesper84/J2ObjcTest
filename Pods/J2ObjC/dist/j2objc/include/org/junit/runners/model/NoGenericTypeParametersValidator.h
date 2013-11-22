//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/runners/model/NoGenericTypeParametersValidator.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitRunnersModelNoGenericTypeParametersValidator_H_
#define _OrgJunitRunnersModelNoGenericTypeParametersValidator_H_

@class JavaLangReflectMethod;
@protocol JavaLangReflectGenericArrayType;
@protocol JavaLangReflectParameterizedType;
@protocol JavaLangReflectType;
@protocol JavaLangReflectWildcardType;
@protocol JavaUtilList;

#import "JreEmulation.h"

@interface OrgJunitRunnersModelNoGenericTypeParametersValidator : NSObject {
 @public
  JavaLangReflectMethod *fMethod_;
}

- (id)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;
- (void)validateWithJavaUtilList:(id<JavaUtilList>)errors;
- (void)validateNoTypeParameterOnTypeWithJavaLangReflectType:(id<JavaLangReflectType>)type
                                            withJavaUtilList:(id<JavaUtilList>)errors;
- (void)validateNoTypeParameterOnParameterizedTypeWithJavaLangReflectParameterizedType:(id<JavaLangReflectParameterizedType>)parameterized
                                                                      withJavaUtilList:(id<JavaUtilList>)errors;
- (void)validateNoTypeParameterOnWildcardTypeWithJavaLangReflectWildcardType:(id<JavaLangReflectWildcardType>)wildcard
                                                            withJavaUtilList:(id<JavaUtilList>)errors;
- (void)validateNoTypeParameterOnGenericArrayTypeWithJavaLangReflectGenericArrayType:(id<JavaLangReflectGenericArrayType>)arrayType
                                                                    withJavaUtilList:(id<JavaUtilList>)errors;
- (void)copyAllFieldsTo:(OrgJunitRunnersModelNoGenericTypeParametersValidator *)other;
@end

J2OBJC_FIELD_SETTER(OrgJunitRunnersModelNoGenericTypeParametersValidator, fMethod_, JavaLangReflectMethod *)

#endif // _OrgJunitRunnersModelNoGenericTypeParametersValidator_H_