@interface MMFinderLiveRewardSendingLogic : NSObject <WCFinderLiveExt, WCCoinBuyCoinLogicDelegate, MMLiveRewardGiftSendingMoreLogicDelegate, MMLiveRewardQuotaSheetViewDelegate, MMLiveRewardQuotaPolicySheetViewDelegate, MMLiveRewardGiftSelectionLogicDelegate>
{
    BOOL _skipRewardQuotaCheck; // +0x8
    BOOL _wecoinBalanceUpdated; // +0x9
    unsigned int _lastComboGiftCount; // +0xc
    unsigned int _lastCanRequestRewardComboGiftCount; // +0x10
    unsigned int _lastMultiAnimationComboGiftCount; // +0x14
    MMLiveRewardGiftSelectionView * _rewardGiftSelectionView; // +0x18
    id <MMFinderLiveRewardSendingLogicForReceivingDelegate> _receivingDelegate; // +0x20
    id <MMFinderLiveRewardSendingLogicForOperationDelegate> _operationDelegate; // +0x28
    id /* block */ _rewardClickCallback; // +0x30
    id /* block */ _rewardComboCompletion; // +0x38
    id /* block */ _rewardComboUpdateCallback; // +0x40
    id /* block */ _rewardComboLongPressFinishedCallback; // +0x48
    id <MMFinderLiveGiftSendMoreBubbleHosting> _sendingMoreBubbleView; // +0x50
    MMLiveRewardQuotaSheetView * _rewardQuotaSheetView; // +0x58
    MMFinderLiveTaskId * _taskId; // +0x60
    MMFinderLiveRewardGiftItem * _currentGiftItem; // +0x68
    WCFinderContact * _currentRewardRecipientContact; // +0x70
    FinderLiveRewardGiftExtInfo * _currentRewardExtInfo; // +0x78
    NSString * _currentComboId; // +0x80
    unsigned long long _currentGiftCount; // +0x88
    unsigned long long _lastComboCreatetimeInMs; // +0x90
    long long _currentBalance; // +0x98
    NSMutableDictionary * _rewardComboId2RewardRequests; // +0xa0
    NSMutableDictionary * _rewardComboId2ConsumeSuccessCount; // +0xa8
    MMFinderLiveCommomQueue * _rewardPrepareQueue; // +0xb0
    MMFinderLiveRewardGiftItem * _currentRandomRealGiftItem; // +0xb8
    NSData * _currentRewardPrepareBuf; // +0xc0
    unsigned long long _nextFlowSignHistoryRewardQuota; // +0xc8
    NSMutableDictionary * _comboId2RewardPrepareBufArray; // +0xd0
    unsigned long long _currentSendMoreBubbleHost; // +0xd8
}
- (id)initWithLiveTaskId:(id)arg1 sendingMoreBubbleView:(id)arg2;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)preloadWecoinSDK;
- (void)onExitLive;
- (void)endCurrentSendingCombo;
- (id)openNewRewardGiftSelectionView:(BOOL)arg1 preferredGiftId:(id)arg2 sendingHint:(id)arg3 viewDelegate:(id)arg4;
- (id)openNewRewardGiftSelectionView:(BOOL)arg1 packageSelectGiftItem:(id)arg2 autoSelectGiftItem:(BOOL)arg3 viewDelegate:(id)arg4;
- (void)showLiveRewardQuotaSheetViewForGift:(id)arg1 rewardQuota:(unsigned long long)arg2 rewardExtInfo:(id)arg3 currentBalance:(long long)arg4 wecoinBalanceUpdated:(BOOL)arg5 needFaceVerify:(BOOL)arg6 sourceSendMoreBubbleHost:(unsigned long long)arg7 confirmedCallback:(id /* block */)arg8;
- (void)dismissLiveRewardQuotaSheetViewForExitLive;
- (void)dimissRewardGiftSelectionView;
- (void)sendNewLiveRewardRequestWithPagAnimation:(id)arg1;
- (void)sendRewardPrepareForRandomGift:(id)arg1 comboGiftCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)sendRewardPrepareForAttackGift:(id)arg1 comboGiftCount:(unsigned long long)arg2 prepareRewardProductCount:(unsigned int)arg3 attackFinderUsernameList:(id)arg4 completion:(id /* block */)arg5;
- (void)sendRewardPrepareForRandomExtraValueGift:(id)arg1 comboGiftCount:(unsigned long long)arg2 prepareRewardProductCount:(unsigned int)arg3 completion:(id /* block */)arg4;
- (BOOL)isSendingExtraPKValueGift;
- (BOOL)isSendingGiftToOtherAudience;
- (void)mergeRewardPrepareModel:(id)arg1 realRewardProductIdsCompletion:(id /* block */)arg2 randomGiftPrepareBufCompeltion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)mergeRandomGiftPrepareBuf:(id)arg1;
- (void)onLongPressSendingGiftFinished:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 sourceHost:(unsigned long long)arg4;
- (void)onSendingGiftBatchUpdate:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 fromLongPress:(BOOL)arg4 sourceHost:(unsigned long long)arg5;
- (void)onSendingGiftBatchFinish:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 sourceHost:(unsigned long long)arg4;
- (void)delayCallOnSendingGiftBatchFinish:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 delayInterval:(double)arg4 sourceHost:(unsigned long long)arg5;
- (void)onSendingGiftBatchFinishWithExtraInfo:(id)arg1;
- (BOOL)onSelectRewardGift:(id)arg1 rewardExtInfo:(id)arg2 currentBalance:(long long)arg3 wecoinBalanceUpdated:(BOOL)arg4 skipRewardQuotaCheck:(BOOL)arg5 targetSendMoreBubbleHost:(unsigned long long)arg6;
- (void)onSendingRewardGiftDirectly:(id)arg1 rewardExtInfo:(id)arg2 comboGiftCount:(unsigned int)arg3 currentBalance:(long long)arg4 wecoinBalanceUpdated:(BOOL)arg5 targetSendMoreBubbleHost:(unsigned long long)arg6;
- (void)onNeedBuyCoin:(id)arg1 currentBalance:(long long)arg2;
- (void)onBuyCoin:(id)arg1 rechargeScene:(unsigned int)arg2;
- (void)onMMLiveRewardQuotaSheetViewActionButtonClicked:(id)arg1;
- (void)onMMLiveRewardQuotaSheetViewSettingButtonClicked:(id)arg1;
- (void)onMMLiveRewardQuotaPolicySheetViewActionButtonClicked:(unsigned long long)arg1 verifyUrl:(id)arg2 secverifyId:(id)arg3 userInfo:(id)arg4;
- (BOOL)showVerifySheetIfExceedRewardQuotaWithCurrentGift:(id)arg1 countIncrease:(unsigned long long)arg2 sourceSendMoreBubbleHost:(unsigned long long)arg3;
- (BOOL)showFlowSignSheetIfHistoryRewardExceedLimitWithCurrentGift:(id)arg1 countIncrease:(unsigned long long)arg2 sourceSendMoreBubbleHost:(unsigned long long)arg3;
- (void)onFinderLiveDidGetBalance:(unsigned long long)arg1;
- (void)sendNewLiveRewardRequest:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 comboFinished:(BOOL)arg4 currentRewardExtInfo:(id)arg5 rewardRecipientContact:(id)arg6 prepareBuffer:(id)arg7 targetSendMoreBubbleHost:(unsigned long long)arg8 successCompletion:(id /* block */)arg9;
- (void)addRewardRequest:(id)arg1;
- (void)removeRewardRequestWithComboId:(id)arg1 requestId:(id)arg2;
- (long long)getRemainRewardRequestCount:(id)arg1;
- (void)chargeCoinWithFromPage:(id)arg1 rechargeScene:(unsigned int)arg2;
- (void)buyCoinSuccess:(id)arg1;
- (void)delayOpenNewRewardGiftSelectionViewAfterBuyCoin;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (BOOL)isRewardGiftSelectionViewShow;
- (id)genRewardUniqueID:(id)arg1;
- (id)createLocalSendAppMsgInfoWithComboId:(id)arg1 rewardProductCount:(unsigned int)arg2 rewardGiftItem:(id)arg3 rewardGiftExtInfo:(id)arg4 giftRandomItemList:(id)arg5;
- (void)replaceRealGiftItem:(id)arg1 localRewardAppMsgInfo:(id)arg2;
- (void)handleLocalSendSuccessRewardAppMsgInfo:(id)arg1;
- (void)handleAsyncExtraValueItemUpdated:(id)arg1 forRewardAppMsgInfo:(id)arg2;
- (void)handleGiftPrepareRespWithComboId:(id)arg1 prepareModel:(id)arg2;
- (void)addRewardPrepareBufArray:(id)arg1 currentComboId:(id)arg2;
- (void)removeRewardPrepareBufArray:(id)arg1 currentComboId:(id)arg2;
- (void)cleanRewardPrepareBufArray:(id)arg1;
- (id)liveTask;
- (id)rewardGiftSelectionView;
- (void)setRewardGiftSelectionView:(id)arg1;
- (id)receivingDelegate;
- (void)setReceivingDelegate:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id /* block */)rewardClickCallback;
- (void)setRewardClickCallback:(id /* block */)arg1;
- (id /* block */)rewardComboCompletion;
- (void)setRewardComboCompletion:(id /* block */)arg1;
- (id /* block */)rewardComboUpdateCallback;
- (void)setRewardComboUpdateCallback:(id /* block */)arg1;
- (id /* block */)rewardComboLongPressFinishedCallback;
- (void)setRewardComboLongPressFinishedCallback:(id /* block */)arg1;
- (id)sendingMoreBubbleView;
- (void)setSendingMoreBubbleView:(id)arg1;
- (id)rewardQuotaSheetView;
- (void)setRewardQuotaSheetView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)currentGiftItem;
- (void)setCurrentGiftItem:(id)arg1;
- (id)currentRewardRecipientContact;
- (void)setCurrentRewardRecipientContact:(id)arg1;
- (id)currentRewardExtInfo;
- (void)setCurrentRewardExtInfo:(id)arg1;
- (id)currentComboId;
- (void)setCurrentComboId:(id)arg1;
- (unsigned long long)currentGiftCount;
- (void)setCurrentGiftCount:(unsigned long long)arg1;
- (BOOL)skipRewardQuotaCheck;
- (void)setSkipRewardQuotaCheck:(BOOL)arg1;
- (unsigned int)lastComboGiftCount;
- (void)setLastComboGiftCount:(unsigned int)arg1;
- (unsigned int)lastCanRequestRewardComboGiftCount;
- (void)setLastCanRequestRewardComboGiftCount:(unsigned int)arg1;
- (unsigned long long)lastComboCreatetimeInMs;
- (void)setLastComboCreatetimeInMs:(unsigned long long)arg1;
- (long long)currentBalance;
- (void)setCurrentBalance:(long long)arg1;
- (BOOL)wecoinBalanceUpdated;
- (void)setWecoinBalanceUpdated:(BOOL)arg1;
- (id)rewardComboId2RewardRequests;
- (void)setRewardComboId2RewardRequests:(id)arg1;
- (id)rewardComboId2ConsumeSuccessCount;
- (void)setRewardComboId2ConsumeSuccessCount:(id)arg1;
- (id)rewardPrepareQueue;
- (void)setRewardPrepareQueue:(id)arg1;
- (id)currentRandomRealGiftItem;
- (void)setCurrentRandomRealGiftItem:(id)arg1;
- (id)currentRewardPrepareBuf;
- (void)setCurrentRewardPrepareBuf:(id)arg1;
- (unsigned int)lastMultiAnimationComboGiftCount;
- (void)setLastMultiAnimationComboGiftCount:(unsigned int)arg1;
- (unsigned long long)nextFlowSignHistoryRewardQuota;
- (void)setNextFlowSignHistoryRewardQuota:(unsigned long long)arg1;
- (id)comboId2RewardPrepareBufArray;
- (void)setComboId2RewardPrepareBufArray:(id)arg1;
- (unsigned long long)currentSendMoreBubbleHost;
- (void)setCurrentSendMoreBubbleHost:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

