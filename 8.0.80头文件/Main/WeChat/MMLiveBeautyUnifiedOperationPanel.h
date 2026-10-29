@interface MMLiveBeautyUnifiedOperationPanel : UIView <MMLiveBeautyControlPanelNavigationProvider>
{
    id <MMLiveBeautyUnifiedOperationPanelDelegate> _delegate; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    NSMutableArray * _providerStack; // +0x18
    UIView * _lightDismissView; // +0x20
    UIView * _containerView; // +0x28
    MMLiveGradientLayerView * _backgroundView; // +0x30
    UIButton * _closeButton; // +0x38
    UIButton * _settingsButton; // +0x40
    UIButton * _backButton; // +0x48
    UIButton * _resetButton; // +0x50
    UIView * _controlPanelContainerView; // +0x58
    UIView * _navigatorContainerView; // +0x60
}
- (id)initWithLiveTaskId:(id)arg1;
- (CGRect)freeAreaFrame;
- (void)openWithInitialPage:(unsigned long long)arg1;
- (void)close;
- (void)layoutSubviews;
- (void)onCloseButtonTapped;
- (void)onBackButtonTapped;
- (void)onResetButtonTapped;
- (void)pushControlPanel:(id)arg1;
- (void)popControlPanel;
- (void)replaceControlPanel:(id)arg1;
- (void)initializeComponents;
- (id)controlPanelProviderForPage:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)providerStack;
- (void)setProviderStack:(id)arg1;
- (id)lightDismissView;
- (void)setLightDismissView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)settingsButton;
- (void)setSettingsButton:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)resetButton;
- (void)setResetButton:(id)arg1;
- (id)controlPanelContainerView;
- (void)setControlPanelContainerView:(id)arg1;
- (id)navigatorContainerView;
- (void)setNavigatorContainerView:(id)arg1;
- (void).cxx_destruct;
@end
