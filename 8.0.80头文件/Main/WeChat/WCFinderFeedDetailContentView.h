@interface WCFinderFeedDetailContentView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderFeedContentMediaActionProtocol, WCFinderFeedDetailVideoPlayerViewDelegate, UIGestureRecognizerDelegate, WCFinderHalfScreenProtocol, MMFinderLiveAirPlayExtension>
{
    BOOL _videoPlayerFullScreen; // +0x8
    id <WCFinderFeedDetailContentViewDelegate> _delegate; // +0x10
    UICollectionView * _collectionView; // +0x18
    RichTextView * _innerReccommendReasonLabel; // +0x20
    UICollectionViewFlowLayout * _flowLayout; // +0x28
    WCFinderPageControl * _pageCtrl; // +0x30
    WCFinderFeedContentVM * _contentVM; // +0x38
    unsigned long long _currentPage; // +0x40
    UITapGestureRecognizer * _doubleTapGesture; // +0x48
    WCFinderFeedDetailVideoPlayerView * _playerView; // +0x50
    unsigned long long _mediaPlayState; // +0x58
    CGSize _layoutSize; // +0x60
}
+ (id)pageControlConfig;
+ (double)contentViewExtraHeightWithContentVM:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubView;
- (id)photoBGColor;
- (void)layoutSubviews;
- (void)layoutViews;
- (void)updateWithContentVM:(id)arg1;
- (void)updateFullScreenState:(BOOL)arg1;
- (void)hideImageContent:(BOOL)arg1;
- (void)hideVideoContent:(BOOL)arg1;
- (id)getCurrentFeedImageViewForImageBrowserTransition;
- (id)currentViewController;
- (BOOL)isAuthor;
- (id)dataItem;
- (BOOL)isVideoMedia;
- (BOOL)currentSceneIsLandscape;
- (BOOL)currentRotating;
- (id)getPlayMediaInfoWithDataItem:(id)arg1 currentIndex:(unsigned long long)arg2;
- (void)setCurrentPage:(unsigned long long)arg1;
- (void)layoutInnerReason;
- (BOOL)showInnerReasonStateWithContentVM:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)startLikeAnimationWithTouchPoint:(CGPoint)arg1;
- (void)onPageCtrlValueChange;
- (long long)currentImagePageIndex;
- (void)scrollToPage:(unsigned long long)arg1;
- (void)autoStartMediaPlay;
- (void)autoInterruptMediaPlay;
- (void)stopMediaPlay;
- (void)autoStartVideoPlay;
- (void)autoInterruptVideoPlay;
- (void)stopVideoPlay;
- (BOOL)videoIsPlaying;
- (void)setVideoPauseByManual:(BOOL)arg1;
- (void)setVideoProgressPanelHidden:(BOOL)arg1 autoHide:(BOOL)arg2;
- (void)showProgressPanelIfNeeded;
- (void)syncVidepPlayInfoIfNeeded;
- (double)totalVideoPlayTimeInMs;
- (double)getCurrentPlayVideoPercent;
- (void)playerReportIfNeeded;
- (BOOL)pointAtPanableArea:(CGPoint)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onImageViewTapAction;
- (void)onFinderDetailVideoPlayer:(id)arg1 updateVideoPosition:(double)arg2 videoDuration:(double)arg3 maxPlayVideoTime:(double)arg4;
- (double)getPlayVideoTotalTime;
- (void)onFinderDetailVideoPlayerClickPauseBtn:(BOOL)arg1;
- (void)onFinderDetailVideoPlayerClickFullScreenBtn;
- (void)onFinderDetailVideoPlayerExitFullScreen;
- (void)onFinderDetailVideoPlayerExitIPhoneLandscape;
- (void)onFinderDetailVideoPlayerClickPlayRateButton;
- (void)showPlayRatePanel;
- (int)finderDetailVideoPlayerGetCommentScene;
- (void)listenHalfScreenFrameChanged:(CGRect)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)onAirPlayAction:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)innerReccommendReasonLabel;
- (void)setInnerReccommendReasonLabel:(id)arg1;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (id)pageCtrl;
- (void)setPageCtrl:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (unsigned long long)currentPage;
- (id)doubleTapGesture;
- (void)setDoubleTapGesture:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (unsigned long long)mediaPlayState;
- (void)setMediaPlayState:(unsigned long long)arg1;
- (BOOL)videoPlayerFullScreen;
- (void)setVideoPlayerFullScreen:(BOOL)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
