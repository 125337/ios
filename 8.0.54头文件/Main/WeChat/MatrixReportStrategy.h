@interface MatrixReportStrategy : NSObject
{
    BOOL _vipStrategy; // +0x8
    float _sampleRatio; // +0xc
    unsigned long long _reportNetType; // +0x10
    unsigned long long _maxDailyUploadCnt; // +0x18
    unsigned long long _timeoutSecond; // +0x20
}
- (id)init;
- (unsigned long long)reportNetType;
- (void)setReportNetType:(unsigned long long)arg1;
- (unsigned long long)maxDailyUploadCnt;
- (void)setMaxDailyUploadCnt:(unsigned long long)arg1;
- (float)sampleRatio;
- (void)setSampleRatio:(float)arg1;
- (BOOL)vipStrategy;
- (void)setVipStrategy:(BOOL)arg1;
- (unsigned long long)timeoutSecond;
- (void)setTimeoutSecond:(unsigned long long)arg1;
@end

