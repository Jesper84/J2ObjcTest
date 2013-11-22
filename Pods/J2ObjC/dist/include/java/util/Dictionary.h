//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaUtilDictionary_H_
#define _JavaUtilDictionary_H_

@protocol JavaUtilEnumeration;

#import "JreEmulation.h"

@interface JavaUtilDictionary : NSObject {
}

- (id)init;
- (id<JavaUtilEnumeration>)elements;
- (id)getWithId:(id)key;
- (BOOL)isEmpty;
- (id<JavaUtilEnumeration>)keys;
- (id)putWithId:(id)key
         withId:(id)value;
- (id)removeWithId:(id)key;
- (int)size;
@end

#endif // _JavaUtilDictionary_H_
