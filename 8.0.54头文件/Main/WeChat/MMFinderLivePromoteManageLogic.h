@interface MMFinderLivePromoteManageLogic : NSObject <MMFinderLivePromoteListViewModelDelegate, _TtP6WeChat38MMFinderLiveChooseFunctionCellDelegate_, MMFinderLivePromoteManagePanelDelegate>
{
    BOOL _enablePushPromote; // +0x8
    BOOL _isFetching; // +0x9
    BOOL _needShow; // +0xa
    BOOL _showNoticeListVCAfterNoticeCreation; // +0xb
    MMFinderLiveCreateNoticeReporter * _createNoticeReporter; // +0x10
    UIView * _showView; // +0x18
    id <MMFinderLivePromoteManagePanelDelegate> _delegate; // +0x20
    id <MMFinderLivePromoteManageReportDelegate> _reportDelegate; // +0x28
    MMFinderLiveTaskId * _taskId; // +0x30
    MMFinderLivePromoteLogic * _promoteDataLogic; // +0x38
    MMFinderLivePromoteDataModel * _promoteDataModel; // +0x40
    _TtC6WeChat35MMFinderLiveChooseFunctionViewModel * _functionViewModel; // +0x48
    MMFinderLiveNoticePromoteListPanel * _noticePromoteListPanel; // +0x50
    NSString * _descriptionPromptWording; // +0x58
    WCFinderCreateLiveViewModel * _createLiveVm; // +0x60
    MMFinderLivePromoteAddPanel * _promoteAddPanel; // +0x68
    MMFinderLiveTask * _finderLiveTask; // +0x70
    MMFinderLivePromoteListBasePanel * _promoteListPanel; // +0x78
    MMPageSheetAdapter * _createNoticePageSheet; // +0x80
    MMFinderLivePromoteManagePanel * _promoteManagePanel; // +0x88
    MMFinderLiveNoticeListViewModel * _anchorNoticeListViewModel; // +0x90
}
- (void)onManagePanelPromoteItemDelete:(id)arg1 completion:(id /* block */)arg2;
- (void)actionSheetPromoteItemDelete:(id)arg1 completion:(id /* block */)arg2;
- (void)actionSheetDeleteHandle;
- (void)onPromoteManagePanelContentAction:(id)arg1 dismissAction:(id /* block */)arg2;
- (void)onManagePanelFetchData:(id /* block */)arg1;
- (id)getAnchorContact;
- (id)getAvailableItem:(int)arg1;
- (void)showChooseFunctionPushView;
- (void)reportPromoteDataModelExpose;
- (void)reportPromoteDataModelClick:(unsigned int)arg1;
- (id)getChooseFunctionPushView;
- (double)contentHeight;
- (double)getWebPanelHeight;
- (void)hideChooseFunctionPushView;
- (id)getChooseFunctionNavigationController;
- (void)liveChooseFunctionCellDidSelectWithIndexPath:(id)arg1 item:(id)arg2 isActionButton:(BOOL)arg3;
- (void)liveChooseFunctionDetailDidSelectWithIndexPath:(id)arg1 item:(id)arg2;
- (void)directShowLiveNotice;
- (void)reportCreateNoticeAction:(unsigned long long)arg1 actionDict:(id)arg2;
- (void)addLiveNoticeInfo:(id)arg1;
- (void)navigateToLiveNoticeCreationDefaultingToUntimedNotice:(BOOL)arg1 showNoticeListVCAfterSucessfullyCreated:(BOOL)arg2 reporter:(id)arg3;
- (void)createPromotionalLiveNoticeDefaultingToUntimedNotice:(BOOL)arg1 reporter:(id)arg2;
- (void)navigateToNoticePromoteListPanel;
- (void)preinitNoticeListVMForAnchor;
- (void)presentNoticeListVC;
- (void)onCreateLiveNoticeRequestedByLiveNoticePromoteListPanel:(id)arg1;
- (void)onAddLiveNoticeToListRequested:(id)arg1 byLiveNoticePromoteListPanel:(id)arg2;
- (void)onLiveNoticeRevoked:(id)arg1 noticeCleared:(BOOL)arg2 byLiveNoticePromoteListPanel:(id)arg3;
- (void)addLiveNoticeInfoToList:(id)arg1 triggerRefresh:(BOOL)arg2;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (id)createLiveNoticeButtonLabelOfViewController:(id)arg1;
- (BOOL)checkHasValidLiveNoticeInfo;
- (void)gotoArticleEditPanel;
- (BOOL)addArticleInfo:(id)arg1 fromEditPanel:(id)arg2;
- (void)addWeComContact:(id)arg1;
- (void)onFunctionViewPromoteItemDelete:(id)arg1;
- (void)onPanelRedPacketClick:(id)arg1;
- (void)onPushPromoteListPanelWithType:(unsigned int)arg1;
- (void)gotoRedPacketEditPanel:(BOOL)arg1;
- (BOOL)onRedPacketInfo:(id)arg1 opType:(unsigned int)arg2 fromEditPanel:(id)arg3;
- (void)redPacketAddPromoteWithPanel:(id)arg1 opType:(unsigned int)arg2 jumpinfoId:(id)arg3 redPacketInfo:(id)arg4;
- (void)refreshRedPacketWhenOperationComplete;
- (void)showPersonalColumnGuide:(id)arg1;
- (void)showProgrammaListGuide:(id)arg1;
- (void)onLiveMemberShipZoneButtonClicked:(id)arg1;
- (void)addPanelAdBussinessClick:(id)arg1;
- (void)onPromoteManageLogicAdd:(id)arg1;
- (void)addButtonClicked:(unsigned int)arg1;
- (void)onLivePromoteListOperation:(long long)arg1 item:(id)arg2;
- (void)addPanelListenBussinessClick:(id)arg1;
- (void)addPanelAppDownLoadBussinessClick:(id)arg1;
- (void)addPanelMiniProgramBussinessClick:(id)arg1;
- (void)addPanelOtherBussinessClick:(id)arg1;
- (void)onChooseFunctionPromoteOperation:(long long)arg1 promoteId:(unsigned long long)arg2 type:(unsigned int)arg3 reportType:(long long)arg4 jumpInfo:(id)arg5;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)addLivePaidCollection:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;
- (void)onExitLive;
- (void)enterPromoteManagePanel;
- (void)onShowPanelWithType:(long long)arg1;
- (void)showPromoteManagePanel;
- (void)onFetchDataComplete;
- (void)showLivePromoteAddIntroducePanel;
- (void)showLivePromoteAddPanel;
- (void)hidePromoteManagePanel;
- (void)showChooseFunctionPushView;
- (void)onUpdateWithType:(long long)arg1;
- (void)onUpdatePromoteManagePanel;
- (void)addPromoteItem:(id)arg1 completion:(id /* block */)arg2;
- (void)deletePromoteItem:(id)arg1 completion:(id /* block */)arg2;
- (void)onFetchDataWithShowPanel:(BOOL)arg1 compleBlock:(id /* block */)arg2;
- (id)finderLiveTask;
- (id)promoteInfoItemsOfType:(unsigned int)arg1;
- (id)promoteDataLogic;
- (id)createNoticeReporter;
- (void)resetCreateNoticeReporter;
- (id)functionViewModel;
- (void)createPromoteAddPanel;
- (void)createPromoteManagePanel;
- (void)updateLivePromoteManagePanelDelegate:(id)arg1;
- (void)updateLivePromoteManagePanelReportDelegate:(id)arg1;
- (void)setEnablePushPromote:(BOOL)arg1;
- (void)setIsFetching:(BOOL)arg1;
- (id)showView;
- (void)setShowView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setPromoteDataLogic:(id)arg1;
- (id)promoteDataModel;
- (void)setPromoteDataModel:(id)arg1;
- (void)setFunctionViewModel:(id)arg1;
- (id)noticePromoteListPanel;
- (void)setNoticePromoteListPanel:(id)arg1;
- (id)descriptionPromptWording;
- (void)setDescriptionPromptWording:(id)arg1;
- (id)createLiveVm;
- (void)setCreateLiveVm:(id)arg1;
- (id)promoteAddPanel;
- (void)setPromoteAddPanel:(id)arg1;
- (void)setFinderLiveTask:(id)arg1;
- (id)promoteListPanel;
- (void)setPromoteListPanel:(id)arg1;
- (id)createNoticePageSheet;
- (void)setCreateNoticePageSheet:(id)arg1;
- (id)promoteManagePanel;
- (void)setPromoteManagePanel:(id)arg1;
- (BOOL)enablePushPromote;
- (BOOL)isFetching;
- (BOOL)needShow;
- (void)setNeedShow:(BOOL)arg1;
- (BOOL)showNoticeListVCAfterNoticeCreation;
- (void)setShowNoticeListVCAfterNoticeCreation:(BOOL)arg1;
- (id)anchorNoticeListViewModel;
- (void)setAnchorNoticeListViewModel:(id)arg1;
- (void).cxx_destruct;
@end

