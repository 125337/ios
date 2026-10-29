@interface WCPlayerFullScreenConfig : NSObject
{
    BOOL _hiddenCloseBtn; // +0x8
    BOOL _videoProgressBarWithMultiSpeed; // +0x9
    BOOL _videoProgressBarAutoShow; // +0xa
    BOOL _hiddenProgressBar; // +0xb
    BOOL _hiddenTopTool; // +0xc
    BOOL _hiddenIconView; // +0xd
    BOOL _hiddenBottomTool; // +0xe
    BOOL _hiddenAttachBtn; // +0xf
    BOOL _bForbidProgressBarAutoHidden; // +0x10
    BOOL _bPassTouchThroughControlView; // +0x11
    NSString * _attachButtonTitle; // +0x18
    NSString * _shareableButtonTitle; // +0x20
    double _bottomToolBottomPadding; // +0x28
    long long _videoProgressBarType; // +0x30
    WCSNSPlayerPanelOperationReporter * _playerPanelOperationReporter; // +0x38
}
- (BOOL)hiddenCloseBtn;
- (void)setHiddenCloseBtn:(BOOL)arg1;
- (BOOL)videoProgressBarWithMultiSpeed;
- (void)setVideoProgressBarWithMultiSpeed:(BOOL)arg1;
- (BOOL)videoProgressBarAutoShow;
- (void)setVideoProgressBarAutoShow:(BOOL)arg1;
- (BOOL)hiddenProgressBar;
- (void)setHiddenProgressBar:(BOOL)arg1;
- (BOOL)hiddenTopTool;
- (void)setHiddenTopTool:(BOOL)arg1;
- (BOOL)hiddenIconView;
- (void)setHiddenIconView:(BOOL)arg1;
- (BOOL)hiddenBottomTool;
- (void)setHiddenBottomTool:(BOOL)arg1;
- (BOOL)hiddenAttachBtn;
- (void)setHiddenAttachBtn:(BOOL)arg1;
- (BOOL)bForbidProgressBarAutoHidden;
- (void)setBForbidProgressBarAutoHidden:(BOOL)arg1;
- (BOOL)bPassTouchThroughControlView;
- (void)setBPassTouchThroughControlView:(BOOL)arg1;
- (id)attachButtonTitle;
- (void)setAttachButtonTitle:(id)arg1;
- (id)shareableButtonTitle;
- (void)setShareableButtonTitle:(id)arg1;
- (double)bottomToolBottomPadding;
- (void)setBottomToolBottomPadding:(double)arg1;
- (long long)videoProgressBarType;
- (void)setVideoProgressBarType:(long long)arg1;
- (id)playerPanelOperationReporter;
- (void)setPlayerPanelOperationReporter:(id)arg1;
- (void).cxx_destruct;
@end
