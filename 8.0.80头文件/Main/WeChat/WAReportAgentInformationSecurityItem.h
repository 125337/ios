@interface WAReportAgentInformationSecurityItem : MMObject
{
    NSString * _event; // +0x8
    unsigned long long _eventTsMs; // +0x10
    unsigned long long _scene; // +0x18
    NSString * _sessionId; // +0x20
    NSString * _appId; // +0x28
    NSString * _traceId; // +0x30
    unsigned long long _bizUin; // +0x38
    NSString * _appVersion; // +0x40
    NSString * _extraData; // +0x48
    NSString * _msgId; // +0x50
    NSString * _roundId; // +0x58
    NSMutableArray * _paramArr; // +0x60
}
- (int)reportID;
- (void)startAppendParam;
- (void)appendString:(id)arg1;
- (void)appendUInt32:(unsigned int)arg1;
- (void)appendUInt64:(unsigned long long)arg1;
- (void)appendInt:(int)arg1;
- (id)getJoinedParamStr;
- (id)reportString;
- (void)report;
- (id)event;
- (void)setEvent:(id)arg1;
- (unsigned long long)eventTsMs;
- (void)setEventTsMs:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (unsigned long long)bizUin;
- (void)setBizUin:(unsigned long long)arg1;
- (id)appVersion;
- (void)setAppVersion:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)roundId;
- (void)setRoundId:(id)arg1;
- (id)paramArr;
- (void)setParamArr:(id)arg1;
- (void).cxx_destruct;
@end
