//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/ext/DefaultHandler2.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgXmlSaxExtDefaultHandler2_H_
#define _OrgXmlSaxExtDefaultHandler2_H_

@class IOSCharArray;
@class OrgXmlSaxInputSource;

#import "JreEmulation.h"
#include "org/xml/sax/ext/DeclHandler.h"
#include "org/xml/sax/ext/EntityResolver2.h"
#include "org/xml/sax/ext/LexicalHandler.h"
#include "org/xml/sax/helpers/DefaultHandler.h"

@interface OrgXmlSaxExtDefaultHandler2 : OrgXmlSaxHelpersDefaultHandler < OrgXmlSaxExtLexicalHandler, OrgXmlSaxExtDeclHandler, OrgXmlSaxExtEntityResolver2 > {
}

- (id)init;
- (void)startCDATA;
- (void)endCDATA;
- (void)startDTDWithNSString:(NSString *)name
                withNSString:(NSString *)publicId
                withNSString:(NSString *)systemId;
- (void)endDTD;
- (void)startEntityWithNSString:(NSString *)name;
- (void)endEntityWithNSString:(NSString *)name;
- (void)commentWithCharArray:(IOSCharArray *)ch
                     withInt:(int)start
                     withInt:(int)length;
- (void)attributeDeclWithNSString:(NSString *)eName
                     withNSString:(NSString *)aName
                     withNSString:(NSString *)type
                     withNSString:(NSString *)mode
                     withNSString:(NSString *)value;
- (void)elementDeclWithNSString:(NSString *)name
                   withNSString:(NSString *)model;
- (void)externalEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId;
- (void)internalEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)value;
- (OrgXmlSaxInputSource *)getExternalSubsetWithNSString:(NSString *)name
                                           withNSString:(NSString *)baseURI;
- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)name
                                       withNSString:(NSString *)publicId
                                       withNSString:(NSString *)baseURI
                                       withNSString:(NSString *)systemId;
- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)publicId
                                       withNSString:(NSString *)systemId;
@end

#endif // _OrgXmlSaxExtDefaultHandler2_H_
