@interface MMFinderLiveConnectMicPKForegroundGiftLogic : NSObject <MMFinderLiveMgrExt, MMLiveRewardGiftRecievingAnimationExt, MMFinderLiveGiftResourceMgrExt, MMLiveTaskMgrExt>
{
    id /* block */ _onContainerViewSetup; // +0x8
    MMFinderLiveRewardGiftItem * _giftItem; // +0x10
    MMFinderLiveTaskId * _liveTaskId; // +0x18
    MMFinderLiveConnectMicPKForegroundGiftContainerView * _giftContainerView; // +0x20
    NSMutableDictionary * _giftId2PercentCacheMap; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)clear;
- (void)dealloc;
- (void)setGiftItem:(id)arg1;
- (void)refreshForegroundView;
- (void)updateForegroundHeightPercent:(unsigned int)arg1 giftId:(id)arg2 username:(id)arg3;
- (void)findForegroundGiftItemInList:(id)arg1;
- (unsigned long long)giftItemRealResourceMemoryCacheOptions:(id)arg1;
- (void)createForegroundViewIfNeeded;
- (void)onFetchRewardGiftListWithLiveTaskId:(id)arg1 liveGiftItems:(id)arg2;
- (void)onSingleAttackGiftDidFinishRender:(id)arg1 attackUsername:(id)arg2;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)onLiveTask:(id)arg1 SEIMicMsgInfoUpdated:(id)arg2 listChanged:(BOOL)arg3;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(CGRect)arg2;
- (void)onLiveViewCdnPlayerViewFrameChanged:(id)arg1 newCdnPlayerViewFrame:(CGRect)arg2;
- (void)onLiveViewConnectMicViewFrameChanged:(id)arg1 newConnectMicViewFrame:(CGRect)arg2;
- (id /* block */)onContainerViewSetup;
- (void)setOnContainerViewSetup:(id /* block */)arg1;
- (id)giftItem;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)giftContainerView;
- (void)setGiftContainerView:(id)arg1;
- (id)giftId2PercentCacheMap;
- (void)setGiftId2PercentCacheMap:(id)arg1;
- (void).cxx_destruct;
@end

