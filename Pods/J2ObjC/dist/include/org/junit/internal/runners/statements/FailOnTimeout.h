//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _OrgJunitInternalRunnersStatementsFailOnTimeout_H_
#define _OrgJunitInternalRunnersStatementsFailOnTimeout_H_

@class JavaLangThrowable;
@class OrgJunitInternalRunnersStatementsFailOnTimeout_StatementThread;

#import "JreEmulation.h"
#include "java/lang/Thread.h"
#include "org/junit/runners/model/Statement.h"

@interface OrgJunitInternalRunnersStatementsFailOnTimeout : OrgJunitRunnersModelStatement {
 @public
  OrgJunitRunnersModelStatement *fOriginalStatement_;
  long long int fTimeout_;
}

- (id)initWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)originalStatement
                                   withLong:(long long int)timeout;
- (void)evaluate;
- (OrgJunitInternalRunnersStatementsFailOnTimeout_StatementThread *)evaluateStatement;
- (void)throwExceptionForUnfinishedThreadWithOrgJunitInternalRunnersStatementsFailOnTimeout_StatementThread:(OrgJunitInternalRunnersStatementsFailOnTimeout_StatementThread *)thread;
- (void)throwTimeoutExceptionWithOrgJunitInternalRunnersStatementsFailOnTimeout_StatementThread:(OrgJunitInternalRunnersStatementsFailOnTimeout_StatementThread *)thread;
- (void)copyAllFieldsTo:(OrgJunitInternalRunnersStatementsFailOnTimeout *)other;
@end

J2OBJC_FIELD_SETTER(OrgJunitInternalRunnersStatementsFailOnTimeout, fOriginalStatement_, OrgJunitRunnersModelStatement *)

@interface OrgJunitInternalRunnersStatementsFailOnTimeout_StatementThread : JavaLangThread {
 @public
  OrgJunitRunnersModelStatement *fStatement_;
  BOOL fFinished_;
  JavaLangThrowable *fExceptionThrownByOriginalStatement_;
}

- (id)initWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;
- (void)run;
- (void)copyAllFieldsTo:(OrgJunitInternalRunnersStatementsFailOnTimeout_StatementThread *)other;
@end

J2OBJC_FIELD_SETTER(OrgJunitInternalRunnersStatementsFailOnTimeout_StatementThread, fStatement_, OrgJunitRunnersModelStatement *)
J2OBJC_FIELD_SETTER(OrgJunitInternalRunnersStatementsFailOnTimeout_StatementThread, fExceptionThrownByOriginalStatement_, JavaLangThrowable *)

#endif // _OrgJunitInternalRunnersStatementsFailOnTimeout_H_
