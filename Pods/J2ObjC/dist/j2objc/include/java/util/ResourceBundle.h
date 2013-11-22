//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/ResourceBundle.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaUtilResourceBundle_H_
#define _JavaUtilResourceBundle_H_

@class IOSObjectArray;
@class JavaLangClassLoader;
@class JavaUtilHashtable;
@class JavaUtilLocale;
@class JavaUtilMissingResourceException;
@class JavaUtilResourceBundle_Control;
@class JavaUtilWeakHashMap;
@protocol JavaUtilEnumeration;
@protocol JavaUtilList;
@protocol JavaUtilSet;

#import "JreEmulation.h"

@interface JavaUtilResourceBundle : NSObject {
 @public
  JavaUtilResourceBundle *parent_;
  JavaUtilLocale *locale_;
  long long int lastLoadTime_;
}

+ (NSString *)UNDER_SCORE;
+ (NSString *)EMPTY_STRING;
+ (JavaUtilResourceBundle *)MISSING;
+ (JavaUtilResourceBundle *)MISSINGBASE;
+ (JavaUtilWeakHashMap *)cache;
+ (JavaUtilLocale *)cacheLocale;
+ (void)setCacheLocale:(JavaUtilLocale *)cacheLocale;
- (id)init;
+ (JavaUtilResourceBundle *)getBundleWithNSString:(NSString *)bundleName;
+ (JavaUtilResourceBundle *)getBundleWithNSString:(NSString *)bundleName
                               withJavaUtilLocale:(JavaUtilLocale *)locale;
+ (JavaUtilResourceBundle *)getBundleWithNSString:(NSString *)bundleName
                               withJavaUtilLocale:(JavaUtilLocale *)locale
                          withJavaLangClassLoader:(JavaLangClassLoader *)loader;
+ (JavaUtilMissingResourceException *)missingResourceExceptionWithNSString:(NSString *)className_
                                                              withNSString:(NSString *)key;
+ (JavaUtilResourceBundle *)getBundleWithNSString:(NSString *)baseName
               withJavaUtilResourceBundle_Control:(JavaUtilResourceBundle_Control *)control;
+ (JavaUtilResourceBundle *)getBundleWithNSString:(NSString *)baseName
                               withJavaUtilLocale:(JavaUtilLocale *)targetLocale
               withJavaUtilResourceBundle_Control:(JavaUtilResourceBundle_Control *)control;
+ (JavaLangClassLoader *)getLoader;
+ (JavaUtilResourceBundle *)getBundleWithNSString:(NSString *)baseName
                               withJavaUtilLocale:(JavaUtilLocale *)targetLocale
                          withJavaLangClassLoader:(JavaLangClassLoader *)loader
               withJavaUtilResourceBundle_Control:(JavaUtilResourceBundle_Control *)control;
+ (JavaUtilResourceBundle *)processGetBundleWithNSString:(NSString *)baseName
                                      withJavaUtilLocale:(JavaUtilLocale *)targetLocale
                                 withJavaLangClassLoader:(JavaLangClassLoader *)loader
                      withJavaUtilResourceBundle_Control:(JavaUtilResourceBundle_Control *)control
                                             withBoolean:(BOOL)expired
                              withJavaUtilResourceBundle:(JavaUtilResourceBundle *)result;
- (id<JavaUtilEnumeration>)getKeys;
- (JavaUtilLocale *)getLocale;
- (id)getObjectWithNSString:(NSString *)key;
- (NSString *)getStringWithNSString:(NSString *)key;
- (IOSObjectArray *)getStringArrayWithNSString:(NSString *)key;
+ (JavaUtilResourceBundle *)handleGetBundleWithBoolean:(BOOL)loadBase
                                          withNSString:(NSString *)base
                                    withJavaUtilLocale:(JavaUtilLocale *)locale
                               withJavaLangClassLoader:(JavaLangClassLoader *)loader;
+ (JavaUtilHashtable *)getLoaderCacheWithId:(id)cacheKey;
- (id)handleGetObjectWithNSString:(NSString *)key;
- (void)setParentWithJavaUtilResourceBundle:(JavaUtilResourceBundle *)bundle;
+ (JavaUtilLocale *)stripWithJavaUtilLocale:(JavaUtilLocale *)locale;
- (void)setLocaleWithJavaUtilLocale:(JavaUtilLocale *)locale;
+ (void)clearCache;
+ (void)clearCacheWithJavaLangClassLoader:(JavaLangClassLoader *)loader;
- (BOOL)containsKeyWithNSString:(NSString *)key;
- (id<JavaUtilSet>)keySet;
- (id<JavaUtilSet>)handleKeySet;
- (void)copyAllFieldsTo:(JavaUtilResourceBundle *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilResourceBundle, parent_, JavaUtilResourceBundle *)
J2OBJC_FIELD_SETTER(JavaUtilResourceBundle, locale_, JavaUtilLocale *)

@interface JavaUtilResourceBundle_MissingBundle : JavaUtilResourceBundle {
}

- (id<JavaUtilEnumeration>)getKeys;
- (id)handleGetObjectWithNSString:(NSString *)name;
- (id)init;
@end

#define JavaUtilResourceBundle_Control_TTL_DONT_CACHE -1
#define JavaUtilResourceBundle_Control_TTL_NO_EXPIRATION_CONTROL -2

@interface JavaUtilResourceBundle_Control : NSObject {
 @public
  id<JavaUtilList> format_;
}

+ (id<JavaUtilList>)listDefault;
+ (void)setListDefault:(id<JavaUtilList>)listDefault;
+ (id<JavaUtilList>)listClass;
+ (void)setListClass:(id<JavaUtilList>)listClass;
+ (id<JavaUtilList>)listProperties;
+ (void)setListProperties:(id<JavaUtilList>)listProperties;
+ (NSString *)JAVACLASS;
+ (void)setJAVACLASS:(NSString *)JAVACLASS;
+ (NSString *)JAVAPROPERTIES;
+ (void)setJAVAPROPERTIES:(NSString *)JAVAPROPERTIES;
+ (id<JavaUtilList>)FORMAT_DEFAULT;
+ (id<JavaUtilList>)FORMAT_CLASS;
+ (id<JavaUtilList>)FORMAT_PROPERTIES;
+ (long long int)TTL_DONT_CACHE;
+ (long long int)TTL_NO_EXPIRATION_CONTROL;
+ (JavaUtilResourceBundle_Control *)FORMAT_PROPERTIES_CONTROL;
+ (JavaUtilResourceBundle_Control *)FORMAT_CLASS_CONTROL;
+ (JavaUtilResourceBundle_Control *)FORMAT_DEFAULT_CONTROL;
- (id)init;
+ (JavaUtilResourceBundle_Control *)getControlWithJavaUtilList:(id<JavaUtilList>)formats;
+ (JavaUtilResourceBundle_Control *)getNoFallbackControlWithJavaUtilList:(id<JavaUtilList>)formats;
- (id<JavaUtilList>)getCandidateLocalesWithNSString:(NSString *)baseName
                                 withJavaUtilLocale:(JavaUtilLocale *)locale;
- (id<JavaUtilList>)getFormatsWithNSString:(NSString *)baseName;
- (JavaUtilLocale *)getFallbackLocaleWithNSString:(NSString *)baseName
                               withJavaUtilLocale:(JavaUtilLocale *)locale;
- (JavaUtilResourceBundle *)newBundleWithNSString:(NSString *)baseName
                               withJavaUtilLocale:(JavaUtilLocale *)locale
                                     withNSString:(NSString *)format
                          withJavaLangClassLoader:(JavaLangClassLoader *)loader
                                      withBoolean:(BOOL)reload OBJC_METHOD_FAMILY_NONE;
- (long long int)getTimeToLiveWithNSString:(NSString *)baseName
                        withJavaUtilLocale:(JavaUtilLocale *)locale;
- (BOOL)needsReloadWithNSString:(NSString *)baseName
             withJavaUtilLocale:(JavaUtilLocale *)locale
                   withNSString:(NSString *)format
        withJavaLangClassLoader:(JavaLangClassLoader *)loader
     withJavaUtilResourceBundle:(JavaUtilResourceBundle *)bundle
                       withLong:(long long int)loadTime;
- (NSString *)toBundleNameWithNSString:(NSString *)baseName
                    withJavaUtilLocale:(JavaUtilLocale *)locale;
- (NSString *)toResourceNameWithNSString:(NSString *)bundleName
                            withNSString:(NSString *)suffix;
- (void)copyAllFieldsTo:(JavaUtilResourceBundle_Control *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilResourceBundle_Control, format_, id<JavaUtilList>)

@interface JavaUtilResourceBundle_NoFallbackControl : JavaUtilResourceBundle_Control {
}

+ (JavaUtilResourceBundle_Control *)NOFALLBACK_FORMAT_PROPERTIES_CONTROL;
+ (JavaUtilResourceBundle_Control *)NOFALLBACK_FORMAT_CLASS_CONTROL;
+ (JavaUtilResourceBundle_Control *)NOFALLBACK_FORMAT_DEFAULT_CONTROL;
- (id)initWithNSString:(NSString *)format;
- (id)initWithJavaUtilList:(id<JavaUtilList>)list;
- (JavaUtilLocale *)getFallbackLocaleWithNSString:(NSString *)baseName
                               withJavaUtilLocale:(JavaUtilLocale *)locale;
@end

@interface JavaUtilResourceBundle_SimpleControl : JavaUtilResourceBundle_Control {
}

- (id)initWithNSString:(NSString *)format;
@end

#endif // _JavaUtilResourceBundle_H_