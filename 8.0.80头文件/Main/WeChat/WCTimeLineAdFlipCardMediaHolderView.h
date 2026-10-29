@interface WCTimeLineAdFlipCardMediaHolderView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, WCAdvertiseAnimationDisplayLinkDelegate, WCTimeLineAdFlipCardMediaCollectionViewDelegate, WCTimeLineAdFlipCardMediaBaseViewDelegate>
{
    BOOL _bTimelineScene; // +0x8
    BOOL _isVideoReadyToPlay; // +0x9
    WCAdFlipCardInfo * _adFlipCardInfo; // +0x10
    WCDataItem * _dataItem; // +0x18
    double _currentRotationAngle; // +0x20
    WCTimeLineAdFlipCardMediaCollectionView * _rotationCollectionView; // +0x28
    id <WCTimeLineAdFlipCardMediaHolderViewDelegate> _delegate; // +0x30
    WCAdvertiseAnimationDisplayLink * _mediaHolderDisplayLink; // +0x38
    unsigned long long _mediaHolderAnimationStatus; // +0x40
    unsigned long long _mediaHolderBackMediaStatus; // +0x48
    NSSet * _lastTouchesLocations; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 adFlipCardInfo:(id)arg2 dataItem:(id)arg3 bTimelineScene:(BOOL)arg4;
- (void)dealloc;
- (void)generateSubviews;
- (id)generateMediaViewWithMediaData:(id)arg1 index:(unsigned long long)arg2;
- (void)setupAllMediaViewsLayout;
- (void)resetAllMediaViewsLayout;
- (void)updateAllMediaViewsWithAngle:(double)arg1;
- (void)updateAllMediaViewsLayout;
- (void)safeUpdateTransformForTag:(long long)arg1 transform:(CATransform3D)arg2;
- (id)safeFetchMediaBaseViewForTag:(long long)arg1;
- (id)safeFetchMediaBaseContainerViewForTag:(long long)arg1;
- (id)safeFetchMediaBaseTitleViewForTag:(long long)arg1;
- (id)frontVideoView;
- (id)backVideoView;
- (id)collectionLayout;
- (id)rotationCollectionView;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (double)getOriginContentOffsetX:(id)arg1;
- (double)getCurrentDistance:(id)arg1;
- (void)onScrollViewDidEndDecelerating:(id)arg1;
- (void)prepareCollectionViewForInfinityLoop;
- (long long)fetchSafeIndex:(long long)arg1;
- (double)fetchOffsetXWith:(id)arg1 forDegree:(double)arg2;
- (long long)fetchSideIndexWithScrollView:(id)arg1;
- (long long)fetchPendingIndexWithScrollView:(id)arg1;
- (long long)fetchPendingIndexWithScrollView:(id)arg1 contentOffset:(CGPoint)arg2;
- (void)resetCollectionView;
- (void)onMediaHolderFlippedWithScrollView:(id)arg1 contentOffset:(CGPoint)arg2;
- (BOOL)isIntroduceAnimationCancelled;
- (void)scheduleResetCollectionViewFromInteraction;
- (void)resetCollectionViewFromInteraction;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)decideClickTypeWithSideIndex:(long long)arg1;
- (BOOL)isClickAvailableFor:(id)arg1 points:(id)arg2 bExpended:(BOOL)arg3;
- (void)onMediaWillDisplay;
- (void)onMediaDidEndDisplaying;
- (void)onMediaBecomeInvisible;
- (void)onMediaAutoPlay;
- (void)onMediaAutoPause;
- (void)setVideosWithPlayState:(BOOL)arg1;
- (void)autoplayVideoProcess;
- (void)shutdownAllVideos;
- (void)checkCellsState;
- (void)cellsExposureProcess;
- (id)mediaHolderDisplayLink;
- (id)mediaHolderIntroduceOneAnimationObject;
- (id)mediaHolderIntroduceTwoAnimationObject;
- (id)mediaHolderIntroduceTwoAnimationObjectUpdatePage;
- (void)showIntroduceAnimation;
- (void)showIntroduceTwoAnimation;
- (void)cancelIntroduceAnimation;
- (void)scheduleResumeIntroduceAnimation;
- (void)checkIfMediaViewTurnedToBackSide;
- (id)mediaHolderBackTVCAnimationObjectTopPosition;
- (id)mediaHolderBackTVCAnimationObjectMidPosition;
- (id)mediaHolderBackTVCAnimationObjectBottomPosition;
- (id)generateMediaHolderAnimationObjectMediaPinToTop;
- (id)mediaHolderBackTVCAnimationObjectMidScale;
- (id)mediaHolderBackTVCAnimationObjectTopMaskWidth;
- (id)mediaHolderBackTVCAnimationObjectTopMaskHeight;
- (id)mediaHolderBackTVCAnimationObjectTitlePosition;
- (id)mediaHolderBackTVCAnimationObjectTitleOpacity;
- (id)mediaHolderBackTVCAnimationObjectSubTitleHide;
- (id)mediaHolderBackTVCAnimationObjectLearnMoreShow;
- (void)showBackTVCAnimation;
- (void)resetBackTVCAnimation;
- (void)onAnimationDisplayLinkAnimationDone:(id)arg1;
- (void)onMediaCollectionViewTouchesBegan;
- (void)onMediaCollectionViewTouchesEnded;
- (void)onMediaCollectionViewTouchesLocationsUpdated:(id)arg1;
- (void)onMediaCollectionViewDidMoveToSuperview;
- (void)onMediaCollectionViewDidMoveToWindow;
- (void)handlePanGesture:(id)arg1;
- (id)onMediaBaseViewFetchReportItemFor:(unsigned long long)arg1;
- (id)reportInfo;
- (id)reportItemForIndex:(unsigned long long)arg1;
- (void)reportIncreaseTouchCount;
- (void)reportIntroduceAnimationDone;
- (id)adFlipCardInfo;
- (void)setAdFlipCardInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)bTimelineScene;
- (void)setBTimelineScene:(BOOL)arg1;
- (double)currentRotationAngle;
- (void)setCurrentRotationAngle:(double)arg1;
- (void)setRotationCollectionView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setMediaHolderDisplayLink:(id)arg1;
- (unsigned long long)mediaHolderAnimationStatus;
- (void)setMediaHolderAnimationStatus:(unsigned long long)arg1;
- (unsigned long long)mediaHolderBackMediaStatus;
- (void)setMediaHolderBackMediaStatus:(unsigned long long)arg1;
- (BOOL)isVideoReadyToPlay;
- (void)setIsVideoReadyToPlay:(BOOL)arg1;
- (id)lastTouchesLocations;
- (void)setLastTouchesLocations:(id)arg1;
- (void).cxx_destruct;
@end
