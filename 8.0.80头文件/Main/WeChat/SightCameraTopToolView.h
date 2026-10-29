@interface SightCameraTopToolView : UIView
{
    BOOL _isRecording; // +0x8
    BOOL _canRelayoutSubviews; // +0x9
    long long _flashMode; // +0x10
    UIButton * _closeButton; // +0x18
    MMUIButton * _cameraSwitchButton; // +0x20
    long long _viewStyle; // +0x28
    unsigned long long _toolItems; // +0x30
    MMTimer * _throttle; // +0x38
    WCFinderEditImageMusicView * _musicBGMView; // +0x40
    RecommendedMusicInfo * _patMusicInfo; // +0x48
    id /* block */ _switchCameraBlock; // +0x50
    id /* block */ _closeButtonBlock; // +0x58
}
+ (long long)flashModeWithToolFlashMode:(long long)arg1;
+ (long long)torchModeWithToolFlashMode:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (long long)orientation;
- (void)rotateToOrientation:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1 toolItems:(unsigned long long)arg2 patMusicInfo:(id)arg3 canRelayoutSubviews:(BOOL)arg4 viewStyle:(long long)arg5;
- (void)setIsRecording:(BOOL)arg1;
- (void)setupView;
- (void)layoutSubviews;
- (void)forceRelayoutSubviews;
- (void)_relayoutViews;
- (id)musicBGMView;
- (void)updateMusicBGMViewDuration:(id)arg1;
- (void)updateCameraAccessibility;
- (void)onCloseButtonClicked;
- (void)switchCamera;
- (void)realSwitchCamera;
- (long long)flashMode;
- (void)setFlashMode:(long long)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)cameraSwitchButton;
- (void)setCameraSwitchButton:(id)arg1;
- (BOOL)isRecording;
- (long long)viewStyle;
- (void)setViewStyle:(long long)arg1;
- (unsigned long long)toolItems;
- (void)setToolItems:(unsigned long long)arg1;
- (id)throttle;
- (void)setThrottle:(id)arg1;
- (void)setMusicBGMView:(id)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (BOOL)canRelayoutSubviews;
- (void)setCanRelayoutSubviews:(BOOL)arg1;
- (id /* block */)switchCameraBlock;
- (void)setSwitchCameraBlock:(id /* block */)arg1;
- (id /* block */)closeButtonBlock;
- (void)setCloseButtonBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
