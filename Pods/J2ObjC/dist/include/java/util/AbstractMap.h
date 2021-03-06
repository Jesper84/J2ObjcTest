//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaUtilAbstractMap_H_
#define _JavaUtilAbstractMap_H_

@protocol JavaUtilCollection;
@protocol JavaUtilSet;

#import "JreEmulation.h"
#include "java/util/AbstractCollection.h"
#include "java/util/AbstractSet.h"
#include "java/util/Iterator.h"
#include "java/util/Map.h"

@interface JavaUtilAbstractMap : NSObject < JavaUtilMap > {
 @public
  id<JavaUtilSet> keySet__;
  id<JavaUtilCollection> valuesCollection_;
}

- (id)init;
- (void)clear;
- (BOOL)containsKeyWithId:(id)key;
- (BOOL)containsValueWithId:(id)value;
- (id<JavaUtilSet>)entrySet;
- (BOOL)isEqual:(id)object;
- (id)getWithId:(id)key;
- (NSUInteger)hash;
- (BOOL)isEmpty;
- (id<JavaUtilSet>)keySet;
- (id)putWithId:(id)key
         withId:(id)value;
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;
- (id)removeWithId:(id)key;
- (int)size;
- (NSString *)description;
- (id<JavaUtilCollection>)values;
- (id)clone;
- (void)copyAllFieldsTo:(JavaUtilAbstractMap *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilAbstractMap, keySet__, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(JavaUtilAbstractMap, valuesCollection_, id<JavaUtilCollection>)

@interface JavaUtilAbstractMap_KeySet : JavaUtilAbstractSet {
 @public
  __weak JavaUtilAbstractMap *this$0_;
}

- (BOOL)containsWithId:(id)object;
- (int)size;
- (id<JavaUtilIterator>)iterator;
- (id)initWithJavaUtilAbstractMap:(JavaUtilAbstractMap *)outer$;
@end

@interface JavaUtilAbstractMap_KeySet_$1 : NSObject < JavaUtilIterator > {
 @public
  id<JavaUtilIterator> setIterator_;
}

- (BOOL)hasNext;
- (id)next;
- (void)remove;
- (id)initWithJavaUtilAbstractMap_KeySet:(JavaUtilAbstractMap_KeySet *)outer$;
- (void)copyAllFieldsTo:(JavaUtilAbstractMap_KeySet_$1 *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilAbstractMap_KeySet_$1, setIterator_, id<JavaUtilIterator>)

@interface JavaUtilAbstractMap_ValuesCollection : JavaUtilAbstractCollection {
 @public
  __weak JavaUtilAbstractMap *this$0_;
}

- (int)size;
- (BOOL)containsWithId:(id)object;
- (id<JavaUtilIterator>)iterator;
- (id)initWithJavaUtilAbstractMap:(JavaUtilAbstractMap *)outer$;
@end

@interface JavaUtilAbstractMap_ValuesCollection_$1 : NSObject < JavaUtilIterator > {
 @public
  id<JavaUtilIterator> setIterator_;
}

- (BOOL)hasNext;
- (id)next;
- (void)remove;
- (id)initWithJavaUtilAbstractMap_ValuesCollection:(JavaUtilAbstractMap_ValuesCollection *)outer$;
- (void)copyAllFieldsTo:(JavaUtilAbstractMap_ValuesCollection_$1 *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilAbstractMap_ValuesCollection_$1, setIterator_, id<JavaUtilIterator>)

#endif // _JavaUtilAbstractMap_H_
