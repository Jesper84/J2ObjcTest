//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _OrgJunitRunnersModelFrameworkMember_H_
#define _OrgJunitRunnersModelFrameworkMember_H_

@class IOSObjectArray;
@protocol JavaUtilList;

#import "JreEmulation.h"

@interface OrgJunitRunnersModelFrameworkMember : NSObject {
}

- (IOSObjectArray *)getAnnotations;
- (BOOL)isShadowedByWithId:(OrgJunitRunnersModelFrameworkMember *)otherMember;
- (BOOL)isShadowedByWithJavaUtilList:(id<JavaUtilList>)members;
- (id)init;
@end

#endif // _OrgJunitRunnersModelFrameworkMember_H_