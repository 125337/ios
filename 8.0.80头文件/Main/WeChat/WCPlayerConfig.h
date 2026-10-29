@interface WCPlayerConfig : NSObject
{
    BOOL _hiddenCloseBtn; // +0x8
    BOOL _hiddenIconView; // +0x9
    BOOL _hiddenBottomTool; // +0xa
    BOOL _showBottomButtons; // +0xb
    BOOL _hiddenAttachBtn; // +0xc
    BOOL _bForbidProgressBarAutoHidden; // +0xd
    BOOL _bPassTouchThroughControlView; // +0xe
    BOOL _useC2CProgressBar; // +0xf
    BOOL _useAlbumSightProgressBar; // +0x10
    BOOL _albumShowLikeComment; // +0x11
    BOOL _showMuteButton; // +0x12
    BOOL _muteButtonDefaultMuted; // +0x13
    NSString * _rawVideoButtonTitle; // +0x18
    NSString * _attachButtonTitle; // +0x20
    double _bottomToolBottomPadding; // +0x28
}
- (id)init;
- (BOOL)hiddenCloseBtn;
- (void)setHiddenCloseBtn:(BOOL)arg1;
- (BOOL)hiddenIconView;
- (void)setHiddenIconView:(BOOL)arg1;
- (BOOL)hiddenBottomTool;
- (void)setHiddenBottomTool:(BOOL)arg1;
- (BOOL)showBottomButtons;
- (void)setShowBottomButtons:(BOOL)arg1;
- (BOOL)hiddenAttachBtn;
- (void)setHiddenAttachBtn:(BOOL)arg1;
- (BOOL)bForbidProgressBarAutoHidden;
- (void)setBForbidProgressBarAutoHidden:(BOOL)arg1;
- (BOOL)bPassTouchThroughControlView;
- (void)setBPassTouchThroughControlView:(BOOL)arg1;
- (BOOL)useC2CProgressBar;
- (void)setUseC2CProgressBar:(BOOL)arg1;
- (BOOL)useAlbumSightProgressBar;
- (void)setUseAlbumSightProgressBar:(BOOL)arg1;
- (BOOL)albumShowLikeComment;
- (void)setAlbumShowLikeComment:(BOOL)arg1;
- (BOOL)showMuteButton;
- (void)setShowMuteButton:(BOOL)arg1;
- (BOOL)muteButtonDefaultMuted;
- (void)setMuteButtonDefaultMuted:(BOOL)arg1;
- (id)rawVideoButtonTitle;
- (void)setRawVideoButtonTitle:(id)arg1;
- (id)attachButtonTitle;
- (void)setAttachButtonTitle:(id)arg1;
- (double)bottomToolBottomPadding;
- (void)setBottomToolBottomPadding:(double)arg1;
- (void).cxx_destruct;
@end
