//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaLangAnnotationRetention_H_
#define _JavaLangAnnotationRetention_H_

@class JavaLangAnnotationRetentionPolicyEnum;

#import "JreEmulation.h"
#include "java/lang/annotation/Annotation.h"

@protocol JavaLangAnnotationRetention < JavaLangAnnotationAnnotation >

@property (readonly) JavaLangAnnotationRetentionPolicyEnum *value;

@end

@interface JavaLangAnnotationRetentionImpl : NSObject < JavaLangAnnotationRetention > {
 @private
  JavaLangAnnotationRetentionPolicyEnum *value;
}

- (id)initWithValue:(JavaLangAnnotationRetentionPolicyEnum *)value_;

@end

#endif // _JavaLangAnnotationRetention_H_
