@interface TingWecoinPlugin : NSObject <_TtP6WeChat32WCCoinSubscribePriceTierDelegate_, MMFlutterPlugin, TingWecoinApi>
{
    _TtC6WeChat26WCCoinSubscribeMemberLogic * _wecoinLogic; // +0x8
    MMListenMembershipJoinInfo_WecoinSchemeInfo_PackageInfo * _selectedPackage; // +0x10
    MMListenMembershipJoinResponse * _joinResp; // +0x18
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)showWecoinSubscribeViewRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)showWecoinSubscribeView:(id)arg1 sessionId:(id)arg2 scene:(int)arg3 completion:(id /* block */)arg4;
- (void)joinWithPackage:(id)arg1 subcriptionExtInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getOrderBuffWithPriceTier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)wecoinLogic;
- (void)setWecoinLogic:(id)arg1;
- (id)selectedPackage;
- (void)setSelectedPackage:(id)arg1;
- (id)joinResp;
- (void)setJoinResp:(id)arg1;
- (void).cxx_destruct;
@end

