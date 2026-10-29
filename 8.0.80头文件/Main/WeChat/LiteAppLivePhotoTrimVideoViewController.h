@interface LiteAppLivePhotoTrimVideoViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    BOOL _isPlaying; // +0x8
    BOOL _processing; // +0x9
    BOOL _cancelling; // +0xa
    double _maxTrimDurationSec; // +0x10
    long long _coverTimeMs; // +0x18
    double _precomputedDurationSec; // +0x20
    id <LiteAppLivePhotoTrimDelegate> _livePhotoDelegate; // +0x28
    NSString * _videoPath; // +0x30
    UIImage * _thumbImage; // +0x38
    AVPlayer * _player; // +0x40
    AVPlayerLayer * _playerLayer; // +0x48
    UIView * _videoContainerView; // +0x50
    UILabel * _durationLabel; // +0x58
    LiteAppLivePhotoTrimRangeView * _rangeView; // +0x60
    UIButton * _cancelButton; // +0x68
    UIButton * _confirmButton; // +0x70
    UIView * _dividerView; // +0x78
    UIButton * _playButton; // +0x80
    UITapGestureRecognizer * _videoTapGesture; // +0x88
    MMLoadingView * _loadingView; // +0x90
    CADisplayLink * _displayLink; // +0x98
    double _videoDurationSec; // +0xa0
    double _selectedStartSec; // +0xa8
    double _selectedEndSec; // +0xb0
    double _durationLabelBottom; // +0xb8
    double _videoNativeWidth; // +0xc0
    double _videoNativeHeight; // +0xc8
    LiteAppLivePhotoTrimSlideTransitionAnimator * _transitionAnimator; // +0xd0
}
- (id)initWithVideoPath:(id)arg1 thumbImage:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)dealloc;
- (double)maxTrimDurationSec;
- (double)initialCursorSec;
- (void)readVideoNativeDimensions;
- (void)viewDidLoad;
- (double)thumbnailCellWidth;
- (double)thumbnailIntervalSec;
- (long long)preferredThumbnailCount;
- (id)thumbnailImagesFromSlotSnapshot:(id)arg1;
- (void)publishThumbnailSlotSnapshot:(id)arg1;
- (void)startExtractThumbnails;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)updateDurationLabel;
- (void)seekToSecond:(double)arg1 shouldPlay:(BOOL)arg2;
- (void)onDisplayLink;
- (void)setProcessingUIVisible:(BOOL)arg1;
- (void)onProcessingTimeout;
- (void)onConfirm;
- (void)onCancel;
- (void)onPlayButtonTapped;
- (void)onVideoSurfaceTapped;
- (void)startPlayback;
- (void)pausePlayback;
- (void)updatePlayButtonVisibility;
- (void)setMaxTrimDurationSec:(double)arg1;
- (long long)coverTimeMs;
- (void)setCoverTimeMs:(long long)arg1;
- (double)precomputedDurationSec;
- (void)setPrecomputedDurationSec:(double)arg1;
- (id)livePhotoDelegate;
- (void)setLivePhotoDelegate:(id)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (id)videoContainerView;
- (void)setVideoContainerView:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)rangeView;
- (void)setRangeView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)dividerView;
- (void)setDividerView:(id)arg1;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (id)videoTapGesture;
- (void)setVideoTapGesture:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)videoDurationSec;
- (void)setVideoDurationSec:(double)arg1;
- (double)selectedStartSec;
- (void)setSelectedStartSec:(double)arg1;
- (double)selectedEndSec;
- (void)setSelectedEndSec:(double)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)processing;
- (void)setProcessing:(BOOL)arg1;
- (double)durationLabelBottom;
- (void)setDurationLabelBottom:(double)arg1;
- (double)videoNativeWidth;
- (void)setVideoNativeWidth:(double)arg1;
- (double)videoNativeHeight;
- (void)setVideoNativeHeight:(double)arg1;
- (BOOL)cancelling;
- (void)setCancelling:(BOOL)arg1;
- (id)transitionAnimator;
- (void)setTransitionAnimator:(id)arg1;
- (void).cxx_destruct;
@end
