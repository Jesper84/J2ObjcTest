//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaTextAttributedString_H_
#define _JavaTextAttributedString_H_

@class IOSObjectArray;
@class JavaTextAttributedCharacterIterator_Attribute;
@class JavaUtilHashSet;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#import "JreEmulation.h"
#include "java/text/AttributedCharacterIterator.h"

@interface JavaTextAttributedString : NSObject {
 @public
  NSString *text_;
  id<JavaUtilMap> attributeMap_;
}

- (id)initWithJavaTextAttributedCharacterIterator:(id<JavaTextAttributedCharacterIterator>)iterator;
- (id)initWithJavaTextAttributedCharacterIterator:(id<JavaTextAttributedCharacterIterator>)iterator
                                          withInt:(int)start
                                          withInt:(int)end
                                  withJavaUtilSet:(id<JavaUtilSet>)attributes;
- (id)initWithJavaTextAttributedCharacterIterator:(id<JavaTextAttributedCharacterIterator>)iterator
                                          withInt:(int)start
                                          withInt:(int)end;
- (id)initWithJavaTextAttributedCharacterIterator:(id<JavaTextAttributedCharacterIterator>)iterator
                                          withInt:(int)start
                                          withInt:(int)end
withJavaTextAttributedCharacterIterator_AttributeArray:(IOSObjectArray *)attributes;
- (id)initWithNSString:(NSString *)value;
- (id)initWithNSString:(NSString *)value
       withJavaUtilMap:(id<JavaUtilMap>)attributes;
- (void)addAttributeWithJavaTextAttributedCharacterIterator_Attribute:(JavaTextAttributedCharacterIterator_Attribute *)attribute
                                                               withId:(id)value;
- (void)addAttributeWithJavaTextAttributedCharacterIterator_Attribute:(JavaTextAttributedCharacterIterator_Attribute *)attribute
                                                               withId:(id)value
                                                              withInt:(int)start
                                                              withInt:(int)end;
- (void)addAttributesWithJavaUtilMap:(id<JavaUtilMap>)attributes
                             withInt:(int)start
                             withInt:(int)end;
- (id<JavaTextAttributedCharacterIterator>)getIterator;
- (id<JavaTextAttributedCharacterIterator>)getIteratorWithJavaTextAttributedCharacterIterator_AttributeArray:(IOSObjectArray *)attributes;
- (id<JavaTextAttributedCharacterIterator>)getIteratorWithJavaTextAttributedCharacterIterator_AttributeArray:(IOSObjectArray *)attributes
                                                                                                     withInt:(int)start
                                                                                                     withInt:(int)end;
- (void)copyAllFieldsTo:(JavaTextAttributedString *)other;
@end

J2OBJC_FIELD_SETTER(JavaTextAttributedString, text_, NSString *)
J2OBJC_FIELD_SETTER(JavaTextAttributedString, attributeMap_, id<JavaUtilMap>)

@interface JavaTextAttributedString_Range : NSObject {
 @public
  int start_;
  int end_;
  id value_;
}

- (id)initWithInt:(int)s
          withInt:(int)e
           withId:(id)v;
- (void)copyAllFieldsTo:(JavaTextAttributedString_Range *)other;
@end

J2OBJC_FIELD_SETTER(JavaTextAttributedString_Range, value_, id)

@interface JavaTextAttributedString_AttributedIterator : NSObject < JavaTextAttributedCharacterIterator > {
 @public
  int begin_, end_, offset_;
  JavaTextAttributedString *attrString_;
  JavaUtilHashSet *attributesAllowed_;
}

- (id)initWithJavaTextAttributedString:(JavaTextAttributedString *)attrString;
- (id)initWithJavaTextAttributedString:(JavaTextAttributedString *)attrString
withJavaTextAttributedCharacterIterator_AttributeArray:(IOSObjectArray *)attributes
                               withInt:(int)begin
                               withInt:(int)end;
- (id)clone;
- (unichar)current;
- (unichar)first;
- (int)getBeginIndex;
- (int)getEndIndex;
- (int)getIndex;
- (BOOL)inRangeWithJavaTextAttributedString_Range:(JavaTextAttributedString_Range *)range;
- (BOOL)inRangeWithJavaUtilList:(id<JavaUtilList>)ranges;
- (id<JavaUtilSet>)getAllAttributeKeys;
- (id)currentValueWithJavaUtilList:(id<JavaUtilList>)ranges;
- (id)getAttributeWithJavaTextAttributedCharacterIterator_Attribute:(JavaTextAttributedCharacterIterator_Attribute *)attribute;
- (id<JavaUtilMap>)getAttributes;
- (int)getRunLimit;
- (int)runLimitWithJavaUtilList:(id<JavaUtilList>)ranges;
- (int)getRunLimitWithJavaTextAttributedCharacterIterator_Attribute:(JavaTextAttributedCharacterIterator_Attribute *)attribute;
- (int)getRunLimitWithJavaUtilSet:(id<JavaUtilSet>)attributes;
- (int)getRunStart;
- (int)runStartWithJavaUtilList:(id<JavaUtilList>)ranges;
- (int)getRunStartWithJavaTextAttributedCharacterIterator_Attribute:(JavaTextAttributedCharacterIterator_Attribute *)attribute;
- (int)getRunStartWithJavaUtilSet:(id<JavaUtilSet>)attributes;
- (unichar)last;
- (unichar)next;
- (unichar)previous;
- (unichar)setIndexWithInt:(int)location;
- (id)copyWithZone:(NSZone *)zone;
- (void)copyAllFieldsTo:(JavaTextAttributedString_AttributedIterator *)other;
@end

J2OBJC_FIELD_SETTER(JavaTextAttributedString_AttributedIterator, attrString_, JavaTextAttributedString *)
J2OBJC_FIELD_SETTER(JavaTextAttributedString_AttributedIterator, attributesAllowed_, JavaUtilHashSet *)

#endif // _JavaTextAttributedString_H_
