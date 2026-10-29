@interface MMFinderLivePromoteManagePanel : MMLandscapeDragBarPageSheet <MMFinderLivePromoteTableViewDelegate, WCActionSheetDelegate>
{
    BOOL _loading; // +0x8
    id <MMFinderLivePromoteManagePanelDelegate> _delegate; // +0x10
    id <MMFinderLivePromoteManageReportDelegate> _reportDelegate; // +0x18
    id /* block */ _showLivePromoteAddPanelBlock; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    long long _currentState; // +0x30
    UIView * _contentView; // +0x38
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x40
    MMUILabel * _addPromoteDescriptionLabel; // +0x48
    MMTableView * _promoteTableView; // +0x50
    MMFinderLivePromoteTableViewModel * _promoteTableViewModel; // +0x58
    MMFinderLivePromoteLogic * _promoteDataLogic; // +0x60
    id /* block */ _closeCompletion; // +0x68
}
- (id)initWithTaskId:(id)arg1;
- (void)innerInit;
- (void)dealloc;
- (void)registerExtension;
- (void)unResgisterExtension;
- (void)setupPageSheetConfig;
- (void)startLoading;
- (void)stopLoading;
- (void)layoutActivityIndicatorView;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)layoutSubviews;
- (void)updateNavBarUI;
- (id)getCurrentLeftButton;
- (id)getCurrentRightButton;
- (void)showLivePromoteAddPanel;
- (void)layoutUI;
- (void)layoutContentView;
- (double)contentWidth;
- (double)contentHeight;
- (void)layoutUIForNoDataState;
- (void)layoutAddPromoteDescriptionLabel;
- (void)layoutUIForHasDataState;
- (void)layoutPromoteTableView;
- (void)leftButtonAction;
- (id)promoteTableViewModel;
- (id)promoteDataLogic;
- (void)setCurrentState:(long long)arg1;
- (id)finderLiveTask;
- (void)setLoading:(BOOL)arg1;
- (void)onPromoteItemDelete:(id)arg1;
- (void)onPromoteItemSend:(id)arg1 onConfirm:(id /* block */)arg2;
- (void)onPromoteItemCancel:(id)arg1;
- (void)onPromoteItemContentDisplay:(id)arg1;
- (void)onPromoteItemContentAction:(id)arg1;
- (void)updateFetchDataWithErrorCode:(long long)arg1 promoteInfoList:(id)arg2 promoteAvailableItemList:(id)arg3;
- (void)sendPromoteItem:(id)arg1 onConfirm:(id /* block */)arg2;
- (void)cancelPromoteItem:(id)arg1;
- (void)setEnablePushPromote:(BOOL)arg1;
- (BOOL)isPromoting;
- (void)onLiveStaterPromoteOperatonReportWithItem:(id)arg1 actionResult:(long long)arg2;
- (void)onLivePromoteOperatonReportWithItem:(id)arg1 actionResult:(long long)arg2;
- (void)onPromoteItemExposeReport:(id)arg1;
- (void)onPromoteItemClickReport:(id)arg1;
- (void)reportForPromoteItem:(id)arg1 isSent:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id /* block */)showLivePromoteAddPanelBlock;
- (void)setShowLivePromoteAddPanelBlock:(id /* block */)arg1;
- (BOOL)loading;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)currentState;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)addPromoteDescriptionLabel;
- (void)setAddPromoteDescriptionLabel:(id)arg1;
- (id)promoteTableView;
- (void)setPromoteTableView:(id)arg1;
- (void)setPromoteTableViewModel:(id)arg1;
- (void)setPromoteDataLogic:(id)arg1;
- (id /* block */)closeCompletion;
- (void)setCloseCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
