@interface WCTimeLineAdLookbookCardView : WCContentItemBaseView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, WCTimeLineAdLookbookCollectionViewDelegate, WCTimeLineAdLookbookCardMediaViewDelegate, WCTimeLineAdLookbookCardBrandNewMediaViewDelegate, WCTimeLineAdLookbookCardBrandNewAnimationDisplayLinkDelegate>
{
    BOOL _isViewVisible; // +0x38
    BOOL _isVideoReadyToPlay; // +0x39
    WCAdLookbookCardInfo * _adLookbookCardInfo; // +0x40
    WCTimeLineAdLookbookCollectionView * _collectionView; // +0x48
    UIView * _effectPagViewContainer; // +0x50
    PAGView * _effectPagView; // +0x58
    PAGView * _slideEdgePagView; // +0x60
    double _distanceBeginDragging; // +0x68
    double _lastScrollDistance; // +0x70
    WCAdLookbookLogic * _lookbookLogic; // +0x78
    double _slideEdgePagViewMaxWidth; // +0x80
    double _slideEdgePagViewInitialWidth; // +0x88
    double _slideEdgePagViewInitialShowWidth; // +0x90
}
+ (double)heightForDataItem:(id)arg1;
+ (double)fetchCardWidthWithScene:(unsigned long long)arg1 fixMediaSize:(CGSize)arg2;
+ (double)fetchMediaHeightWithScene:(unsigned long long)arg1 fixMediaSize:(CGSize)arg2;
+ (double)fetchMediaWidthWithScene:(unsigned long long)arg1 fixMediaSize:(CGSize)arg2;
+ (double)fetchHeightForDataItem:(id)arg1 withScene:(unsigned long long)arg2 fixMediaSize:(CGSize)arg3;
+ (id)fetchLookbookViewForView:(id)arg1;
+ (id)fetchAnimationViewForView:(id)arg1 isFromTimeline:(BOOL)arg2 dataItem:(id)arg3;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemBecomeInvisible;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)setVideosWithPlayState:(BOOL)arg1;
- (void)setVisibleVideoWithPlayState:(BOOL)arg1;
- (void)updateVisibleVideoPauseIconState:(BOOL)arg1;
- (void)shutdownAllVideos;
- (void)autoplayVideoProcess;
- (id)collectionLayout;
- (id)collectionView;
- (double)fetchMediaWidth;
- (double)fetchMediaHeight;
- (BOOL)hasEffectInfo;
- (BOOL)hasSlideEdgeInfo;
- (id)effectPagViewContainer;
- (void)calculateSlideEdgeSize;
- (double)fetchSlideEdgeMaxHeight;
- (double)fetchSlideEdgeInitialHeight;
- (void)tryToAddEffectPagView;
- (void)initEffectPagView;
- (id)createEffectPagView;
- (void)tryToPlayEffectPag;
- (void)realPlayEffectPag;
- (void)stopEffectPag;
- (void)tryToAddSlideEdgePagView;
- (void)initSlideEdgePagView;
- (id)createSlideEdgePagView;
- (void)updateSlideEdgePagViewRenderMatrix:(CGSize)arg1;
- (id)createPagView:(id)arg1 pagMD5:(id)arg2;
- (id)lookbookLogic;
- (BOOL)isBeginDraggingDistanceValidToJump;
- (void)setTitleForFooterView:(id)arg1 withReleaseStyle:(BOOL)arg2;
- (double)getCurrentDistance:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateFooterView;
- (void)updateEffectPagView;
- (void)updateSlideEdgePagView;
- (void)onSlideToJumpActionFired;
- (long long)getAnimateTransitionType:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)checkCellsState;
- (void)cellsExposureProcess;
- (id)fetchDataItemInCollectionView:(id)arg1;
- (unsigned long long)fetchItemSceneInCollectionView:(id)arg1;
- (id)fetchMediaItemInCollectionView:(id)arg1 forIndex:(unsigned long long)arg2;
- (CGSize)fetchMediaItemSizeInCollectionView:(id)arg1 forIndex:(unsigned long long)arg2;
- (BOOL)onCellMediaViewShouldForbidShowingPauseIconInCollectionView:(id)arg1;
- (void)onCanvasPageViewAnimationForCollectionView:(id)arg1 setContentHidden:(BOOL)arg2;
- (BOOL)isBrandNewAnimationPlayingForCollectionView:(id)arg1;
- (void)onCellButtonClickedInCollectionView:(id)arg1 forIndex:(unsigned long long)arg2 originView:(id)arg3;
- (id)reportInfo;
- (id)fetchLookbookReportItemInCollectionView:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)tryToGetBrandNewItemReady;
- (id)brandNewMediaView;
- (id)brandNewAnimationDisplayLink;
- (void)setBrandNewMediaWithPlayState:(BOOL)arg1;
- (void)onBrandNewMediaExposureProcess;
- (void)onBrandNewMediaPlayDoneProcess;
- (void)onBrandNewMediaPlayDoneForCollectionView;
- (BOOL)isBrandNewAnimationPlaying;
- (BOOL)onMediaViewShouldForbidShowingPauseIcon;
- (id)onBrandNewMediaFetchReportItem;
- (void)onBrandNewMediaButtonClickedWithOriginView:(id)arg1;
- (void)onBrandNewMediaTriggerZoomTimestamp;
- (id)lookbookAnimationObject;
- (id)brandNewAnimationObject;
- (void)onBrandNewAnimationDisplayLinkDone;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)initNotificationObserver;
- (void)onViewWillResignActive:(id)arg1;
- (void)onViewDidBecomeActive:(id)arg1;
- (id)adLookbookCardInfo;
- (void)setAdLookbookCardInfo:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setEffectPagViewContainer:(id)arg1;
- (id)effectPagView;
- (void)setEffectPagView:(id)arg1;
- (id)slideEdgePagView;
- (void)setSlideEdgePagView:(id)arg1;
- (BOOL)isViewVisible;
- (void)setIsViewVisible:(BOOL)arg1;
- (BOOL)isVideoReadyToPlay;
- (void)setIsVideoReadyToPlay:(BOOL)arg1;
- (double)distanceBeginDragging;
- (void)setDistanceBeginDragging:(double)arg1;
- (double)lastScrollDistance;
- (void)setLastScrollDistance:(double)arg1;
- (void)setLookbookLogic:(id)arg1;
- (double)slideEdgePagViewMaxWidth;
- (void)setSlideEdgePagViewMaxWidth:(double)arg1;
- (double)slideEdgePagViewInitialWidth;
- (void)setSlideEdgePagViewInitialWidth:(double)arg1;
- (double)slideEdgePagViewInitialShowWidth;
- (void)setSlideEdgePagViewInitialShowWidth:(double)arg1;
- (void).cxx_destruct;
@end
