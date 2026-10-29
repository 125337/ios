@interface BTFeedbackPanel : MMUIWindow <MMUIViewControllerExt>
{
    BTFeedbackPanelInitParams * m_initParams; // +0x8
    BTFeedbackPanelCoordinateParams * m_coordinateParams; // +0x10
    MMUIView * m_backgroundView; // +0x18
    MMUIImageView * m_indicatorView; // +0x20
    MMUIView * m_pannelView; // +0x28
    MMUIView * m_reasonBtnContainerView; // +0x30
    MMUILabel * m_titleView; // +0x38
    UIButton * m_confirmBtn; // +0x40
    NSMutableArray * m_reasonBtnArr; // +0x48
    NSMutableArray * m_selectedBtnArr; // +0x50
    id <BTFeedbackPanelDelegate> _panelDelegate; // +0x58
}
- (id)initWithInitParams:(id)arg1 coordinateParams:(id)arg2;
- (void)checkAndSetInitParams:(id)arg1;
- (void)checkAndSetCoordinateParams:(id)arg1;
- (void)initView;
- (void)addCornersToPannelView;
- (void)initReasonBtns;
- (id)genReasonBtnWithReason:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)layoutSubviews;
- (void)layoutPanelView;
- (void)onTapBackground;
- (void)onClickReasonBtn:(id)arg1;
- (void)onClickConfirmBtn;
- (void)didClose;
- (void)show;
- (void)hide;
- (BOOL)accessibilityPerformEscape;
- (id)panelDelegate;
- (void)setPanelDelegate:(id)arg1;
- (void).cxx_destruct;
@end
