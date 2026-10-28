@interface MMFinderLiveECShareManager : MMUserService <MMServiceProtocol>
{
    MMFinderLiveECProductShareLogic * _productShareLogic; // +0x8
    MMFinderLiveECShopWindowShareLogic * _shopWindowShareLogic; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)productShareLogic;
- (id)shopWindowShareLogic;
- (void)onLiveECShareWithShareTask:(id)arg1;
- (void)getShopDisplayWindowCard:(id)arg1 isMpChat:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setProductShareLogic:(id)arg1;
- (void)setShopWindowShareLogic:(id)arg1;
- (void).cxx_destruct;
@end
