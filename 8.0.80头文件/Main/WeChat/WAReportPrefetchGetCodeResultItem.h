@interface WAReportPrefetchGetCodeResultItem : WAReportBaseItem
{
    unsigned int _isEncrypt; // +0x8
    unsigned int _networkEnvType; // +0xc
    unsigned int _isSuccess; // +0x10
    unsigned int _retryCount; // +0x14
    unsigned int _cmdSequence; // +0x18
    unsigned int _reportId; // +0x1c
    NSString * _prefetchId; // +0x20
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (unsigned int)isEncrypt;
- (void)setIsEncrypt:(unsigned int)arg1;
- (unsigned int)networkEnvType;
- (void)setNetworkEnvType:(unsigned int)arg1;
- (unsigned int)isSuccess;
- (void)setIsSuccess:(unsigned int)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (unsigned int)cmdSequence;
- (void)setCmdSequence:(unsigned int)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (id)prefetchId;
- (void)setPrefetchId:(id)arg1;
- (void).cxx_destruct;
@end
