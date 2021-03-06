//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaUtilLoggingLogManager_H_
#define _JavaUtilLoggingLogManager_H_

@class JavaUtilHashMap;

#import "JreEmulation.h"
#include "java/util/logging/Logger.h"

@interface JavaUtilLoggingLogManager : NSObject {
 @public
  JavaUtilHashMap *loggerList_;
  JavaUtilLoggingLogger *rootLogger_;
}

+ (JavaUtilLoggingLogManager *)singleton;
+ (void)setSingleton:(JavaUtilLoggingLogManager *)singleton;
+ (JavaUtilLoggingLogManager *)getLogManager;
- (id)init;
- (BOOL)addLoggerWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger;
- (JavaUtilLoggingLogger *)getLoggerWithNSString:(NSString *)name;
- (void)addLoggerWithoutDuplicationCheckingWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger;
- (JavaUtilLoggingLogger *)getOrAddLoggerWithNSString:(NSString *)name;
- (void)copyAllFieldsTo:(JavaUtilLoggingLogManager *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilLoggingLogManager, loggerList_, JavaUtilHashMap *)
J2OBJC_FIELD_SETTER(JavaUtilLoggingLogManager, rootLogger_, JavaUtilLoggingLogger *)

@interface JavaUtilLoggingLogManager_RootLogger : JavaUtilLoggingLogger {
}

- (id)initWithJavaUtilLoggingLogManager:(JavaUtilLoggingLogManager *)outer$;
@end

#endif // _JavaUtilLoggingLogManager_H_
