@interface PalmHalfScreenView : MMUIView
{
    BOOL _dismissed; // +0x8
    BOOL _shown; // +0x9
    unsigned int _timeoutMs; // +0xc
    id <PalmHalfScreenViewDelegate> _delegate; // +0x10
    UIView * _backgroundView; // +0x18
    UIView * _containerView; // +0x20
    UIButton * _closeButton; // +0x28
    UILabel * _titleLabel; // +0x30
    UIView * _videoContainerView; // +0x38
    AVPlayerViewController * _videoPlayerController; // +0x40
    UIStackView * _contentStack; // +0x48
    MMWebImageView * _placeholderImageView; // +0x50
    id _timeObserver; // +0x58
    NSString * _sessionId; // +0x60
    unsigned long long _popUpStartTime; // +0x68
    unsigned long long _videoLoadStartTime; // +0x70
    unsigned long long _videoLoadCostTime; // +0x78
}
- (id)initWithTitle:(id)arg1 text:(id)arg2 timeoutMs:(unsigned int)arg3 videoUrl:(id)arg4 firstFrameUrl:(id)arg5 sessionId:(id)arg6;
- (void)setupBackgroundView;
- (void)setupContainerView;
- (void)setupTitle:(id)arg1;
- (void)setupVideoPlayerWithURL:(id)arg1 firstFrameUrl:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)videoDidFinishPlaying:(id)arg1;
- (void)dealloc;
- (void)setupContentStack;
- (void)appendContentWithText:(id)arg1;
- (void)appendComplexDescription:(id)arg1;
- (void)appendSimpleDescription:(id)arg1;
- (void)showInView;
- (void)dismiss:(id)arg1;
- (void)handleButtonTap;
- (void)handleBackgroundTap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)videoContainerView;
- (void)setVideoContainerView:(id)arg1;
- (id)videoPlayerController;
- (void)setVideoPlayerController:(id)arg1;
- (unsigned int)timeoutMs;
- (void)setTimeoutMs:(unsigned int)arg1;
- (id)contentStack;
- (void)setContentStack:(id)arg1;
- (BOOL)dismissed;
- (void)setDismissed:(BOOL)arg1;
- (BOOL)shown;
- (void)setShown:(BOOL)arg1;
- (id)placeholderImageView;
- (void)setPlaceholderImageView:(id)arg1;
- (id)timeObserver;
- (void)setTimeObserver:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)popUpStartTime;
- (void)setPopUpStartTime:(unsigned long long)arg1;
- (unsigned long long)videoLoadStartTime;
- (void)setVideoLoadStartTime:(unsigned long long)arg1;
- (unsigned long long)videoLoadCostTime;
- (void)setVideoLoadCostTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
