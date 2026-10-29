@interface WCFinderLiveGetPrizeConfigPanelCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    WCFinderDataItem * _dataItem; // +0x18
    NSData * _liveCookies; // +0x20
    NSString * _anchorFinderUserName; // +0x28
    NSString * _giftId; // +0x30
}
- (id)initWithLiveGetPrizeConfigPanel:(id)arg1 anchorFinderUserName:(id)arg2 liveCookies:(id)arg3 giftId:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)anchorFinderUserName;
- (void)setAnchorFinderUserName:(id)arg1;
- (id)giftId;
- (void)setGiftId:(id)arg1;
- (void).cxx_destruct;
@end
