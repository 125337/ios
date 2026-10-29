@interface WCFinderGetUpLevelProductCGI : WCFinderLiveBaseCgi
{
    BOOL _useForLottery; // +0x8
    unsigned int _targetLevel; // +0xc
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
}
- (id)initWithTargetLevel:(unsigned int)arg1 useForLottery:(BOOL)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)targetLevel;
- (void)setTargetLevel:(unsigned int)arg1;
- (BOOL)useForLottery;
- (void)setUseForLottery:(BOOL)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

