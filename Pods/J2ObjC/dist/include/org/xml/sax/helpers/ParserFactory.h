//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _OrgXmlSaxHelpersParserFactory_H_
#define _OrgXmlSaxHelpersParserFactory_H_

@protocol OrgXmlSaxParser;

#import "JreEmulation.h"

@interface OrgXmlSaxHelpersParserFactory : NSObject {
}

- (id)init;
+ (id<OrgXmlSaxParser>)makeParser;
+ (id<OrgXmlSaxParser>)makeParserWithNSString:(NSString *)className_;
@end

#endif // _OrgXmlSaxHelpersParserFactory_H_
