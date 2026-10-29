@interface WCFinderHighEntropyMediaView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderFeedContentVMExt, WCFinderFocusCellProtocol>
{
    BOOL _isVideoMode; // +0x8
    BOOL _isMuted; // +0x9
    BOOL _isPlaying; // +0xa
    BOOL _isRestoringImageCollectionOffset; // +0xb
    BOOL _isProgrammaticImageScrolling; // +0xc
    BOOL _isPicStatsRecording; // +0xd
    BOOL _isManualPicStatsSliding; // +0xe
    BOOL _manualPicStatsDidScroll; // +0xf
    BOOL _hasPendingFeedCardLateralSlideReport; // +0x10
    id <WCFinderHighEntropyMediaViewDelegate> _delegate; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    UIButton * _muteButton; // +0x28
    unsigned long long _clickedImageIndex; // +0x30
    WCFinderSimplePlayerView * _videoPlayerView; // +0x38
    UICollectionView * _imageCollectionView; // +0x40
    PicStats * _picStats; // +0x48
    double _lastPicStatsContentOffsetX; // +0x50
    NSMutableDictionary * _activePicExposureContexts; // +0x58
    NSString * _pendingFeedCardLateralSlideStartPicIndexList; // +0x60
    NSString * _pendingFeedCardLateralSlideEndPicIndexList; // +0x68
}
+ (double)viewHeightWithContentVM:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)configureWithContentVM:(id)arg1;
- (BOOL)canRecordPicStats;
- (void)resetPicStats;
- (BOOL)canReportFeedCardLateralSlide;
- (id)currentFeedCardLateralSlideIndexList;
- (void)resetPendingFeedCardLateralSlideReport;
- (void)beginPendingFeedCardLateralSlideReportIfNeeded;
- (void)updatePendingFeedCardLateralSlideEndIndexListIfNeeded;
- (void)flushPendingFeedCardLateralSlideReportIfNeeded;
- (void)ensurePicStats;
- (id)visibleImageLayoutAttributesForContentOffsetX:(double)arg1;
- (unsigned int)exposeRatioForImageAttributes:(id)arg1 contentOffsetX:(double)arg2;
- (unsigned int)maxExposeRatioForImageAttributes:(id)arg1 fromContentOffsetX:(double)arg2 toContentOffsetX:(double)arg3;
- (void)updateActivePicStatsForScrolledContentOffsetX:(double)arg1;
- (unsigned long long)entrySideFromContentOffsetX:(double)arg1 toContentOffsetX:(double)arg2;
- (unsigned long long)exitSideForImageAttributes:(id)arg1 contentOffsetX:(double)arg2;
- (void)finishPicExposureContextForIndex:(id)arg1 timestamp:(unsigned long long)arg2 exitSide:(unsigned long long)arg3;
- (void)syncVisiblePicExposureContextsAtTimestamp:(unsigned long long)arg1 manual:(BOOL)arg2 inferBoundaryTransition:(BOOL)arg3;
- (void)updatePicStatsForScrolledContentOffsetX:(double)arg1 timestamp:(unsigned long long)arg2 manual:(BOOL)arg3;
- (void)updateCurrentVisiblePicStatsExposeRatios;
- (void)beginManualPicStatsSlideIfNeeded;
- (void)finalizeManualPicStatsSlideIfNeeded;
- (BOOL)startPicStatsIfNeeded;
- (id)genPicStats;
- (void)prepareVideoPlayer;
- (void)coverVideoPlayerUntilFirstFrame;
- (void)playVideoIfSupportWithSilence:(BOOL)arg1;
- (void)pauseVideo;
- (void)stopVideo;
- (void)muteVideo:(BOOL)arg1;
- (void)updateVideoPlayerShowArea;
- (void)updateCurrentVideoPlayPosition;
- (BOOL)shouldCaluculateAsFocusCell;
- (CGRect)convertFocusRectToView:(id)arg1;
- (BOOL)currentMediaIsPlay;
- (void)pauseMediaPlayShowPauseBtn:(BOOL)arg1;
- (void)updateMuteButtonImage;
- (void)showMuteButton:(BOOL)arg1;
- (id)transitionSourceViewWithTargetView:(id)arg1;
- (double)getCurrentPlayVideoTime;
- (double)getPlayVideoTotalTime;
- (double)getActualPlayingTimeInMs;
- (double)getMaxPlayVideoTime;
- (void)onMuteToggle;
- (void)onLivePhotoButtonClick:(id)arg1;
- (void)pauseLivePhotoInCell:(id)arg1;
- (void)pauseVisibleLivePhotos;
- (void)onMediaTap;
- (void)resetVideoPlayerForReuse;
- (void)prepareForReuse;
- (void)onFeedContentBeDisliked:(id)arg1;
- (void)dealloc;
- (id)transitionSourceViewForImageIndex:(unsigned long long)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (unsigned long long)validImageIndex:(unsigned long long)arg1;
- (id)currentVisibleImageIndexList;
- (unsigned long long)currentLeftmostVisibleImageIndex;
- (unsigned long long)leftmostVisibleImageIndexForContentOffsetX:(double)arg1;
- (id)visibleImageIndexListForContentOffsetX:(double)arg1;
- (double)clampedImageContentOffsetX:(double)arg1;
- (id)layoutAttributesForImageIndex:(unsigned long long)arg1;
- (double)leftAlignedContentOffsetXForImageIndex:(unsigned long long)arg1;
- (BOOL)isImageFullyVisibleForImageIndex:(unsigned long long)arg1;
- (void)restoreImageCollectionOffsetIfNeeded;
- (void)scrollCurrentImageToLeftAnimated:(BOOL)arg1;
- (void)updatePhotoPageWithNextIndex:(unsigned long long)arg1 isManual:(BOOL)arg2;
- (unsigned long long)currentImageIndexWithCollectionView:(id)arg1;
- (void)updateImageScrollProgressWithCollectionView:(id)arg1 manual:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)muteButton;
- (void)setMuteButton:(id)arg1;
- (unsigned long long)clickedImageIndex;
- (void)setClickedImageIndex:(unsigned long long)arg1;
- (id)videoPlayerView;
- (void)setVideoPlayerView:(id)arg1;
- (id)imageCollectionView;
- (void)setImageCollectionView:(id)arg1;
- (BOOL)isVideoMode;
- (void)setIsVideoMode:(BOOL)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)isRestoringImageCollectionOffset;
- (void)setIsRestoringImageCollectionOffset:(BOOL)arg1;
- (BOOL)isProgrammaticImageScrolling;
- (void)setIsProgrammaticImageScrolling:(BOOL)arg1;
- (id)picStats;
- (void)setPicStats:(id)arg1;
- (BOOL)isPicStatsRecording;
- (void)setIsPicStatsRecording:(BOOL)arg1;
- (double)lastPicStatsContentOffsetX;
- (void)setLastPicStatsContentOffsetX:(double)arg1;
- (id)activePicExposureContexts;
- (void)setActivePicExposureContexts:(id)arg1;
- (BOOL)isManualPicStatsSliding;
- (void)setIsManualPicStatsSliding:(BOOL)arg1;
- (BOOL)manualPicStatsDidScroll;
- (void)setManualPicStatsDidScroll:(BOOL)arg1;
- (BOOL)hasPendingFeedCardLateralSlideReport;
- (void)setHasPendingFeedCardLateralSlideReport:(BOOL)arg1;
- (id)pendingFeedCardLateralSlideStartPicIndexList;
- (void)setPendingFeedCardLateralSlideStartPicIndexList:(id)arg1;
- (id)pendingFeedCardLateralSlideEndPicIndexList;
- (void)setPendingFeedCardLateralSlideEndPicIndexList:(id)arg1;
- (void).cxx_destruct;
@end
