//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/jesper/dev/J2ObjcTest/J2ObjcTest/javasrc/AbstractConnection.java
//
//  Created by jesper on 26-11-13.
//

#ifndef _AbstractConnection_H_
#define _AbstractConnection_H_

@class JSONObject;

#import "JreEmulation.h"

@interface AbstractConnection : NSObject 

- (JSONObject *)doGetWithNSString:(NSString *)url;
- (JSONObject *)doPostWithNSString:(NSString *)url
                      withNSString:(NSString *)body;
- (id)init;
- (void)copyAllFieldsTo:(AbstractConnection *)other;
@end

#endif // _AbstractConnection_H_
