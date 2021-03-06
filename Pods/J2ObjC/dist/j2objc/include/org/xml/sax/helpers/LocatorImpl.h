//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/helpers/LocatorImpl.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgXmlSaxHelpersLocatorImpl_H_
#define _OrgXmlSaxHelpersLocatorImpl_H_

#import "JreEmulation.h"
#include "org/xml/sax/Locator.h"

@interface OrgXmlSaxHelpersLocatorImpl : NSObject < OrgXmlSaxLocator > {
 @public
  NSString *publicId_;
  NSString *systemId_;
  int lineNumber_;
  int columnNumber_;
}

- (id)init;
- (id)initWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;
- (NSString *)getPublicId;
- (NSString *)getSystemId;
- (int)getLineNumber;
- (int)getColumnNumber;
- (void)setPublicIdWithNSString:(NSString *)publicId;
- (void)setSystemIdWithNSString:(NSString *)systemId;
- (void)setLineNumberWithInt:(int)lineNumber;
- (void)setColumnNumberWithInt:(int)columnNumber;
- (void)copyAllFieldsTo:(OrgXmlSaxHelpersLocatorImpl *)other;
@end

J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersLocatorImpl, publicId_, NSString *)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersLocatorImpl, systemId_, NSString *)

#endif // _OrgXmlSaxHelpersLocatorImpl_H_
