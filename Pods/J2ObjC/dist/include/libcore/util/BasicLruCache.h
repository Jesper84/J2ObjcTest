//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _LibcoreUtilBasicLruCache_H_
#define _LibcoreUtilBasicLruCache_H_

@class JavaUtilLinkedHashMap;
@protocol JavaUtilMap;

#import "JreEmulation.h"

@interface LibcoreUtilBasicLruCache : NSObject {
 @public
  JavaUtilLinkedHashMap *map_;
  int maxSize_;
}

- (id)initWithInt:(int)maxSize;
- (id)getWithId:(id)key;
- (id)putWithId:(id)key
         withId:(id)value;
- (void)trimToSizeWithInt:(int)maxSize;
- (void)entryEvictedWithId:(id)key
                    withId:(id)value;
- (id)createWithId:(id)key;
- (id<JavaUtilMap>)snapshot;
- (void)evictAll;
- (void)copyAllFieldsTo:(LibcoreUtilBasicLruCache *)other;
@end

J2OBJC_FIELD_SETTER(LibcoreUtilBasicLruCache, map_, JavaUtilLinkedHashMap *)

#endif // _LibcoreUtilBasicLruCache_H_