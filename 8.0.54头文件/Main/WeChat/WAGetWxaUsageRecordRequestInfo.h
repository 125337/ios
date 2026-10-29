@interface WAGetWxaUsageRecordRequestInfo : NSObject
{
    unsigned int _requestTime; // +0x8
    NSString * _SSIDHash; // +0x10
    NSString * _BSSIDHash; // +0x18
    TencentLBSLocation * _location; // +0x20
}
- (id)SSIDHash;
- (void)setSSIDHash:(id)arg1;
- (id)BSSIDHash;
- (void)setBSSIDHash:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (unsigned int)requestTime;
- (void)setRequestTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

