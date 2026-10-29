@interface WCRealTimeKVReportWrap : MMObject
{
    BOOL _needRealTime; // +0x8
    BOOL _reportSuccess; // +0x9
    BOOL _tryReportFail; // +0xa
    unsigned int _logId; // +0xc
    NSString * _value; // +0x10
    NSString * _extKey; // +0x18
}
- (unsigned int)logId;
- (void)setLogId:(unsigned int)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (BOOL)needRealTime;
- (void)setNeedRealTime:(BOOL)arg1;
- (id)extKey;
- (void)setExtKey:(id)arg1;
- (BOOL)reportSuccess;
- (void)setReportSuccess:(BOOL)arg1;
- (BOOL)tryReportFail;
- (void)setTryReportFail:(BOOL)arg1;
- (void).cxx_destruct;
@end
