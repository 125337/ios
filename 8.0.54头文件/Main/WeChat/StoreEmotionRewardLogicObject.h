@interface StoreEmotionRewardLogicObject : MMObject <StoreEmotionRewardAskForRewardCgiDelegate, WCBaseControlMgrExt, MMUIViewControllerDelegate, MMUseCaseCallback>
{
    EmoticonStoreItem * m_storeItem; // +0x8
    EmotionRewardResponseInfo * m_rewardInfo; // +0x10
    EmotionRewardExtInfo * m_extInfo; // +0x18
    MMUIViewController * m_rootViewController; // +0x20
    MMUIViewController * m_askForRewardViewController; // +0x28
    StoreEmotionRewardAskForRewardCgi * m_askForRewardCgi; // +0x30
    WCPayPayMoneyLogic * m_payLogic; // +0x38
    BOOL m_isAskingForReward; // +0x40
    unsigned long long m_rewardResult; // +0x48
}
- (void)dealloc;
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2 FromRootViewController:(id)arg3 extInfo:(id)arg4;
- (BOOL)askForRewardWithPrice:(id)arg1 FromViewController:(id)arg2;
- (BOOL)isOnWeChatPay;
- (void)cancelReward;
- (void)finishReward;
- (void)presentThanksViewController;
- (void)onAskForRewardCgiOkWithPid:(id)arg1 AndReqKey:(id)arg2;
- (void)onAskForRewardCgiFailWithPid:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (id)getViewController;
- (void)call:(id)arg1;
- (void).cxx_destruct;
@end

