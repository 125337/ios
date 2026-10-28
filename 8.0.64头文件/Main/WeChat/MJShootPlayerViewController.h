@interface MJShootPlayerViewController : MMUIViewController
{
    BOOL _isFirstAppear; // +0x70
    MJShootRedPacketResponseInfo * _responseInfo; // +0x78
    MJShootComposingViewModel * _viewModel; // +0x80
    id <MJShootPlayerViewControllerDelegate> _delegate; // +0x88
    AVPlayer * _player; // +0x90
    AVPlayerItem * _playerItem; // +0x98
    AVPlayerLayer * _playerLayer; // +0xa0
    WCAudioModuleProxy * _auidoModuleProxy; // +0xa8
    WCProgressMaskView * _progressMaskView; // +0xb0
    MMUIView * _playerBackgroundView; // +0xb8
    MMUIButton * _exitButton; // +0xc0
    MMUIButton * _completeButton; // +0xc8
    MJGradientView * _bottomGradientView; // +0xd0
    MMUIView * _bottomBar; // +0xd8
    UIImageView * _imageView; // +0xe0
}
- (id)initWithViewModel:(id)arg1 responseInfo:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupExitButton;
- (void)setupBottomBar;
- (void)layoutPreviewView:(id)arg1;
- (void)setupForImagePreview;
- (void)setupImageView;
- (void)setupForVideoPreview;
- (void)setupVideoPlayer;
- (void)bindViewsForVideoPreview;
- (BOOL)isPlaying;
- (void)startPlaying;
- (void)stopPlaying;
- (void)playerItemDidPlayToEndTime:(id)arg1;
- (void)playerItemFailedToPlayToEndTime:(id)arg1;
- (void)exitButtonTouchUpInside:(id)arg1;
- (void)completeButtonTouchUpInside:(id)arg1;
- (void)_showExportProgressView;
- (void)_removeExportProgressView;
- (void)onApplicationWillEnterForegroundNotification:(id)arg1;
- (void)onApplicationDidEnterBackgroundNotification:(id)arg1;
- (BOOL)shouldAutorotate;
- (id)responseInfo;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (id)auidoModuleProxy;
- (void)setAuidoModuleProxy:(id)arg1;
- (id)progressMaskView;
- (void)setProgressMaskView:(id)arg1;
- (id)playerBackgroundView;
- (void)setPlayerBackgroundView:(id)arg1;
- (id)exitButton;
- (void)setExitButton:(id)arg1;
- (id)completeButton;
- (void)setCompleteButton:(id)arg1;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (BOOL)isFirstAppear;
- (void)setIsFirstAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end
