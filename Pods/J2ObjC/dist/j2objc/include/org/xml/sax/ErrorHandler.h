//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/ErrorHandler.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgXmlSaxErrorHandler_H_
#define _OrgXmlSaxErrorHandler_H_

@class OrgXmlSaxSAXParseException;

#import "JreEmulation.h"

@protocol OrgXmlSaxErrorHandler < NSObject, JavaObject >
- (void)warningWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exception;
- (void)errorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exception;
- (void)fatalErrorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exception;
@end

#endif // _OrgXmlSaxErrorHandler_H_
