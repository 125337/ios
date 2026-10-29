@interface LiteAppJsApiEmoticonReward : LiteAppJsApi <StoreEmotionRewardAskForRewardCgiDelegate, MMUseCaseCallback, MMUIViewControllerDelegate, WCBaseControlMgrExt>
{
    NSString * _productId; // +0x20
    StoreEmotionRewardAskForRewardCgi * _rewardCgi; // +0x28
    WCPayPayMoneyLogic * _payLogic; // +0x30
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)onAskForRewardCgiOkWithPid:(id)arg1 AndReqKey:(id)arg2;
- (void)onAskForRewardCgiFailWithPid:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)call:(id)arg1;
- (id)getViewController;
- (void)endWithOK;
- (void)endWithCancel;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)rewardCgi;
- (void)setRewardCgi:(id)arg1;
- (id)payLogic;
- (void)setPayLogic:(id)arg1;
- (void).cxx_destruct;
@end

