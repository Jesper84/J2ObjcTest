//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/Principal.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaSecurityPrincipal_H_
#define _JavaSecurityPrincipal_H_

#import "JreEmulation.h"

@protocol JavaSecurityPrincipal < NSObject, JavaObject >
- (BOOL)isEqual:(id)obj;
- (NSString *)getName;
- (NSUInteger)hash;
- (NSString *)description;
@end

#endif // _JavaSecurityPrincipal_H_
