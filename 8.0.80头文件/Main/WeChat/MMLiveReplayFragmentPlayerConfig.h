@interface MMLiveReplayFragmentPlayerConfig : NSObject
{
    BOOL _hiddenCloseBtn; // +0x8
    BOOL _hiddenIconView; // +0x9
    BOOL _hiddenBottomTool; // +0xa
    BOOL _showBottomButtons; // +0xb
    BOOL _hiddenMoreButton; // +0xc
    BOOL _hiddenPublishFinderFeedButton; // +0xd
    BOOL _hiddenAttachBtn; // +0xe
    BOOL _bForbidProgressBarAutoHidden; // +0xf
    BOOL _bPassTouchThroughControlView; // +0x10
    NSString * _attachButtonTitle; // +0x18
    double _bottomToolBottomPadding; // +0x20
}
- (BOOL)hiddenCloseBtn;
- (void)setHiddenCloseBtn:(BOOL)arg1;
- (BOOL)hiddenIconView;
- (void)setHiddenIconView:(BOOL)arg1;
- (BOOL)hiddenBottomTool;
- (void)setHiddenBottomTool:(BOOL)arg1;
- (BOOL)showBottomButtons;
- (void)setShowBottomButtons:(BOOL)arg1;
- (BOOL)hiddenMoreButton;
- (void)setHiddenMoreButton:(BOOL)arg1;
- (BOOL)hiddenPublishFinderFeedButton;
- (void)setHiddenPublishFinderFeedButton:(BOOL)arg1;
- (BOOL)hiddenAttachBtn;
- (void)setHiddenAttachBtn:(BOOL)arg1;
- (BOOL)bForbidProgressBarAutoHidden;
- (void)setBForbidProgressBarAutoHidden:(BOOL)arg1;
- (BOOL)bPassTouchThroughControlView;
- (void)setBPassTouchThroughControlView:(BOOL)arg1;
- (id)attachButtonTitle;
- (void)setAttachButtonTitle:(id)arg1;
- (double)bottomToolBottomPadding;
- (void)setBottomToolBottomPadding:(double)arg1;
- (void).cxx_destruct;
@end
