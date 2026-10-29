@interface WCFinderGetLbsListCgi : WCFinderBaseCgi
{
    int _requestScene; // +0x8
    NSString * _keyword; // +0x10
    NSData * _lastBuffer; // +0x18
    FinderLbsLocation * _lbsLocation; // +0x20
    long long _entryTime; // +0x28
    long long _isAutoQuery; // +0x30
    FinderLbsLocation * _materialLbsLocation; // +0x38
    id /* block */ _successBlock; // +0x40
    id /* block */ _failBlock; // +0x48
}
- (id)initWithRequestScene:(int)arg1 lastBuffer:(id)arg2 lbsLocation:(id)arg3 keyword:(id)arg4 entryTime:(long long)arg5 isAutoQuery:(long long)arg6 materialLbsLocation:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)requestScene;
- (void)setRequestScene:(int)arg1;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)lbsLocation;
- (void)setLbsLocation:(id)arg1;
- (long long)entryTime;
- (void)setEntryTime:(long long)arg1;
- (long long)isAutoQuery;
- (void)setIsAutoQuery:(long long)arg1;
- (id)materialLbsLocation;
- (void)setMaterialLbsLocation:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

