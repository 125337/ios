@interface WASyncBaseCmd : MMObject
{
    unsigned int _squence; // +0x8
    unsigned int _reportId; // +0xc
    unsigned int _receiveCmdTimeStamp; // +0x10
    NSString * _username; // +0x18
    NSString * _appid; // +0x20
    unsigned long long _cmdType; // +0x28
    NSString * _cmdKey; // +0x30
    NSString * _preDownloadRequestkey; // +0x38
}
- (id)description;
- (id)cmdUniqueIdentifier;
- (void)parseBasePropertyFromWxaBaseCmd:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned long long)cmdType;
- (void)setCmdType:(unsigned long long)arg1;
- (unsigned int)squence;
- (void)setSquence:(unsigned int)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (id)cmdKey;
- (void)setCmdKey:(id)arg1;
- (unsigned int)receiveCmdTimeStamp;
- (void)setReceiveCmdTimeStamp:(unsigned int)arg1;
- (id)preDownloadRequestkey;
- (void)setPreDownloadRequestkey:(id)arg1;
- (void).cxx_destruct;
@end

