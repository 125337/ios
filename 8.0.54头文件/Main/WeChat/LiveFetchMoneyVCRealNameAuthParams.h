@interface LiveFetchMoneyVCRealNameAuthParams : NSObject
{
    BOOL _needRefreshPage; // +0x8
    unsigned int _businessId; // +0xc
    NSString * _token; // +0x10
    FinderEncashPrepareInfo * _targetEncashPrepareInfo; // +0x18
}
- (unsigned int)businessId;
- (void)setBusinessId:(unsigned int)arg1;
- (BOOL)needRefreshPage;
- (void)setNeedRefreshPage:(BOOL)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id)targetEncashPrepareInfo;
- (void)setTargetEncashPrepareInfo:(id)arg1;
- (void).cxx_destruct;
@end

