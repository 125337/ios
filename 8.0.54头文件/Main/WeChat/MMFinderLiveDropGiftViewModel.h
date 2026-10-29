@interface MMFinderLiveDropGiftViewModel : NSObject <MMFinderLivePayMgrExt>
{
    BOOL _viewNeedShow; // +0x8
    BOOL _isLoading; // +0x9
    PAGFile * _pagFile; // +0x10
    MMFinderLiveRewardGiftItem * _giftItem; // +0x18
    NSString * _packageId; // +0x20
    id <MMFinderLiveDropGiftViewModelDelegate> _delegate; // +0x28
    MMFinderLiveTaskId * _taskId; // +0x30
    MMTimer * _timer; // +0x38
    long long _currRemainTime; // +0x40
    double _currentTimeOnEnterBackground; // +0x48
    NSString * _currentComboId; // +0x50
}
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;
- (void)registerExt;
- (void)unregisterExt;
- (void)startTimerWithCurrentRemainTime;
- (void)refreshRemainTime;
- (void)refreshRemainTime:(long long)arg1;
- (void)showGiftViewAfter:(double)arg1;
- (void)updateAnchorGiftView:(BOOL)arg1;
- (void)onGetFinderLiveDropGift:(id)arg1 giftInfo:(id)arg2;
- (void)onGetFinderLiveDropGiftForAnchor:(id)arg1;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (id)pagFile;
- (id)liveTask;
- (void)setViewNeedShow:(BOOL)arg1;
- (void)sendGetDropGift;
- (void)handleGetDropGiftDetailForAnchor;
- (void)handleGetDropGiftDetailForAudience;
- (void)sendDeliveryGift:(id)arg1;
- (void)sendError:(id)arg1;
- (void)onDeliveryGiftWithError:(id)arg1 taskId:(id)arg2;
- (void)setPagFile:(id)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)packageId;
- (void)setPackageId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isViewNeedShow;
- (id)timer;
- (void)setTimer:(id)arg1;
- (long long)currRemainTime;
- (void)setCurrRemainTime:(long long)arg1;
- (double)currentTimeOnEnterBackground;
- (void)setCurrentTimeOnEnterBackground:(double)arg1;
- (id)currentComboId;
- (void)setCurrentComboId:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end

