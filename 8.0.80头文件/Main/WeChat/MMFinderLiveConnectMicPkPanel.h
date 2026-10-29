@interface MMFinderLiveConnectMicPkPanel : MMPageSheetBaseView
{
    BOOL _isShowing; // +0x8
    id <MMFinderLiveConnectMicPkPanelDelegate> _delegate; // +0x10
    MMUIButton * _navRightQuitPkButton; // +0x18
    MMUIButton * _navRightFinishPkPrematurelyButton; // +0x20
    UIView * _containerView; // +0x28
    MMFinderLiveConnectMicPkPanelMasterView * _masterView; // +0x30
    MMFinderLiveTaskId * _taskId; // +0x38
}
- (id)initWithTaskId:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)initViews;
- (void)setDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)initPageSheetConfig;
- (id)makeCloseButton;
- (void)closeAction;
- (void)quitPkAction;
- (void)finishPkPrematurelyAction;
- (void)updateWithModel:(id)arg1 animated:(BOOL)arg2;
- (unsigned long long)navRightButtonType;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)configPanelBeforeShowing;
- (void)showWithAnimated:(BOOL)arg1;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)checkAndUpdateAfterMicConditionChanged;
- (id)liveTask;
- (id)delegate;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (id)navRightQuitPkButton;
- (void)setNavRightQuitPkButton:(id)arg1;
- (id)navRightFinishPkPrematurelyButton;
- (void)setNavRightFinishPkPrematurelyButton:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)masterView;
- (void)setMasterView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
