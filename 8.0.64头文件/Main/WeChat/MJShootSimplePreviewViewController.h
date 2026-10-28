@interface MJShootSimplePreviewViewController : MMUIViewController
{
    MJShootComposingViewModel * _viewModel; // +0x70
    id <MJShootSimplePreviewViewControllerDelegate> _delegate; // +0x78
    UIView * _renderView; // +0x80
    WCProgressMaskView * _progressMaskView; // +0x88
    MMUIView * _playerBackgroundView; // +0x90
    MMUIButton * _exitButton; // +0x98
    MMUIButton * _completeButton; // +0xa0
    MJGradientView * _bottomGradientView; // +0xa8
    MMUIView * _bottomBar; // +0xb0
    MJShootRedPacketResponseInfo * _responseInfo; // +0xb8
}
- (id)initWithViewModel:(id)arg1 responseInfo:(id)arg2;
- (void)dealloc;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupRenderView;
- (void)setupExitButton;
- (void)setupBottomBar;
- (void)exitButtonTouchUpInside:(id)arg1;
- (void)completeButtonTouchUpInside:(id)arg1;
- (void)_startExportingVideoWithCompletion:(id /* block */)arg1;
- (void)handleShootPreviewExportProgressNoti:(id)arg1;
- (void)onApplicationWillResignActiveNotification:(id)arg1;
- (void)onApplicationDidBecomeActiveNotification:(id)arg1;
- (void)_showExportProgressView;
- (void)_removeExportProgressView;
- (CGSize)_calculateRenderViewSize;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
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
- (id)responseInfo;
- (void).cxx_destruct;
@end
