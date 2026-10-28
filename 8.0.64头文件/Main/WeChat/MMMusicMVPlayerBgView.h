@interface MMMusicMVPlayerBgView : UIView <UIGestureRecognizerDelegate, MMMusicMVEpisodeItemCellViewDelegate>
{
    BOOL _isSwipeAnimating; // +0x8
    BOOL _isPreviewMode; // +0x9
    BOOL _isFullScreen; // +0xa
    BOOL _isMVInfoValid; // +0xb
    BOOL _doubleTapLikeDisabled; // +0xc
    BOOL _disabledPlay; // +0xd
    BOOL _shouldUseNewPreloadPolicy; // +0xe
    BOOL _isCancelTimer; // +0xf
    BOOL _shouldClearDisplay; // +0x10
    BOOL _disableNextTransition; // +0x11
    id <MMMusicMVPlayerBgViewDelegate> _delegate; // +0x18
    id <MMMusicMVPLayerBgviewDataSource> _dataSource; // +0x20
    UIView * _blurCoverView; // +0x28
    unsigned long long _currentCellIndex; // +0x30
    UIView * _cellContentView; // +0x38
    NSMutableSet * _cellSet; // +0x40
    NSMutableDictionary * _visibleCellDic; // +0x48
    NSMutableDictionary * _cellAnimatorDic; // +0x50
    UIPanGestureRecognizer * _panGesture; // +0x58
    UIView * _pausePrompt; // +0x60
    CAGradientLayer * _bgGradientLayer; // +0x68
    MMTimer * _preloadCellViewTimer; // +0x70
    MMMusicMVEpisodeItemCellView * _preloadCell; // +0x78
    unsigned long long _preloadCellIndex; // +0x80
    UITapGestureRecognizer * _tapGesture; // +0x88
    UITapGestureRecognizer * _doubleTapGesture; // +0x90
    UILongPressGestureRecognizer * _longPressGesture; // +0x98
    UIImageView * _defaultBgImageView; // +0xa0
    MMMusicVideoDisplayView * _videoDisplayView; // +0xa8
    NSObject<OS_dispatch_source> * _imageTimer; // +0xb0
    UIImage * _bgImage; // +0xb8
    MusicDefualtImageView * _defaultImageView; // +0xc0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)destoryImageTimer;
- (void)updateBackgroundLayerFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)resetToStart;
- (long long)numberOfMusicTracksFromDataSource;
- (id)musicMVPlayerTrackItemFromDatasourceAtIndex:(unsigned long long)arg1;
- (double)musicMVPlayerTrackPlayOffsetFromDatasourceAtIndex:(unsigned long long)arg1;
- (BOOL)musicMVPlayerIsGetMvInfoFinish;
- (void)setupVideoTransitions;
- (void)addVideoDisplayViewBlurEffectForRender:(double)arg1;
- (void)displayDefaultImage:(id)arg1;
- (void)_displayDefaultImage:(id)arg1;
- (void)clearDisplay;
- (void)checkAndClearDisplay;
- (void)clearDisplayAfterDelay:(double)arg1;
- (void)displayBgImage:(id)arg1;
- (void)replaceVideoDisplayView;
- (id)videoDisplayView;
- (id)defaultImageView;
- (void)handleTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)playLikeAnimationFromGestureRecognizer:(id)arg1 likeViewSuperView:(id)arg2 aboveView:(id)arg3;
- (void)handlePan:(id)arg1;
- (id)createVisibleCellIfNeededAtIndex:(unsigned long long)arg1;
- (id)createVisibleCellIfNeededAtIndex:(unsigned long long)arg1 initialVideoTime:(double)arg2;
- (id)createVisibleCellIfNeededAtIndex:(unsigned long long)arg1 initialVideoTime:(double)arg2 autoPlay:(BOOL)arg3;
- (BOOL)checkAndShowDefaultImageView;
- (void)updateCellData:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)updateCellData:(id)arg1 withIndex:(unsigned long long)arg2 videoInitialTime:(double)arg3;
- (void)updateCellData:(id)arg1 withIndex:(unsigned long long)arg2 videoInitialTime:(double)arg3 autoPlay:(BOOL)arg4;
- (id)fetchReusuableCell;
- (void)delayPreloadCellView;
- (void)onPreloadCellViewTimeout;
- (void)setupPausePrompt;
- (void)removePausePrompt;
- (void)setDoubleTapLikeDisabled:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)shouldIgnoreTapWithLocation:(CGPoint)arg1;
- (void)episodeItemCellView:(id)arg1 onVideoFrameOut:(id)arg2;
- (void)episodeItemCellView:(id)arg1 onImageFrameOut:(id)arg2;
- (void)renderPixelBuffer:(id)arg1 index:(long long)arg2;
- (void)episodeItemCellView:(id)arg1 didUpdateSingleVideoCurrentTime:(double)arg2 bufferPosition:(double)arg3;
- (void)episodeItemCellViewOnVideoTogglePostOperation;
- (void)episodeItemCellViewDidTapVideo;
- (void)episodeItemCellViewDidTapNoVideoView;
- (void)episodeItemCellViewOnVideoToggleJumpFinderProfileOperation:(id)arg1;
- (BOOL)episodeItemCellViewIsInUse:(id)arg1;
- (void)episodeItemCellViewOnShowBufferingViewFromCell:(id)arg1;
- (void)episodeItemCellViewOnHideBufferingViewFromCell:(id)arg1;
- (id)episodeItemCellView:(id)arg1 finderDataItemForTrack:(id)arg2;
- (void)setIsPreviewMode:(BOOL)arg1;
- (void)setIsFullScreen:(BOOL)arg1;
- (id)visibleCells;
- (id)currentCell;
- (void)transitionToEpisodeAtIndex:(unsigned long long)arg1 initialVideoTime:(double)arg2;
- (void)transitionToEpisodeAtIndex:(unsigned long long)arg1 initialVideoTime:(double)arg2 autoPlay:(BOOL)arg3;
- (void)seekCurrentEpisodeToTime:(double)arg1;
- (void)seekCurrentEpisodeToTime:(double)arg1 autoPlay:(BOOL)arg2;
- (void)seekCurrentEpisodeToTime:(double)arg1 autoPlay:(BOOL)arg2 withTransitionEffect:(BOOL)arg3;
- (void)pauseCurrentEpisode;
- (void)pauseCurrentEpisodeWithImageShown:(BOOL)arg1;
- (void)startCurrentEpisode;
- (void)reloadData;
- (void)reloadDataWithForceUpdate:(BOOL)arg1;
- (void)setPlayEnabled:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)blurCoverView;
- (void)setBlurCoverView:(id)arg1;
- (BOOL)isSwipeAnimating;
- (void)setIsSwipeAnimating:(BOOL)arg1;
- (unsigned long long)currentCellIndex;
- (void)setCurrentCellIndex:(unsigned long long)arg1;
- (BOOL)isPreviewMode;
- (BOOL)isFullScreen;
- (BOOL)isMVInfoValid;
- (void)setIsMVInfoValid:(BOOL)arg1;
- (id)cellContentView;
- (void)setCellContentView:(id)arg1;
- (id)cellSet;
- (void)setCellSet:(id)arg1;
- (id)visibleCellDic;
- (void)setVisibleCellDic:(id)arg1;
- (id)cellAnimatorDic;
- (void)setCellAnimatorDic:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)pausePrompt;
- (void)setPausePrompt:(id)arg1;
- (id)bgGradientLayer;
- (void)setBgGradientLayer:(id)arg1;
- (id)preloadCellViewTimer;
- (void)setPreloadCellViewTimer:(id)arg1;
- (id)preloadCell;
- (void)setPreloadCell:(id)arg1;
- (unsigned long long)preloadCellIndex;
- (void)setPreloadCellIndex:(unsigned long long)arg1;
- (BOOL)doubleTapLikeDisabled;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)doubleTapGesture;
- (void)setDoubleTapGesture:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (id)defaultBgImageView;
- (void)setDefaultBgImageView:(id)arg1;
- (BOOL)disabledPlay;
- (void)setDisabledPlay:(BOOL)arg1;
- (BOOL)shouldUseNewPreloadPolicy;
- (void)setShouldUseNewPreloadPolicy:(BOOL)arg1;
- (void)setVideoDisplayView:(id)arg1;
- (id)imageTimer;
- (void)setImageTimer:(id)arg1;
- (BOOL)isCancelTimer;
- (void)setIsCancelTimer:(BOOL)arg1;
- (id)bgImage;
- (void)setBgImage:(id)arg1;
- (void)setDefaultImageView:(id)arg1;
- (BOOL)shouldClearDisplay;
- (void)setShouldClearDisplay:(BOOL)arg1;
- (BOOL)disableNextTransition;
- (void)setDisableNextTransition:(BOOL)arg1;
- (void).cxx_destruct;
@end
