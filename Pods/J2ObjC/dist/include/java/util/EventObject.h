//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaUtilEventObject_H_
#define _JavaUtilEventObject_H_

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define JavaUtilEventObject_serialVersionUID 5516075349620653480

@interface JavaUtilEventObject : NSObject < JavaIoSerializable > {
 @public
  id source_;
}

- (id)initWithId:(id)source;
- (id)getSource;
- (NSString *)description;
- (void)copyAllFieldsTo:(JavaUtilEventObject *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilEventObject, source_, id)

#endif // _JavaUtilEventObject_H_
