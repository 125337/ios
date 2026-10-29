@interface MMFinderLiveFansGroupOperationPanel : MMPageSheetBaseView <MMFinderLiveFansGroupAnchorEditPanelDelegate>
{
    BOOL _isKeyBoardShow; // +0x8
    BOOL _isPageWillClose; // +0x9
    id <MMFinderLiveFansGroupOperationReportDelegate> _reportDelegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    long long _currentOperateState; // +0x20
    UIView * _panelView; // +0x28
    MMFinderLiveFansGroupCreateContentView * _createContentView; // +0x30
    MMFinderLiveFansGroupManageContentView * _manageContentView; // +0x38
    double _keyBoardHeight; // +0x40
}
- (id)initWithTaskId:(id)arg1;
- (void)innerInit;
- (void)dealloc;
- (void)initNotifications;
- (void)registerExtension;
- (void)unResgisterExtension;
- (void)setupPageSheetConfig;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (id)liveTask;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPanelView;
- (void)layoutCreateContentView;
- (void)layoutManageContentView;
- (double)contentWidth;
- (double)contentHeight;
- (void)updateDetailViewFrame;
- (void)updateCurrentOperateState:(long long)arg1;
- (void)refreshUIForCurrentOperateState;
- (void)showWithAnimated:(BOOL)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)updatePageSheetCloseRecognizer;
- (void)onFansGroupNameChangedTo:(id)arg1 byEditPanel:(id)arg2;
- (void)navigateToEditPanelWithViewModel:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)currentOperateState;
- (void)setCurrentOperateState:(long long)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)createContentView;
- (void)setCreateContentView:(id)arg1;
- (id)manageContentView;
- (void)setManageContentView:(id)arg1;
- (BOOL)isKeyBoardShow;
- (void)setIsKeyBoardShow:(BOOL)arg1;
- (BOOL)isPageWillClose;
- (void)setIsPageWillClose:(BOOL)arg1;
- (double)keyBoardHeight;
- (void)setKeyBoardHeight:(double)arg1;
- (void).cxx_destruct;
@end

