@interface WCFinderFullNewMultiMediaView : UIView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderBGMPlayerDelegate, WCAudioSessionExt, WCFinderImageLabelViewDelegate, WCFinderHalfScreenListenProtocol, WCFinderPinchLogicScrollViewDelegate, WCFinderFeedPhotoCollectionViewCellDelegate>
{
    BOOL _selectEnable; // +0x8
    BOOL _hiddenDefaultBackground; // +0x9
    BOOL _lastPhotoScrollByTimer; // +0xa
    BOOL _isSubScene; // +0xb
    id <WCFinderFeedContentMediaActionProtocol> _delegate; // +0x10
    id <WCFinderFullNewMultiMediaViewDelegate> _postDelegate; // +0x18
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate; // +0x20
    WCFinderFullMultiMediaCollectionView * _mediaCollectionView; // +0x28
    WCFinderPageControl * _pageCtrl; // +0x30
    WCFinderFeedBottomRedPacketView * _bottomRedPacketView; // +0x38
    WCFinderFeedContentVM * _contentVM; // +0x40
    UIColor * _videoBackgroundColor; // +0x48
    unsigned long long _currentPage; // +0x50
    CAGradientLayer * _bottomGradientLayer; // +0x58
    NSHashTable * _hiddenOnHalfHashTable; // +0x60
    WCFinderProgressBarStatusInfo * _progressBarStatusForReuse; // +0x68
    MMTimer * _collectionShufflingTimer; // +0x70
    WCFinderBGMPlayer * _bgmPlayer; // +0x78
    MMTimer * _browseDurationTimer; // +0x80
    MMTimer * _autoPauseDurationTimer; // +0x88
    unsigned long long _lastPhotoIndex; // +0x90
    unsigned long long _lastPhotoShowTimestamp; // +0x98
    PicStats * _picStats; // +0xa0
    WCFinderPhotoFeedReporter * _photoFeedReporter; // +0xa8
    WCFinderPinchLogicScrollView * _contentPinchScrollView; // +0xb0
    CGSize _mediaSize; // +0xb8
    CGSize _playerSize; // +0xc8
    CGSize _mediaScalingSize; // +0xd8
}
+ (id)mediaWithContentVM:(id)arg1 width:(double)arg2 height:(double)arg3 currentSelectIndex:(unsigned long long)arg4 isSubScene:(BOOL)arg5 delegate:(id)arg6 halfScreenDelegate:(id)arg7;
+ (BOOL)isHiddenOriginalContactWithContentVM:(id)arg1;
+ (CGRect)mediaFrameInWindowForContentVM:(id)arg1;
+ (double)bottomProgressBlankHeight;
- (id)hiddenOnHalfHashTable;
- (CGRect)mediaFrameForContentVM:(id)arg1 width:(double)arg2 height:(double)arg3 isSubScene:(BOOL)arg4;
- (BOOL)isAccessibilityElement;
- (id)initWithFrame:(CGRect)arg1 contentVM:(id)arg2 currentSelectIndex:(unsigned long long)arg3 isSubScene:(BOOL)arg4 delegate:(id)arg5 halfScreenDelegate:(id)arg6;
- (void)changeDataWithContentVM:(id)arg1 currentSelectIndex:(unsigned long long)arg2 isSubScene:(BOOL)arg3;
- (BOOL)_checkCanPinch;
- (void)setCanPinchIfNeeded:(BOOL)arg1;
- (BOOL)_canShowRedPackageJumpInfoBanner;
- (void)updateBottomRedPacket;
- (id)dataItem;
- (void)restartCollectionViewShufflingTimer;
- (void)restartCollectionViewShufflingTimerWithTimeInterval:(long long)arg1;
- (void)onCollectionViewBrowseLongTimeTypeFollow;
- (void)onCollectionViewBrowseLongTimeTypePause;
- (void)resetCollectionShufflingTimer;
- (void)resetCollectionBrowseTimer;
- (void)resetCollectionAutoPauseDurationTimer;
- (BOOL)shouldTriggerShufflingLogic;
- (void)onCollectionViewTriggerShufflingLogic;
- (void)initSubView;
- (void)playerRenderSucAsSize:(CGSize)arg1;
- (BOOL)isInGesturePinchState;
- (void)layoutMediaCollectionView;
- (void)layoutSubviews;
- (CGSize)contentSizeForMediaInfo:(id)arg1 useMediaScalingInfo:(BOOL)arg2 isSubScene:(BOOL)arg3;
- (void)resetReuseState;
- (void)resetBGMPlay;
- (id)bgmPlayer;
- (id /* block */)bgmPlayerCreator;
- (void)onPageCtrlValueChange;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)willBeginDisplay:(long long)arg1;
- (void)didBeginDisplay;
- (void)didEndDisplay:(long long)arg1;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2 pauseVideo:(BOOL)arg3;
- (void)pauseVideoIfSupport:(BOOL)arg1;
- (void)fakeStopPlayAction;
- (void)stopVideoIfSupport;
- (void)tryDowngradePlayVideoIfSupport;
- (void)progressBarValueChange:(double)arg1 playVideo:(BOOL)arg2 pauseVideo:(BOOL)arg3 state:(WCFinderPlayerControlProgressState)arg4;
- (void)changeVideoSilenceStatue:(BOOL)arg1;
- (double)getCurrentPlayVideoTime;
- (unsigned long long)getPreloadTaskStatus;
- (double)getPlayVideoTotalTime;
- (double)getActualPlayingTimeInMs;
- (id)playSecondSet;
- (id)progressBarStatus;
- (void)setProgressBarStatus:(id)arg1;
- (void)resetCurrentVideoThumb;
- (id)getCurrendThumb;
- (id)snapshotViewForMeida;
- (void)updateVideoSnapshot;
- (id)snapshotImageForMedia;
- (id)getCurCollectionViewCellRetryStateImageView;
- (id)getPhotoThumbImage;
- (void)updateCurrentVideoThumb;
- (void)setPlayRate:(double)arg1;
- (id)playerView;
- (id)liveCell;
- (id)liveRoomCell;
- (void)triggerShuffling;
- (BOOL)isMediaContentReady;
- (void)resetContentPinchScrollView;
- (void)willResetToPortrait;
- (void)didResetToPortrait;
- (void)didRotateToLandscape;
- (void)onLongPressMedia;
- (void)longPressGestureStateDidChange:(long long)arg1;
- (void)progressBarDragStateDidChange:(unsigned long long)arg1;
- (void)progressBarDidHide;
- (void)_performActionInVideoCollectionViewCell:(id /* block */)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)addPhotoSession_2:(long long)arg1;
- (id)genPicStats;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)updateCollectionViewCurrentCellPlayStateIfVideo;
- (void)muteBGMPlay:(BOOL)arg1;
- (BOOL)startBGMPlay;
- (BOOL)stopBGMPlay;
- (void)pauseBGMPlay;
- (void)_startCurrentLivePhotoPlayIfNeeded;
- (void)_pauseCurrentLivePhotoPlayIfNeeded;
- (void)startScroll;
- (void)startBrowseTimerCheck;
- (void)startAutoPauseTimerCheck;
- (void)stopScroll;
- (BOOL)collectionViewIsOnScrollState;
- (BOOL)mediaIsOnPlay;
- (BOOL)currentMediaIsPlay;
- (BOOL)isCurrentMediaSupportPlay;
- (id)currentMediaUnSupportPlayToast;
- (BOOL)currentMediaIsMute;
- (id)playerMeidaWrapIdentifier;
- (id)fetchCurrentMediaTransferableTarget;
- (id)minimizeContentView:(BOOL)arg1;
- (id)extractPlayerViewForLandscapeAnimation;
- (void)restorePlayerViewForLandscapeAnimation:(id)arg1;
- (id /* block */)bgmPlayerGenerator;
- (void)restoreMinimizeContentView:(id)arg1 forPlay:(BOOL)arg2;
- (id)currentContentMediaCell;
- (void)unifiedURLIfNeeded:(id)arg1;
- (id)finderPinchScrollViewGetContentView;
- (void)pinchScrollViewDidZoom:(id)arg1;
- (id)pinchScrollViewGetContentVM;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (id)currentPageMediaInfoHashKey;
- (void)onPhotoCell:(id)arg1 playToEndWithMediaInfo:(id)arg2;
- (void)onBGMPlayerPlayToEnd:(id)arg1;
- (void)onBGMPlayerDidPlay:(id)arg1;
- (void)onBGMPlayerDidPause:(id)arg1;
- (void)onBGMPlayerProgressChanged:(id)arg1;
- (void)halfScreenMoveProgressChanged;
- (void)_notifyHalfScreenProgressChangedIndexPath:(id)arg1;
- (void)halfScreenShowStateChanged;
- (double)getCurMediaVisualWidHeightRatio;
- (id)photoFeedReporter;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)postDelegate;
- (void)setPostDelegate:(id)arg1;
- (id)halfScreenDelegate;
- (void)setHalfScreenDelegate:(id)arg1;
- (BOOL)selectEnable;
- (void)setSelectEnable:(BOOL)arg1;
- (id)mediaCollectionView;
- (void)setMediaCollectionView:(id)arg1;
- (id)pageCtrl;
- (void)setPageCtrl:(id)arg1;
- (CGSize)mediaSize;
- (void)setMediaSize:(CGSize)arg1;
- (id)bottomRedPacketView;
- (void)setBottomRedPacketView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (BOOL)hiddenDefaultBackground;
- (void)setHiddenDefaultBackground:(BOOL)arg1;
- (id)videoBackgroundColor;
- (void)setVideoBackgroundColor:(id)arg1;
- (unsigned long long)currentPage;
- (void)setCurrentPage:(unsigned long long)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (void)setHiddenOnHalfHashTable:(id)arg1;
- (CGSize)playerSize;
- (void)setPlayerSize:(CGSize)arg1;
- (CGSize)mediaScalingSize;
- (void)setMediaScalingSize:(CGSize)arg1;
- (id)progressBarStatusForReuse;
- (void)setProgressBarStatusForReuse:(id)arg1;
- (id)collectionShufflingTimer;
- (void)setCollectionShufflingTimer:(id)arg1;
- (void)setBgmPlayer:(id)arg1;
- (id)browseDurationTimer;
- (void)setBrowseDurationTimer:(id)arg1;
- (id)autoPauseDurationTimer;
- (void)setAutoPauseDurationTimer:(id)arg1;
- (BOOL)lastPhotoScrollByTimer;
- (void)setLastPhotoScrollByTimer:(BOOL)arg1;
- (unsigned long long)lastPhotoIndex;
- (void)setLastPhotoIndex:(unsigned long long)arg1;
- (unsigned long long)lastPhotoShowTimestamp;
- (void)setLastPhotoShowTimestamp:(unsigned long long)arg1;
- (BOOL)isSubScene;
- (void)setIsSubScene:(BOOL)arg1;
- (id)picStats;
- (void)setPicStats:(id)arg1;
- (void)setPhotoFeedReporter:(id)arg1;
- (id)contentPinchScrollView;
- (void)setContentPinchScrollView:(id)arg1;
- (void).cxx_destruct;
@end
