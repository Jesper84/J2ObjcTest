//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/SAXParseException.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgXmlSaxSAXParseException_H_
#define _OrgXmlSaxSAXParseException_H_

@class JavaLangException;
@protocol OrgXmlSaxLocator;

#import "JreEmulation.h"
#include "org/xml/sax/SAXException.h"

@interface OrgXmlSaxSAXParseException : OrgXmlSaxSAXException {
 @public
  NSString *publicId_;
  NSString *systemId_;
  int lineNumber_;
  int columnNumber_;
}

- (id)initWithNSString:(NSString *)message
  withOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;
- (id)initWithNSString:(NSString *)message
  withOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator
 withJavaLangException:(JavaLangException *)e;
- (id)initWithNSString:(NSString *)message
          withNSString:(NSString *)publicId
          withNSString:(NSString *)systemId
               withInt:(int)lineNumber
               withInt:(int)columnNumber;
- (id)initWithNSString:(NSString *)message
          withNSString:(NSString *)publicId
          withNSString:(NSString *)systemId
               withInt:(int)lineNumber
               withInt:(int)columnNumber
 withJavaLangException:(JavaLangException *)e;
- (void)init__WithNSString:(NSString *)publicId
              withNSString:(NSString *)systemId
                   withInt:(int)lineNumber
                   withInt:(int)columnNumber OBJC_METHOD_FAMILY_NONE;
- (NSString *)getPublicId;
- (NSString *)getSystemId;
- (int)getLineNumber;
- (int)getColumnNumber;
- (void)copyAllFieldsTo:(OrgXmlSaxSAXParseException *)other;
@end

J2OBJC_FIELD_SETTER(OrgXmlSaxSAXParseException, publicId_, NSString *)
J2OBJC_FIELD_SETTER(OrgXmlSaxSAXParseException, systemId_, NSString *)

#endif // _OrgXmlSaxSAXParseException_H_
