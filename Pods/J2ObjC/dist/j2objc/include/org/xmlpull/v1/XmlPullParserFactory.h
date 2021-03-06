//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/xml/src/main/java/org/xmlpull/v1/XmlPullParserFactory.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgXmlpullV1XmlPullParserFactory_H_
#define _OrgXmlpullV1XmlPullParserFactory_H_

@class IOSClass;
@class JavaUtilArrayList;
@class JavaUtilHashMap;
@protocol OrgXmlpullV1XmlPullParser;
@protocol OrgXmlpullV1XmlSerializer;

#import "JreEmulation.h"

@interface OrgXmlpullV1XmlPullParserFactory : NSObject {
 @public
  JavaUtilArrayList *parserClasses_;
  NSString *classNamesLocation_;
  JavaUtilArrayList *serializerClasses_;
  JavaUtilHashMap *features_;
}

+ (IOSClass *)referenceContextClass;
+ (NSString *)PROPERTY_NAME;
+ (NSString *)RESOURCE_NAME;
- (id)init;
- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(BOOL)state;
- (BOOL)getFeatureWithNSString:(NSString *)name;
- (void)setNamespaceAwareWithBoolean:(BOOL)awareness;
- (BOOL)isNamespaceAware;
- (void)setValidatingWithBoolean:(BOOL)validating;
- (BOOL)isValidating;
- (id<OrgXmlpullV1XmlPullParser>)newPullParser OBJC_METHOD_FAMILY_NONE;
- (id<OrgXmlpullV1XmlSerializer>)newSerializer OBJC_METHOD_FAMILY_NONE;
+ (OrgXmlpullV1XmlPullParserFactory *)newInstance OBJC_METHOD_FAMILY_NONE;
+ (OrgXmlpullV1XmlPullParserFactory *)newInstanceWithNSString:(NSString *)classNames
                                                 withIOSClass:(IOSClass *)context OBJC_METHOD_FAMILY_NONE;
- (void)copyAllFieldsTo:(OrgXmlpullV1XmlPullParserFactory *)other;
@end

J2OBJC_FIELD_SETTER(OrgXmlpullV1XmlPullParserFactory, parserClasses_, JavaUtilArrayList *)
J2OBJC_FIELD_SETTER(OrgXmlpullV1XmlPullParserFactory, classNamesLocation_, NSString *)
J2OBJC_FIELD_SETTER(OrgXmlpullV1XmlPullParserFactory, serializerClasses_, JavaUtilArrayList *)
J2OBJC_FIELD_SETTER(OrgXmlpullV1XmlPullParserFactory, features_, JavaUtilHashMap *)

#endif // _OrgXmlpullV1XmlPullParserFactory_H_
