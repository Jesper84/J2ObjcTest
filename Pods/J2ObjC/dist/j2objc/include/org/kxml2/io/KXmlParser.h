//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/xml/src/main/java/org/kxml2/io/KXmlParser.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgKxml2IoKXmlParser_H_
#define _OrgKxml2IoKXmlParser_H_

@class IOSCharArray;
@class IOSIntArray;
@class IOSObjectArray;
@class JavaIoInputStream;
@class JavaIoReader;
@class JavaLangBoolean;
@class JavaLangStringBuilder;
@class LibcoreInternalStringPool;
@class OrgKxml2IoKXmlParser_ContentSource;
@class OrgKxml2IoKXmlParser_ValueContextEnum;
@protocol JavaUtilMap;

#import "JreEmulation.h"
#include "java/io/Closeable.h"
#include "java/lang/Enum.h"
#include "org/xmlpull/v1/XmlPullParser.h"

#define OrgKxml2IoKXmlParser_ATTLISTDECL 13
#define OrgKxml2IoKXmlParser_ELEMENTDECL 11
#define OrgKxml2IoKXmlParser_ENTITYDECL 12
#define OrgKxml2IoKXmlParser_NOTATIONDECL 14
#define OrgKxml2IoKXmlParser_PARAMETER_ENTITY_REF 15
#define OrgKxml2IoKXmlParser_XML_DECLARATION 998

@interface OrgKxml2IoKXmlParser : NSObject < OrgXmlpullV1XmlPullParser, JavaIoCloseable > {
 @public
  NSString *location_;
  NSString *version__;
  JavaLangBoolean *standalone_;
  NSString *rootElementName_;
  NSString *systemId_;
  NSString *publicId_;
  BOOL processDocDecl_;
  BOOL processNsp_;
  BOOL relaxed_;
  BOOL keepNamespaceAttributes__;
  JavaLangStringBuilder *bufferCapture_;
  id<JavaUtilMap> documentEntities_;
  id<JavaUtilMap> defaultAttributes_;
  int depth_;
  IOSObjectArray *elementStack_;
  IOSObjectArray *nspStack_;
  IOSIntArray *nspCounts_;
  JavaIoReader *reader_;
  NSString *encoding_;
  OrgKxml2IoKXmlParser_ContentSource *nextContentSource_;
  IOSCharArray *buffer_;
  int position_;
  int limit_;
  int bufferStartLine_;
  int bufferStartColumn_;
  int type_;
  BOOL isWhitespace__;
  NSString *namespace__;
  NSString *prefix_;
  NSString *name_;
  NSString *text_;
  BOOL degenerated_;
  int attributeCount_;
  IOSObjectArray *attributes_;
  NSString *error_;
  BOOL unresolved_;
  LibcoreInternalStringPool *stringPool_;
}

+ (NSString *)PROPERTY_XMLDECL_VERSION;
+ (NSString *)PROPERTY_XMLDECL_STANDALONE;
+ (NSString *)PROPERTY_LOCATION;
+ (NSString *)FEATURE_RELAXED;
+ (id<JavaUtilMap>)DEFAULT_ENTITIES;
+ (IOSCharArray *)START_COMMENT;
+ (IOSCharArray *)END_COMMENT;
+ (IOSCharArray *)COMMENT_DOUBLE_DASH;
+ (IOSCharArray *)START_CDATA;
+ (IOSCharArray *)END_CDATA;
+ (IOSCharArray *)START_PROCESSING_INSTRUCTION;
+ (IOSCharArray *)END_PROCESSING_INSTRUCTION;
+ (IOSCharArray *)START_DOCTYPE;
+ (IOSCharArray *)SYSTEM;
+ (IOSCharArray *)PUBLIC;
+ (IOSCharArray *)START_ELEMENT;
+ (IOSCharArray *)START_ATTLIST;
+ (IOSCharArray *)START_ENTITY;
+ (IOSCharArray *)START_NOTATION;
+ (IOSCharArray *)EMPTY;
+ (IOSCharArray *)ANY;
+ (IOSCharArray *)NDATA;
+ (IOSCharArray *)NOTATION;
+ (IOSCharArray *)REQUIRED;
+ (IOSCharArray *)IMPLIED;
+ (IOSCharArray *)FIXED;
+ (NSString *)UNEXPECTED_EOF;
+ (NSString *)ILLEGAL_TYPE;
+ (IOSCharArray *)SINGLE_QUOTE;
+ (IOSCharArray *)DOUBLE_QUOTE;
- (void)keepNamespaceAttributes;
- (BOOL)adjustNsp;
- (IOSObjectArray *)ensureCapacityWithNSStringArray:(IOSObjectArray *)arr
                                            withInt:(int)required;
- (void)checkRelaxedWithNSString:(NSString *)errorMessage;
- (int)next;
- (int)nextToken;
- (int)nextWithBoolean:(BOOL)justOneToken;
- (NSString *)readUntilWithCharArray:(IOSCharArray *)delimiter
                         withBoolean:(BOOL)returnText;
- (void)readXmlDeclaration;
- (NSString *)readCommentWithBoolean:(BOOL)returnText;
- (void)readDoctypeWithBoolean:(BOOL)saveDtdText;
- (BOOL)readExternalIdWithBoolean:(BOOL)requireSystemName
                      withBoolean:(BOOL)assignFields;
- (NSString *)readQuotedIdWithBoolean:(BOOL)returnText;
- (void)readInternalSubset;
- (void)readElementDeclaration;
- (void)readContentSpec;
- (void)readAttributeListDeclaration;
- (void)defineAttributeDefaultWithNSString:(NSString *)elementName
                              withNSString:(NSString *)attributeName
                              withNSString:(NSString *)value;
- (void)readEntityDeclaration;
- (void)readNotationDeclaration;
- (void)readEndTag;
- (int)peekTypeWithBoolean:(BOOL)inDeclaration;
- (void)parseStartTagWithBoolean:(BOOL)xmldecl
                     withBoolean:(BOOL)throwOnResolveFailure;
- (void)readEntityWithJavaLangStringBuilder:(JavaLangStringBuilder *)outArg
                                withBoolean:(BOOL)isEntityToken
                                withBoolean:(BOOL)throwOnResolveFailure
  withOrgKxml2IoKXmlParser_ValueContextEnum:(OrgKxml2IoKXmlParser_ValueContextEnum *)valueContext;
- (NSString *)readValueWithChar:(unichar)delimiter
                    withBoolean:(BOOL)resolveEntities
                    withBoolean:(BOOL)throwOnResolveFailure
withOrgKxml2IoKXmlParser_ValueContextEnum:(OrgKxml2IoKXmlParser_ValueContextEnum *)valueContext;
- (void)readWithChar:(unichar)expected;
- (void)readWithCharArray:(IOSCharArray *)chars;
- (int)peekCharacter;
- (BOOL)fillBufferWithInt:(int)minimum;
- (NSString *)readName;
- (void)skip;
- (void)setInputWithJavaIoReader:(JavaIoReader *)reader;
- (void)setInputWithJavaIoInputStream:(JavaIoInputStream *)is
                         withNSString:(NSString *)charset;
- (void)close;
- (BOOL)getFeatureWithNSString:(NSString *)feature;
- (NSString *)getInputEncoding;
- (void)defineEntityReplacementTextWithNSString:(NSString *)entity
                                   withNSString:(NSString *)value;
- (id)getPropertyWithNSString:(NSString *)property;
- (NSString *)getRootElementName;
- (NSString *)getSystemId;
- (NSString *)getPublicId;
- (int)getNamespaceCountWithInt:(int)depth;
- (NSString *)getNamespacePrefixWithInt:(int)pos;
- (NSString *)getNamespaceUriWithInt:(int)pos;
- (NSString *)getNamespaceWithNSString:(NSString *)prefix;
- (int)getDepth;
- (NSString *)getPositionDescription;
- (int)getLineNumber;
- (int)getColumnNumber;
- (BOOL)isWhitespace;
- (NSString *)getText;
- (IOSCharArray *)getTextCharactersWithIntArray:(IOSIntArray *)poslen;
- (NSString *)getNamespace;
- (NSString *)getName;
- (NSString *)getPrefix;
- (BOOL)isEmptyElementTag;
- (int)getAttributeCount;
- (NSString *)getAttributeTypeWithInt:(int)index;
- (BOOL)isAttributeDefaultWithInt:(int)index;
- (NSString *)getAttributeNamespaceWithInt:(int)index;
- (NSString *)getAttributeNameWithInt:(int)index;
- (NSString *)getAttributePrefixWithInt:(int)index;
- (NSString *)getAttributeValueWithInt:(int)index;
- (NSString *)getAttributeValueWithNSString:(NSString *)namespace_
                               withNSString:(NSString *)name;
- (int)getEventType;
- (int)nextTag;
- (void)requireWithInt:(int)type
          withNSString:(NSString *)namespace_
          withNSString:(NSString *)name;
- (NSString *)nextText;
- (void)setFeatureWithNSString:(NSString *)feature
                   withBoolean:(BOOL)value;
- (void)setPropertyWithNSString:(NSString *)property
                         withId:(id)value;
- (void)pushContentSourceWithCharArray:(IOSCharArray *)newBuffer;
- (void)popContentSource;
- (id)init;
- (void)copyAllFieldsTo:(OrgKxml2IoKXmlParser *)other;
@end

J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, location_, NSString *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, version__, NSString *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, standalone_, JavaLangBoolean *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, rootElementName_, NSString *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, systemId_, NSString *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, publicId_, NSString *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, bufferCapture_, JavaLangStringBuilder *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, documentEntities_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, defaultAttributes_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, elementStack_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, nspStack_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, nspCounts_, IOSIntArray *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, reader_, JavaIoReader *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, encoding_, NSString *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, nextContentSource_, OrgKxml2IoKXmlParser_ContentSource *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, buffer_, IOSCharArray *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, namespace__, NSString *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, prefix_, NSString *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, name_, NSString *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, text_, NSString *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, attributes_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, error_, NSString *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, stringPool_, LibcoreInternalStringPool *)

typedef enum {
  OrgKxml2IoKXmlParser_ValueContext_ATTRIBUTE = 0,
  OrgKxml2IoKXmlParser_ValueContext_TEXT = 1,
  OrgKxml2IoKXmlParser_ValueContext_ENTITY_DECLARATION = 2,
} OrgKxml2IoKXmlParser_ValueContext;

@interface OrgKxml2IoKXmlParser_ValueContextEnum : JavaLangEnum < NSCopying > {
}
+ (OrgKxml2IoKXmlParser_ValueContextEnum *)ATTRIBUTE;
+ (OrgKxml2IoKXmlParser_ValueContextEnum *)TEXT;
+ (OrgKxml2IoKXmlParser_ValueContextEnum *)ENTITY_DECLARATION;
+ (IOSObjectArray *)values;
+ (OrgKxml2IoKXmlParser_ValueContextEnum *)valueOfWithNSString:(NSString *)name;
- (id)copyWithZone:(NSZone *)zone;
- (id)initWithNSString:(NSString *)__name withInt:(int)__ordinal;
@end

@interface OrgKxml2IoKXmlParser_ContentSource : NSObject {
 @public
  OrgKxml2IoKXmlParser_ContentSource *next_;
  IOSCharArray *buffer_;
  int position_;
  int limit_;
}

- (id)initWithOrgKxml2IoKXmlParser_ContentSource:(OrgKxml2IoKXmlParser_ContentSource *)next
                                   withCharArray:(IOSCharArray *)buffer
                                         withInt:(int)position
                                         withInt:(int)limit;
- (void)copyAllFieldsTo:(OrgKxml2IoKXmlParser_ContentSource *)other;
@end

J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser_ContentSource, next_, OrgKxml2IoKXmlParser_ContentSource *)
J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser_ContentSource, buffer_, IOSCharArray *)

#endif // _OrgKxml2IoKXmlParser_H_
