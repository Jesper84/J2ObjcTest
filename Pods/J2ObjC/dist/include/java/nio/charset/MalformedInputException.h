//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaNioCharsetMalformedInputException_H_
#define _JavaNioCharsetMalformedInputException_H_

#import "JreEmulation.h"
#include "java/nio/charset/CharacterCodingException.h"

#define JavaNioCharsetMalformedInputException_serialVersionUID -3438823399834806194

@interface JavaNioCharsetMalformedInputException : JavaNioCharsetCharacterCodingException {
 @public
  int inputLength_;
}

- (id)initWithInt:(int)length;
- (int)getInputLength;
- (NSString *)getMessage;
- (void)copyAllFieldsTo:(JavaNioCharsetMalformedInputException *)other;
@end

#endif // _JavaNioCharsetMalformedInputException_H_