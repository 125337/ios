@interface MMFinderLiveRewardRecievingLogic : NSObject <WCFinderLiveExt, MMFinderLiveGiftResourceMgrExt, MMLiveRewardGiftRecievingAnimationViewDelegate, MMFinderLiveRewardSendingLogicForReceivingDelegate>
{
    MMLiveRewardGiftRecievingAnimationView * _recievingAnimationView; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    OrderedDictionary * _displayingComboObjects; // +0x18
    OrderedDictionary * _closeWaitComboObjects; // +0x20
    NSMutableArray * _waitingRewardAppMsgInfo; // +0x28
    NSMutableDictionary * _comboIdToComboObjectDict; // +0x30
    MMFinderLiveRewardComboPriorityQueue * _rewardRecievingComboObjectQueue; // +0x38
    MMFinderLiveRewardComboPriorityQueue * _rewardRecievingComboObjectSerialDisplayQueue; // +0x40
    MMFinderLiveRewardComboPriorityQueue * _interactionRecievingComboObjectSerialDisplayQueue; // +0x48
    NSMutableDictionary * _multiRecipientComboPriorityQueueDict; // +0x50
    NSMutableDictionary * _multiRecipientPKAttackGiftComboPriorityQueueDict; // +0x58
    NSMutableDictionary * _comboIdToRewardGiftRandonItemArray; // +0x60
    NSMutableArray * _giftAnimationPlayCommandsQueue; // +0x68
    MMLiveResourceFetcherLegacyApiAdapter * _adHocResourceDownloadMgr; // +0x70
    MMTimer * _scheduleTimer; // +0x78
}
- (id)initWithLiveTaskId:(id)arg1 recievingAnimationView:(id)arg2;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)stopScheduleTimer;
- (void)autoScheduleTriggerGiftForTest;
- (void)startScheduleTimer:(unsigned long long)arg1;
- (void)scheduleGiftBatch;
- (void)setupComboObjectPriorityQueue;
- (void)setupComparatorForComboPriorityQueue:(id)arg1;
- (id)getComboPriorityQueueForUserName:(id)arg1;
- (void)removeComboPriorityQueueForUserName:(id)arg1;
- (id)getPKAttackGiftComboPriorityQueueForUserName:(id)arg1;
- (void)removePKAttackGiftComboPriorityQueueForUserName:(id)arg1;
- (void)enqueueNewRewardAppMsgInfo:(id)arg1;
- (void)enqueueGiftAnimationPlayCommand:(id)arg1;
- (void)loadAdHocResourcesForGiftAnimationPlayCommand:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadAdHocResourceWithUri:(id)arg1 md5Hash:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)liveTask;
- (id)getDisplayingComboObjectWithComboId:(id)arg1;
- (id)getComboRewardAppMsgInfo:(id)arg1;
- (void)downloadAnimationPagFileIfNeed:(id)arg1 notifyProcessNext:(BOOL)arg2;
- (void)downloadLandscapeAnimationPagFileIfNeed:(id)arg1;
- (void)downloadInteractionGiftAnimationFileIfNeed:(id)arg1;
- (BOOL)isAnchorInteractiveGift:(id)arg1;
- (void)addComboIdToRewardGiftRandonItemArray:(id)arg1 giftRandomItemArr:(id)arg2;
- (BOOL)onRecieveLocalSendSuccessRewardAppMsgInfo:(id)arg1;
- (void)onAsyncExtraValueItemUpdated:(id)arg1 forRewardAppMsgInfo:(id)arg2;
- (void)tryEnqueueNewRewardAfterCheckFullPagLoaded:(id)arg1 notifyProcessNextGiftCombo:(BOOL)arg2;
- (void)tryEnqueueNewRewardAfterCheckOtherLoadedIfNeeded:(id)arg1 notifyProcessNextGiftCombo:(BOOL)arg2;
- (void)tryEnqueueNewCustomizeRewardAfterCheckMagicEngineResourceLoaded:(id)arg1 notifyProcessNextGiftCombo:(BOOL)arg2;
- (void)tryEnqueueAnchorCustomizeRewardAfterCustomStyleResourceLoaded:(id)arg1 notifyProcessNextGiftCombo:(BOOL)arg2;
- (id)giftItemRealResourceId:(id)arg1;
- (id)giftItemRealResourceMd5:(id)arg1 isLandscape:(BOOL)arg2;
- (id)giftItemRealResourceUrl:(id)arg1 isLandscape:(BOOL)arg2;
- (unsigned long long)giftItemRealResourceMemoryCacheOptions:(id)arg1;
- (id)onRetriveRewardAppMsgInfoForDisplay;
- (id)onRetriveRewardAppMsgInfoForDisplayWithRewardRecipient:(id)arg1;
- (id)onPeekNextRewardAppMsgInfoForDisplayWithRewardRecipient:(id)arg1;
- (id)onRetriveRewardAppMsgInfoForSerialDisplay;
- (id)onPeekNextRewardAppMsgInfoForSerialDisplay;
- (id)onDequeueGiftAnimationPlayCommand;
- (id)onPeekGiftAnimationPlayCommand;
- (id)onRetriveInteractionRewardAppMsgInfoForSerialDisplay;
- (id)onPeekNextInteractionRewardAppMsgInfoForSerialDisplay;
- (id)onRetrivePKAttackRewardAppMsgInfoForDisplayWithRewardRecipient:(id)arg1;
- (id)onPeekNextPKAttackRewardAppMsgInfoForDisplayWithRewardRecipient:(id)arg1;
- (unsigned int)onGetLastDisplayGiftCountWithComboId:(id)arg1;
- (void)onUpdateLastDisplayGiftCountWithComboId:(id)arg1 lastDisplayGiftCount:(unsigned int)arg2;
- (void)onDismissRewardDisplayWithComboId:(id)arg1;
- (id)onGetNextAnimationWithComboId:(id)arg1 animationIndex:(unsigned long long)arg2;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)onGetFinderLiveRewardAppMsgWithTaskId:(id)arg1 rewardAppMsgInfo:(id)arg2;
- (void)onGetFinderLiveGiftAnimationPlayCommandWithTaskId:(id)arg1 playCommand:(id)arg2;
- (void)onFinderLive:(id)arg1 liveInteractionGiftPlayEnd:(id)arg2 renderType:(long long)arg3;
- (void)onFinderLive:(id)arg1 liveInteractionGiftPlayStart:(id)arg2 renderType:(long long)arg3;
- (void)onFinderLive:(id)arg1 pauseLiveWithRoleType:(long long)arg2;
- (id)recievingAnimationView;
- (void)setRecievingAnimationView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)displayingComboObjects;
- (void)setDisplayingComboObjects:(id)arg1;
- (id)closeWaitComboObjects;
- (void)setCloseWaitComboObjects:(id)arg1;
- (id)waitingRewardAppMsgInfo;
- (void)setWaitingRewardAppMsgInfo:(id)arg1;
- (id)comboIdToComboObjectDict;
- (void)setComboIdToComboObjectDict:(id)arg1;
- (id)rewardRecievingComboObjectQueue;
- (void)setRewardRecievingComboObjectQueue:(id)arg1;
- (id)rewardRecievingComboObjectSerialDisplayQueue;
- (void)setRewardRecievingComboObjectSerialDisplayQueue:(id)arg1;
- (id)interactionRecievingComboObjectSerialDisplayQueue;
- (void)setInteractionRecievingComboObjectSerialDisplayQueue:(id)arg1;
- (id)multiRecipientComboPriorityQueueDict;
- (void)setMultiRecipientComboPriorityQueueDict:(id)arg1;
- (id)multiRecipientPKAttackGiftComboPriorityQueueDict;
- (void)setMultiRecipientPKAttackGiftComboPriorityQueueDict:(id)arg1;
- (id)comboIdToRewardGiftRandonItemArray;
- (void)setComboIdToRewardGiftRandonItemArray:(id)arg1;
- (id)giftAnimationPlayCommandsQueue;
- (void)setGiftAnimationPlayCommandsQueue:(id)arg1;
- (id)adHocResourceDownloadMgr;
- (void)setAdHocResourceDownloadMgr:(id)arg1;
- (id)scheduleTimer;
- (void)setScheduleTimer:(id)arg1;
- (void).cxx_destruct;
@end
