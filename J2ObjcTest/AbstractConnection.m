//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/jesper/dev/J2ObjcTest/J2ObjcTest/javasrc/AbstractConnection.java
//
//  Created by jesper on 26-11-13.
//

#include "AbstractConnection.h"
#include "JSONObject.h"

@implementation AbstractConnection

- (JSONObject *)doGetWithNSString:(NSString *)url {
  return [((AbstractConnection *) nil_chk(impl_)) doGetWithNSString:url];
}

- (JSONObject *)doPostWithNSString:(NSString *)url
                      withNSString:(NSString *)body {
  return [((AbstractConnection *) nil_chk(impl_)) doPostWithNSString:url withNSString:body];
}

- (void)setImplWithAbstractConnection:(AbstractConnection *)impl {
  self->impl_ = impl;
}

- (id)init {
  return [super init];
}

- (void)copyAllFieldsTo:(AbstractConnection *)other {
  [super copyAllFieldsTo:other];
  other->impl_ = impl_;
}

@end
