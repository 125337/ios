@interface GameURLSessionStatistics : NSObject
{
    BOOL _hasSimpleDnsLevelDown; // +0x8
    unsigned int _normalReqCount; // +0xc
    unsigned int _normalSucCount; // +0x10
    unsigned int _normalFailCount; // +0x14
    unsigned int _normalAvgRTT; // +0x18
    unsigned int _simpleReqCount; // +0x1c
    unsigned int _simpleSucCount; // +0x20
    unsigned int _simpleFailCount; // +0x24
    unsigned int _simpleAvgRTT; // +0x28
    unsigned int _dnsErrorCount; // +0x2c
    unsigned int _normalRetryCount; // +0x30
    unsigned int _simpleRetryCount; // +0x34
    unsigned int _retrySucCount; // +0x38
    unsigned int _certErrorCount; // +0x3c
    unsigned int _simpleRetrySucCount; // +0x40
    unsigned int _totalCount; // +0x44
    unsigned long long _normalRttTotalTime; // +0x48
    unsigned long long _simpleRttTotalTime; // +0x50
}
- (void)recordNewRequest:(id)arg1;
- (void)recordReqSuccess:(id)arg1;
- (void)recordReqFailed:(id)arg1;
- (void)recordSimpleDnsLevelDown;
- (void)setTotalCount:(unsigned int)arg1;
- (void)doReportAndClean;
- (id)toReportString;
- (int)getReportNetWorkType;
- (void)report;
- (unsigned int)normalReqCount;
- (void)setNormalReqCount:(unsigned int)arg1;
- (unsigned int)normalSucCount;
- (void)setNormalSucCount:(unsigned int)arg1;
- (unsigned int)normalFailCount;
- (void)setNormalFailCount:(unsigned int)arg1;
- (unsigned int)normalAvgRTT;
- (void)setNormalAvgRTT:(unsigned int)arg1;
- (unsigned int)simpleReqCount;
- (void)setSimpleReqCount:(unsigned int)arg1;
- (unsigned int)simpleSucCount;
- (void)setSimpleSucCount:(unsigned int)arg1;
- (unsigned int)simpleFailCount;
- (void)setSimpleFailCount:(unsigned int)arg1;
- (unsigned int)simpleAvgRTT;
- (void)setSimpleAvgRTT:(unsigned int)arg1;
- (unsigned int)dnsErrorCount;
- (void)setDnsErrorCount:(unsigned int)arg1;
- (unsigned int)normalRetryCount;
- (void)setNormalRetryCount:(unsigned int)arg1;
- (unsigned int)simpleRetryCount;
- (void)setSimpleRetryCount:(unsigned int)arg1;
- (unsigned int)retrySucCount;
- (void)setRetrySucCount:(unsigned int)arg1;
- (unsigned int)certErrorCount;
- (void)setCertErrorCount:(unsigned int)arg1;
- (unsigned int)simpleRetrySucCount;
- (void)setSimpleRetrySucCount:(unsigned int)arg1;
- (BOOL)hasSimpleDnsLevelDown;
- (void)setHasSimpleDnsLevelDown:(BOOL)arg1;
- (unsigned long long)normalRttTotalTime;
- (void)setNormalRttTotalTime:(unsigned long long)arg1;
- (unsigned long long)simpleRttTotalTime;
- (void)setSimpleRttTotalTime:(unsigned long long)arg1;
- (unsigned int)totalCount;
@end
