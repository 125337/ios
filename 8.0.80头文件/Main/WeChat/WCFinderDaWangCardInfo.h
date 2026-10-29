@interface WCFinderDaWangCardInfo : NSObject
{
    BOOL _hadRequestFinished; // +0x8
    id /* block */ _updateBlock; // +0x10
    WCFinderDaWangResponseBusiness * _lastResponseBusiness; // +0x18
    NSDateFormatter * _dateFormatter; // +0x20
    NSString * _lastIPV4; // +0x28
    NSString * _lastIPV6; // +0x30
    NSString * _currentSeqId; // +0x38
}
- (id)init;
- (id)genSystemDict;
- (void)updateIP;
- (void)updateIPV4:(id)arg1 IPV6:(id)arg2;
- (BOOL)IPStringsEqual:(id)arg1 newIP:(id)arg2;
- (void)getRequestWithBusinessParameter:(id)arg1;
- (id)sm3WithValue:(id)arg1 key:(id)arg2;
- (id)hexStringWithData:(id)arg1;
- (id)getSM3StringWithSystemParameter:(id)arg1 businessParameter:(id)arg2;
- (id)recursiveStringFromObject:(id)arg1;
- (id)_generateCombinedStringWithSystemParameter:(id)arg1 businessParameter:(id)arg2;
- (unsigned long long)checkIPAddressType:(id)arg1;
- (id /* block */)updateBlock;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id)lastResponseBusiness;
- (void)setLastResponseBusiness:(id)arg1;
- (BOOL)hadRequestFinished;
- (void)setHadRequestFinished:(BOOL)arg1;
- (id)dateFormatter;
- (void)setDateFormatter:(id)arg1;
- (id)lastIPV4;
- (void)setLastIPV4:(id)arg1;
- (id)lastIPV6;
- (void)setLastIPV6:(id)arg1;
- (id)currentSeqId;
- (void)setCurrentSeqId:(id)arg1;
- (void).cxx_destruct;
@end
