@interface ChatBotTaskBarReportContext : NSObject
{
    BOOL _fromSugDirectEntry; // +0x8
    BOOL _hasSendQueryEventReported; // +0x9
    BOOL _hasFirstTokenEventReported; // +0xa
    BOOL _hasCompleteEventReported; // +0xb
    BOOL _pendingFirstTokenEvent; // +0xc
    BOOL _pendingCompleteEvent; // +0xd
    NSString * _voipSessionID; // +0x10
    NSString * _taskBarSessionId; // +0x18
    NSString * _xiaoWeiBypass; // +0x20
    NSString * _sugQuery; // +0x28
    NSString * _xiaoWeiEntryText; // +0x30
    NSString * _xiaoWeiExtraData; // +0x38
    NSString * _sugPositionName; // +0x40
    unsigned long long _querySubmitTs; // +0x48
    NSString * _cgiSessionId; // +0x50
    long long _queryId; // +0x58
    NSString * _traceId; // +0x60
    long long _answerId; // +0x68
    long long _answerLength; // +0x70
    unsigned long long _firstTokenTs; // +0x78
    unsigned long long _answerCompleteTs; // +0x80
    unsigned long long _answerTextChannel; // +0x88
    id /* block */ _pendingMiniAppFlushHandler; // +0x90
}
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (id)taskBarSessionId;
- (void)setTaskBarSessionId:(id)arg1;
- (id)xiaoWeiBypass;
- (void)setXiaoWeiBypass:(id)arg1;
- (id)sugQuery;
- (void)setSugQuery:(id)arg1;
- (id)xiaoWeiEntryText;
- (void)setXiaoWeiEntryText:(id)arg1;
- (id)xiaoWeiExtraData;
- (void)setXiaoWeiExtraData:(id)arg1;
- (BOOL)fromSugDirectEntry;
- (void)setFromSugDirectEntry:(BOOL)arg1;
- (id)sugPositionName;
- (void)setSugPositionName:(id)arg1;
- (unsigned long long)querySubmitTs;
- (void)setQuerySubmitTs:(unsigned long long)arg1;
- (id)cgiSessionId;
- (void)setCgiSessionId:(id)arg1;
- (long long)queryId;
- (void)setQueryId:(long long)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (long long)answerId;
- (void)setAnswerId:(long long)arg1;
- (long long)answerLength;
- (void)setAnswerLength:(long long)arg1;
- (unsigned long long)firstTokenTs;
- (void)setFirstTokenTs:(unsigned long long)arg1;
- (unsigned long long)answerCompleteTs;
- (void)setAnswerCompleteTs:(unsigned long long)arg1;
- (unsigned long long)answerTextChannel;
- (void)setAnswerTextChannel:(unsigned long long)arg1;
- (BOOL)hasSendQueryEventReported;
- (void)setHasSendQueryEventReported:(BOOL)arg1;
- (BOOL)hasFirstTokenEventReported;
- (void)setHasFirstTokenEventReported:(BOOL)arg1;
- (BOOL)hasCompleteEventReported;
- (void)setHasCompleteEventReported:(BOOL)arg1;
- (BOOL)pendingFirstTokenEvent;
- (void)setPendingFirstTokenEvent:(BOOL)arg1;
- (BOOL)pendingCompleteEvent;
- (void)setPendingCompleteEvent:(BOOL)arg1;
- (id /* block */)pendingMiniAppFlushHandler;
- (void)setPendingMiniAppFlushHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
