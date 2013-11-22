//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/util/IdentityHashMap.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaUtilIdentityHashMap_H_
#define _JavaUtilIdentityHashMap_H_

@class IOSObjectArray;
@class JavaUtilIdentityHashMap_IdentityHashMapEntry;
@protocol JavaUtilCollection;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilSet;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractCollection.h"
#include "java/util/AbstractMap.h"
#include "java/util/AbstractSet.h"
#include "java/util/Iterator.h"
#include "java/util/Map.h"
#include "java/util/MapEntry.h"

#define JavaUtilIdentityHashMap_DEFAULT_MAX_SIZE 21
#define JavaUtilIdentityHashMap_loadFactor 7500
#define JavaUtilIdentityHashMap_serialVersionUID 8188218128353913216

@interface JavaUtilIdentityHashMap : JavaUtilAbstractMap < JavaUtilMap, JavaIoSerializable, NSCopying > {
 @public
  IOSObjectArray *elementData_;
  int size__;
  int threshold_;
  int modCount_;
}

+ (id)NULL_OBJECT;
- (id)init;
- (id)initWithInt:(int)maxSize;
- (int)getThresholdWithInt:(int)maxSize;
- (int)computeElementArraySize;
- (IOSObjectArray *)newElementArrayWithInt:(int)s OBJC_METHOD_FAMILY_NONE;
- (id)initWithJavaUtilMap:(id<JavaUtilMap>)map;
- (id)massageValueWithId:(id)value;
- (void)clear;
- (BOOL)containsKeyWithId:(id)key;
- (BOOL)containsValueWithId:(id)value;
- (id)getWithId:(id)key;
- (JavaUtilIdentityHashMap_IdentityHashMapEntry *)getEntryWithId:(id)key;
- (JavaUtilIdentityHashMap_IdentityHashMapEntry *)getEntryWithInt:(int)index;
+ (int)findIndexWithId:(id)key
     withNSObjectArray:(IOSObjectArray *)array;
+ (int)getModuloHashWithId:(id)key
                   withInt:(int)length;
- (id)putWithId:(id)key
         withId:(id)value;
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;
- (void)rehash;
- (void)computeMaxSize;
- (id)removeWithId:(id)key;
- (id<JavaUtilSet>)entrySet;
- (id<JavaUtilSet>)keySet;
- (id<JavaUtilCollection>)values;
- (BOOL)isEqual:(id)object;
- (id)clone;
- (BOOL)isEmpty;
- (int)size;
- (void)putAllImplWithJavaUtilMap:(id<JavaUtilMap>)map;
- (id)copyWithZone:(NSZone *)zone;
- (void)copyAllFieldsTo:(JavaUtilIdentityHashMap *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilIdentityHashMap, elementData_, IOSObjectArray *)

@interface JavaUtilIdentityHashMap_IdentityHashMapEntry : JavaUtilMapEntry {
 @public
  id iKey_;
  IOSObjectArray *elementData_;
}

- (id)initWithId:(id)theKey
          withId:(id)theValue
withNSObjectArray:(IOSObjectArray *)elementData;
- (id)clone;
- (BOOL)isEqual:(id)object;
- (NSUInteger)hash;
- (NSString *)description;
- (id)setValueWithId:(id)object;
- (void)copyAllFieldsTo:(JavaUtilIdentityHashMap_IdentityHashMapEntry *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilIdentityHashMap_IdentityHashMapEntry, iKey_, id)
J2OBJC_FIELD_SETTER(JavaUtilIdentityHashMap_IdentityHashMapEntry, elementData_, IOSObjectArray *)

@interface JavaUtilIdentityHashMap_IdentityHashMapIterator : NSObject < JavaUtilIterator > {
 @public
  int position_;
  int lastPosition_;
  JavaUtilIdentityHashMap *associatedMap_;
  int expectedModCount_;
  id<JavaUtilMapEntry_Type> type_;
  BOOL canRemove_;
}

- (id)initWithJavaUtilMapEntry_Type:(id<JavaUtilMapEntry_Type>)value
        withJavaUtilIdentityHashMap:(JavaUtilIdentityHashMap *)hm;
- (BOOL)hasNext;
- (void)checkConcurrentMod;
- (id)next;
- (void)remove;
- (void)copyAllFieldsTo:(JavaUtilIdentityHashMap_IdentityHashMapIterator *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilIdentityHashMap_IdentityHashMapIterator, associatedMap_, JavaUtilIdentityHashMap *)
J2OBJC_FIELD_SETTER(JavaUtilIdentityHashMap_IdentityHashMapIterator, type_, id<JavaUtilMapEntry_Type>)

@interface JavaUtilIdentityHashMap_IdentityHashMapEntrySet : JavaUtilAbstractSet {
 @public
  JavaUtilIdentityHashMap *associatedMap_;
}

- (id)initWithJavaUtilIdentityHashMap:(JavaUtilIdentityHashMap *)hm;
- (JavaUtilIdentityHashMap *)hashMap;
- (int)size;
- (void)clear;
- (BOOL)removeWithId:(id)object;
- (BOOL)containsWithId:(id)object;
- (id<JavaUtilIterator>)iterator;
- (void)copyAllFieldsTo:(JavaUtilIdentityHashMap_IdentityHashMapEntrySet *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilIdentityHashMap_IdentityHashMapEntrySet, associatedMap_, JavaUtilIdentityHashMap *)

@interface JavaUtilIdentityHashMap_IdentityHashMapEntrySet_$1 : NSObject < JavaUtilMapEntry_Type > {
}

- (id<JavaUtilMap_Entry>)getWithJavaUtilMapEntry:(JavaUtilMapEntry *)entry;
- (id)init;
@end

@interface JavaUtilIdentityHashMap_KeySet : JavaUtilAbstractSet {
 @public
  __weak JavaUtilIdentityHashMap *this$0_;
}

- (BOOL)containsWithId:(id)object;
- (int)size;
- (void)clear;
- (BOOL)removeWithId:(id)key;
- (id<JavaUtilIterator>)iterator;
- (id)initWithJavaUtilIdentityHashMap:(JavaUtilIdentityHashMap *)outer$;
@end

@interface JavaUtilIdentityHashMap_KeySet_$1 : NSObject < JavaUtilMapEntry_Type > {
}

- (id)getWithJavaUtilMapEntry:(JavaUtilMapEntry *)entry;
- (id)init;
@end

@interface JavaUtilIdentityHashMap_ValuesCollection : JavaUtilAbstractCollection {
 @public
  __weak JavaUtilIdentityHashMap *this$0_;
}

- (BOOL)containsWithId:(id)object;
- (int)size;
- (void)clear;
- (id<JavaUtilIterator>)iterator;
- (BOOL)removeWithId:(id)object;
- (id)initWithJavaUtilIdentityHashMap:(JavaUtilIdentityHashMap *)outer$;
@end

@interface JavaUtilIdentityHashMap_ValuesCollection_$1 : NSObject < JavaUtilMapEntry_Type > {
}

- (id)getWithJavaUtilMapEntry:(JavaUtilMapEntry *)entry;
- (id)init;
@end

#endif // _JavaUtilIdentityHashMap_H_
