@interface MMLiveCommentTraceRecord : NSObject
{
    BOOL _isSender; // +0x8
    unsigned int _stageId; // +0xc
    NSString * _localClientMsgId; // +0x10
    unsigned long long _seq; // +0x18
    unsigned long long _timeStampMs; // +0x20
    unsigned long long _cliTimestampMs; // +0x28
}
- (id)localClientMsgId;
- (void)setLocalClientMsgId:(id)arg1;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (unsigned int)stageId;
- (void)setStageId:(unsigned int)arg1;
- (unsigned long long)timeStampMs;
- (void)setTimeStampMs:(unsigned long long)arg1;
- (unsigned long long)cliTimestampMs;
- (void)setCliTimestampMs:(unsigned long long)arg1;
- (BOOL)isSender;
- (void)setIsSender:(BOOL)arg1;
- (void).cxx_destruct;
@end
