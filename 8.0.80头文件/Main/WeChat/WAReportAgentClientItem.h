@interface WAReportAgentClientItem : NSObject
{
    unsigned int _costTimeMs; // +0x8
    unsigned int _totalDuration; // +0xc
    unsigned int _totalRounds; // +0x10
    unsigned int _msgContentLength; // +0x14
    unsigned int _contextSizeBefore; // +0x18
    unsigned int _contextSizeAfter; // +0x1c
    unsigned int _packageSize; // +0x20
    unsigned int _isCacheHit; // +0x24
    NSString * _eventType; // +0x28
    NSString * _eventId; // +0x30
    NSString * _sessionId; // +0x38
    NSString * _clientSessionId; // +0x40
    NSString * _clientRoundId; // +0x48
    NSString * _subagentSessionId; // +0x50
    NSString * _msgId; // +0x58
    NSString * _subagentId; // +0x60
    NSString * _roundId; // +0x68
    NSString * _actionId; // +0x70
    NSString * _actionType; // +0x78
    NSString * _msgType; // +0x80
    NSString * _msgContent; // +0x88
    NSString * _msgContentId; // +0x90
    NSString * _errorCode; // +0x98
    NSString * _errorType; // +0xa0
    NSString * _errorMessage; // +0xa8
    NSString * _eventReason; // +0xb0
    NSString * _stageName; // +0xb8
    NSString * _appid; // +0xc0
    NSString * _componentName; // +0xc8
    NSString * _componentType; // +0xd0
    NSString * _packageName; // +0xd8
    NSString * _detailsJson; // +0xe0
    NSMutableArray * _paramArr; // +0xe8
}
- (int)reportID;
- (void)startAppendParam;
- (void)appendString:(id)arg1;
- (void)appendUInt32:(unsigned int)arg1;
- (void)appendUInt64:(unsigned long long)arg1;
- (id)getJoinedParamStr;
- (id)reportString;
- (void)report;
- (id)eventType;
- (void)setEventType:(id)arg1;
- (id)eventId;
- (void)setEventId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)clientSessionId;
- (void)setClientSessionId:(id)arg1;
- (id)clientRoundId;
- (void)setClientRoundId:(id)arg1;
- (id)subagentSessionId;
- (void)setSubagentSessionId:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)subagentId;
- (void)setSubagentId:(id)arg1;
- (id)roundId;
- (void)setRoundId:(id)arg1;
- (id)actionId;
- (void)setActionId:(id)arg1;
- (id)actionType;
- (void)setActionType:(id)arg1;
- (unsigned int)costTimeMs;
- (void)setCostTimeMs:(unsigned int)arg1;
- (unsigned int)totalDuration;
- (void)setTotalDuration:(unsigned int)arg1;
- (unsigned int)totalRounds;
- (void)setTotalRounds:(unsigned int)arg1;
- (id)msgType;
- (void)setMsgType:(id)arg1;
- (id)msgContent;
- (void)setMsgContent:(id)arg1;
- (id)msgContentId;
- (void)setMsgContentId:(id)arg1;
- (unsigned int)msgContentLength;
- (void)setMsgContentLength:(unsigned int)arg1;
- (id)errorCode;
- (void)setErrorCode:(id)arg1;
- (id)errorType;
- (void)setErrorType:(id)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (id)eventReason;
- (void)setEventReason:(id)arg1;
- (id)stageName;
- (void)setStageName:(id)arg1;
- (unsigned int)contextSizeBefore;
- (void)setContextSizeBefore:(unsigned int)arg1;
- (unsigned int)contextSizeAfter;
- (void)setContextSizeAfter:(unsigned int)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)componentName;
- (void)setComponentName:(id)arg1;
- (id)componentType;
- (void)setComponentType:(id)arg1;
- (id)packageName;
- (void)setPackageName:(id)arg1;
- (unsigned int)packageSize;
- (void)setPackageSize:(unsigned int)arg1;
- (unsigned int)isCacheHit;
- (void)setIsCacheHit:(unsigned int)arg1;
- (id)detailsJson;
- (void)setDetailsJson:(id)arg1;
- (id)paramArr;
- (void)setParamArr:(id)arg1;
- (void).cxx_destruct;
@end
