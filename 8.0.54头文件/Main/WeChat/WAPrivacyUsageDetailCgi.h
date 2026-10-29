@interface WAPrivacyUsageDetailCgi : WCBaseCgi
{
    unsigned int _lastUpdateTime; // +0x8
    unsigned int _recordCount; // +0xc
    id <WAPrivacyUsageDetailCgiDelegate> _delegate; // +0x10
    NSString * _usrname; // +0x18
}
- (id)init;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)mockDataWithDate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)usrname;
- (void)setUsrname:(id)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (unsigned int)recordCount;
- (void)setRecordCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

