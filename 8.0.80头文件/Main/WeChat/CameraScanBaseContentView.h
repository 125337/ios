@interface CameraScanBaseContentView : MMUIView
{
    id <CameraScanBaseContentViewDelegate> _delegate; // +0x8
    UILabel * _centerLabel; // +0x10
    UIButton * _closeButton; // +0x18
    UILabel * _infoLabel; // +0x20
    UIButton * _torchButton; // +0x28
    UILabel * _torchLabel; // +0x30
    CameraScanTabView * _tabView; // +0x38
    UIView * _rightOpButtonWraperView; // +0x40
    UIView * _leftOpButtonWraperView; // +0x48
    UIView * _aiOpButtonWraperView; // +0x50
    UIView * _aiCameraFlipButtonWraperView; // +0x58
    UIView * _aiHistoryButtonWraperView; // +0x60
    double _duoBottomOpHorizontalInset; // +0x68
}
- (id)init;
- (void)setupCenterLabel:(id)arg1;
- (void)setCenterLabelHidden:(BOOL)arg1 bAnim:(BOOL)arg2;
- (void)setOpButtonsHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (CGSize)areaSizeAboveTabView;
- (CGPoint)areaCenterAboveTabView;
- (double)getTabViewHeight;
- (BOOL)isInteractiveView:(id)arg1;
- (BOOL)shouldInterceptTapAtPoint:(CGPoint)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)centerLabel;
- (void)setCenterLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg1;
- (id)torchButton;
- (void)setTorchButton:(id)arg1;
- (id)torchLabel;
- (void)setTorchLabel:(id)arg1;
- (id)tabView;
- (void)setTabView:(id)arg1;
- (id)rightOpButtonWraperView;
- (void)setRightOpButtonWraperView:(id)arg1;
- (id)leftOpButtonWraperView;
- (void)setLeftOpButtonWraperView:(id)arg1;
- (id)aiOpButtonWraperView;
- (void)setAiOpButtonWraperView:(id)arg1;
- (id)aiCameraFlipButtonWraperView;
- (void)setAiCameraFlipButtonWraperView:(id)arg1;
- (id)aiHistoryButtonWraperView;
- (void)setAiHistoryButtonWraperView:(id)arg1;
- (double)duoBottomOpHorizontalInset;
- (void)setDuoBottomOpHorizontalInset:(double)arg1;
- (void).cxx_destruct;
@end
