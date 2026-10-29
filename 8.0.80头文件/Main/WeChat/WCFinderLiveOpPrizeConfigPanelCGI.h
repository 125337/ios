@interface WCFinderLiveOpPrizeConfigPanelCGI : WCFinderLiveBaseCgi
{
    unsigned int _opType; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    PrizeConfigItem * _prizeConfigItem; // +0x20
    unsigned long long _objectId; // +0x28
    NSString * _anchorFinderUsername; // +0x30
}
- (id)initWithPrizeConfigItem:(id)arg1 opType:(unsigned int)arg2 objectId:(unsigned long long)arg3 anchorFinderUsername:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)prizeConfigItem;
- (void)setPrizeConfigItem:(id)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)anchorFinderUsername;
- (void)setAnchorFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end
