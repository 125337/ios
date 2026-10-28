@interface MMFinderLiveBannerView : UIControl <MMFinderLiveBannerAngelDelegate>
{
    BOOL _isFromCompleteViewController; // +0x8
    BOOL _isInJump; // +0x9
    BOOL _isInDelete; // +0xa
    NSMutableArray * __bannerList; // +0x10
    id /* block */ _viewDidUpdateAction; // +0x18
    id /* block */ _jumpAction; // +0x20
    id /* block */ _deleteAction; // +0x28
    id /* block */ _bannerShownAction; // +0x30
    id /* block */ _bannerUpdateAction; // +0x38
    unsigned long long _timeInterval; // +0x40
    UICollectionView * _collectionView; // +0x48
    MMFinderLiveBannerAngel * _angel; // +0x50
    long long _pageIndex; // +0x58
    MMTimer * _timer; // +0x60
    NSArray * _waitingList; // +0x68
    NSArray * _applyingList; // +0x70
    NSMutableArray * _addingBannerQueue; // +0x78
}
+ (CGSize)viewSizeByBannerList:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id /* block */)viewEventAction;
- (void)stopCarousel;
- (void)pauseCarousel;
- (void)resumeCarousel;
- (void)updateWhenFontSizeChanged;
- (void)setBannerList:(id)arg1;
- (void)updateSelfFrameIfNeed:(id)arg1;
- (id)bannerList;
- (void)updateBannerList:(id)arg1;
- (void)tryUpdateBannerList;
- (void)stopTimerIfNeed;
- (void)updateBannerDataWithId:(id)arg1 subTitleList:(id)arg2 newBanner:(id)arg3;
- (void)addBanner:(id)arg1;
- (void)checkAddBanner;
- (void)showBannerDeleteActionSheet:(id)arg1 source:(long long)arg2;
- (void)deleteBannerInfo:(id)arg1 source:(long long)arg2;
- (void)onDeleteBannerInfoComplete:(id)arg1 source:(long long)arg2;
- (BOOL)deleteCurrentBannerItem:(long long)arg1;
- (void)startCurPageTimer;
- (void)startOnceTimerIfNeed;
- (BOOL)canStartTimer;
- (void)stopTimer;
- (void)pauseTimer;
- (void)resumeTimer;
- (void)onTimerEvent;
- (void)updateSubTitleIndex:(long long)arg1;
- (void)checkDeleteNotifyBanner:(long long)arg1 nextIndex:(long long)arg2;
- (void)onOnceTimerEvent;
- (void)onScrollAnimationComplete;
- (void)onBannerShowAction;
- (void)showInnerAnimationIfNeed;
- (void)stopScrollAnimationWithIndex:(long long)arg1;
- (void)disableBannerPagAnimation:(BOOL)arg1;
- (void)onFinderLiveBannerAngle:(id)arg1 scrollToIndex:(long long)arg2;
- (void)onFinderLiveBannerAngleScrollStart:(id)arg1;
- (id)_bannerList;
- (void)set_bannerList:(id)arg1;
- (id /* block */)viewDidUpdateAction;
- (void)setViewDidUpdateAction:(id /* block */)arg1;
- (id /* block */)jumpAction;
- (void)setJumpAction:(id /* block */)arg1;
- (id /* block */)deleteAction;
- (void)setDeleteAction:(id /* block */)arg1;
- (id /* block */)bannerShownAction;
- (void)setBannerShownAction:(id /* block */)arg1;
- (id /* block */)bannerUpdateAction;
- (void)setBannerUpdateAction:(id /* block */)arg1;
- (unsigned long long)timeInterval;
- (void)setTimeInterval:(unsigned long long)arg1;
- (BOOL)isFromCompleteViewController;
- (void)setIsFromCompleteViewController:(BOOL)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)angel;
- (void)setAngel:(id)arg1;
- (long long)pageIndex;
- (void)setPageIndex:(long long)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)waitingList;
- (void)setWaitingList:(id)arg1;
- (id)applyingList;
- (void)setApplyingList:(id)arg1;
- (id)addingBannerQueue;
- (void)setAddingBannerQueue:(id)arg1;
- (BOOL)isInJump;
- (void)setIsInJump:(BOOL)arg1;
- (BOOL)isInDelete;
- (void)setIsInDelete:(BOOL)arg1;
- (void).cxx_destruct;
@end
