//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaUtilMiniEnumSet_H_
#define _JavaUtilMiniEnumSet_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangEnum;
@protocol JavaUtilCollection;

#import "JreEmulation.h"
#include "java/util/EnumSet.h"
#include "java/util/Iterator.h"

#define JavaUtilMiniEnumSet_MAX_ELEMENTS 64

@interface JavaUtilMiniEnumSet : JavaUtilEnumSet {
 @public
  int size__;
  IOSObjectArray *enums_;
  long long int bits_;
}

- (id)initWithIOSClass:(IOSClass *)elementType;
- (id<JavaUtilIterator>)iterator;
- (int)size;
- (void)clear;
- (BOOL)addWithId:(JavaLangEnum *)element;
- (BOOL)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (BOOL)containsWithId:(id)object;
- (BOOL)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (BOOL)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (BOOL)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (BOOL)removeWithId:(id)object;
- (BOOL)isEqual:(id)object;
- (void)complement;
- (void)setRangeWithId:(JavaLangEnum *)start
                withId:(JavaLangEnum *)end;
- (void)copyAllFieldsTo:(JavaUtilMiniEnumSet *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilMiniEnumSet, enums_, IOSObjectArray *)

@interface JavaUtilMiniEnumSet_MiniEnumSetIterator : NSObject < JavaUtilIterator > {
 @public
  JavaUtilMiniEnumSet *this$0_;
  long long int currentBits_;
  long long int mask_;
  JavaLangEnum *last_;
}

- (BOOL)hasNext;
- (id)next;
- (void)remove;
- (id)initWithJavaUtilMiniEnumSet:(JavaUtilMiniEnumSet *)outer$;
- (void)copyAllFieldsTo:(JavaUtilMiniEnumSet_MiniEnumSetIterator *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilMiniEnumSet_MiniEnumSetIterator, this$0_, JavaUtilMiniEnumSet *)
J2OBJC_FIELD_SETTER(JavaUtilMiniEnumSet_MiniEnumSetIterator, last_, id)

#endif // _JavaUtilMiniEnumSet_H_