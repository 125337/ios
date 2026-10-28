@interface WCPlayLiveWithoutLoginViewController : MMCPUIViewController <TXLivePlayListener, CXCallObserverDelegate>
{
    BOOL _isIdleTimerDisabledBefore; // +0x70
    BOOL _hasSetIdleTimerDisabled; // +0x71
    id /* block */ _cancelCallback; // +0x78
    TRTCCdnPlayerManager * _cdnPlayer; // +0x80
    UIView * _videoContainerView; // +0x88
    WCPlayLiveWithoutLoginHeadView * _headView; // +0x90
    WCLiveBlurButton * _closeButton; // +0x98
    WCPlayLiveWithoutLoginViewModel * _viewModel; // +0xa0
    CXCallObserver * _callObserver; // +0xa8
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)createCdnPlayer;
- (void)layoutViews;
- (void)registerCallCenter;
- (void)stop;
- (void)onClose:(id)arg1;
- (void)internalClose;
- (void)onLiveClose;
- (void)updateViewModel:(id)arg1;
- (void)setIdleTimeDisable:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)hidesStatusBar;
- (id)headView;
- (id)closeButton;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)onPlayEvent:(int)arg1 withParam:(id)arg2;
- (void)onNetStatus:(id)arg1;
- (id /* block */)cancelCallback;
- (void)setCancelCallback:(id /* block */)arg1;
- (id)cdnPlayer;
- (void)setCdnPlayer:(id)arg1;
- (id)videoContainerView;
- (void)setVideoContainerView:(id)arg1;
- (void)setHeadView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)isIdleTimerDisabledBefore;
- (void)setIsIdleTimerDisabledBefore:(BOOL)arg1;
- (BOOL)hasSetIdleTimerDisabled;
- (void)setHasSetIdleTimerDisabled:(BOOL)arg1;
- (id)callObserver;
- (void)setCallObserver:(id)arg1;
- (void).cxx_destruct;
@end
