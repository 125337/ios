@interface WCCanvasSidebarComponentButtonView : UIView <WCCanvasClickEventManagerDelegate>
{
    WCAdURLTintColorImageView * _iconView; // +0x8
    UILabel * _wordingLabel; // +0x10
    UIButton * _actionButton; // +0x18
    WCCanvasClickEventManager * _clickManager; // +0x20
    UIColor * _textColor; // +0x28
    WCCanvasComponentSidebarButtonInfo * _buttonInfo; // +0x30
    id <WCCanvasComponentDelegate> _canvasDelegate; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 textColor:(id)arg2 buttonInfo:(id)arg3 canvasDelegate:(id)arg4;
- (void)initViews;
- (void)layoutSubviews;
- (id)iconView;
- (id)wordingLabel;
- (id)actionButton;
- (id)clickManager;
- (void)onActionButtonClicked;
- (void)buttonWillAppearInMainScreen;
- (void)buttonWillDisappearInMainScreen;
- (void)buttonReportAddExposureCount;
- (id)reportMgr;
- (void)setIconView:(id)arg1;
- (void)setWordingLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setClickManager:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)buttonInfo;
- (void)setButtonInfo:(id)arg1;
- (id)canvasDelegate;
- (void)setCanvasDelegate:(id)arg1;
- (void).cxx_destruct;
@end
