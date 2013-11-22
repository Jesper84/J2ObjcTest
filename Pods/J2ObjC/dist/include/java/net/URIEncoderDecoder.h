//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaNetURIEncoderDecoder_H_
#define _JavaNetURIEncoderDecoder_H_

#import "JreEmulation.h"

@interface JavaNetURIEncoderDecoder : NSObject {
}

+ (NSString *)digits;
+ (NSString *)encoding;
+ (void)validateWithNSString:(NSString *)s
                withNSString:(NSString *)legal;
+ (void)validateSimpleWithNSString:(NSString *)s
                      withNSString:(NSString *)legal;
+ (NSString *)quoteIllegalWithNSString:(NSString *)s
                          withNSString:(NSString *)legal;
+ (NSString *)encodeOthersWithNSString:(NSString *)s;
+ (NSString *)decodeWithNSString:(NSString *)s;
- (id)init;
@end

#endif // _JavaNetURIEncoderDecoder_H_
