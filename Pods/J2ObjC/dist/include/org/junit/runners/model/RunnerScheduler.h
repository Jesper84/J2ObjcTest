//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _OrgJunitRunnersModelRunnerScheduler_H_
#define _OrgJunitRunnersModelRunnerScheduler_H_

@protocol JavaLangRunnable;

#import "JreEmulation.h"

@protocol OrgJunitRunnersModelRunnerScheduler < NSObject, JavaObject >
- (void)scheduleWithJavaLangRunnable:(id<JavaLangRunnable>)childStatement;
- (void)finished;
@end

#endif // _OrgJunitRunnersModelRunnerScheduler_H_
