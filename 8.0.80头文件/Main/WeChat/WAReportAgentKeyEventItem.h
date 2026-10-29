@interface WAReportAgentKeyEventItem : MMObject
{
    int _errCode; // +0x8
    NSString * _event; // +0x10
    unsigned long long _eventTsMs; // +0x18
    unsigned long long _scene; // +0x20
    NSString * _sessionId; // +0x28
    NSString * _appId; // +0x30
    NSString * _traceId; // +0x38
    unsigned long long _costTimeMs; // +0x40
    NSString * _errMsg; // +0x48
    unsigned long long _roomId; // +0x50
    NSString * _reason; // +0x58
    NSString * _extraData; // +0x60
    NSMutableArray * _paramArr; // +0x68
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
- (unsigned long long)costTimeMs;
- (void)setCostTimeMs:(unsigned long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (int)errCode;
- (void)setErrCode:(int)arg1;
- (unsigned long long)roomId;
- (void)setRoomId:(unsigned long long)arg1;
- (id)reason;
- (void)setReason:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)paramArr;
- (void)setParamArr:(id)arg1;
- (void).cxx_destruct;
@end
