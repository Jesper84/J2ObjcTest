//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaTextParseException_H_
#define _JavaTextParseException_H_

#import "JreEmulation.h"
#include "java/lang/Exception.h"

#define JavaTextParseException_serialVersionUID 2703218443322787634

@interface JavaTextParseException : JavaLangException {
 @public
  int errorOffset_;
}

- (id)initWithNSString:(NSString *)detailMessage
               withInt:(int)location;
- (int)getErrorOffset;
- (void)copyAllFieldsTo:(JavaTextParseException *)other;
@end

#endif // _JavaTextParseException_H_
