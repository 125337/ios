@interface ChatBotHeadlessChainCostTracker : NSObject
{
    unsigned long long[7] _ts; // +0x8
    unsigned long long _lastReportEventMs; // +0x40
    BOOL _flushed; // +0x48
    BOOL _success; // +0x49
    BOOL _hasModelReply; // +0x4a
    NSString * _sessionID; // +0x50
    NSString * _searchContactId; // +0x58
    NSString * _traceId; // +0x60
    NSString * _route; // +0x68
    NSString * _errorMsg; // +0x70
    NSString * _askXiaoweiSrcInfo; // +0x78
    NSMutableDictionary * _fcStartStacks; // +0x80
    unsigned long long _fcCount; // +0x88
}
- (id)init;
- (unsigned long long)nowMs;
- (long long)decisionFromRoute;
- (void)reportEvent:(id)arg1 extraParams:(id)arg2;
- (void)startRoundForSessionID:(id)arg1;
- (void)bindTraceId:(id)arg1;
- (void)mergeAskXiaoweiSrcInfoParams:(id)arg1;
- (void)mark:(long long)arg1;
- (void)recordFCStart:(id)arg1;
- (void)recordFCEnd:(id)arg1;
- (void)flushIfNeeded;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)searchContactId;
- (void)setSearchContactId:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (BOOL)flushed;
- (void)setFlushed:(BOOL)arg1;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (id)route;
- (void)setRoute:(id)arg1;
- (id)errorMsg;
- (void)setErrorMsg:(id)arg1;
- (id)askXiaoweiSrcInfo;
- (void)setAskXiaoweiSrcInfo:(id)arg1;
- (BOOL)hasModelReply;
- (void)setHasModelReply:(BOOL)arg1;
- (id)fcStartStacks;
- (void)setFcStartStacks:(id)arg1;
- (unsigned long long)fcCount;
- (void)setFcCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
