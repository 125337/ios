@interface WAJSContextPlugin_PlateManager : WAJSContextPluginBase <PBMessageObserverDelegate, WAPlateAuthorizePageSheetDelegate, WAPlateManageViewControllerDelegate, UIViewControllerTransitioningDelegate, WAPopInteractiveTransitionDelegate, UIViewControllerTransitioningDelegate>
{
    BOOL _pageSheetDidShow; // +0x8
    BOOL _managerVCDidShow; // +0x9
    NSString * _appid; // +0x10
    MMUIViewController * _rootVC; // +0x18
    id /* block */ _completion; // +0x20
    WAPlateAuthorizePageSheet * _platePageSheet; // +0x28
    WAPlateManageViewController * _plateManageVC; // +0x30
    WAReportPlateManageActionItem * _reportAction; // +0x38
    unsigned long long _selectedIdx; // +0x40
    WAPlateAuthorizeSheetInfo * _sheetInfo; // +0x48
    WAMenuPopInteractiveTransition * _interactiveTransition; // +0x50
    UIScreenEdgePanGestureRecognizer * _popBackGesture; // +0x58
}
- (id)init;
- (void)destroyPlatePageSheet;
- (void)destroyPlateManageVC;
- (void)getPlateWithCompelteion:(id /* block */)arg1;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)issueGetPlateRequestWithScene:(int)arg1;
- (void)issueReportRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetUserPlateInfo:(id)arg1;
- (void)handleReportUserPlateInfo:(id)arg1;
- (void)showPageSheet;
- (void)endWithSuccessResult:(id)arg1;
- (void)endWithErrorCode:(int)arg1 msg:(id)arg2;
- (void)showManageVC;
- (void)onWAPlateManageViewControllerDismiss:(id)arg1;
- (void)onWAPlateManageViewControllerGetErrCode:(int)arg1 errorMsg:(id)arg2;
- (void)authorizeAccept:(id)arg1;
- (void)authorizeReject:(id)arg1;
- (void)pageSheet:(id)arg1 needToPushViewController:(id)arg2;
- (void)authorizeManagePlate:(id)arg1;
- (void)_pushNewPageViewController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)recoverInteractivePop;
- (void)removeInteractivePop;
- (void)showToastWithText:(id)arg1;
- (id)parseErrCode:(int)arg1 ErrMsg:(id)arg2;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)rootVC;
- (void)setRootVC:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)platePageSheet;
- (void)setPlatePageSheet:(id)arg1;
- (id)plateManageVC;
- (void)setPlateManageVC:(id)arg1;
- (id)reportAction;
- (void)setReportAction:(id)arg1;
- (unsigned long long)selectedIdx;
- (void)setSelectedIdx:(unsigned long long)arg1;
- (id)sheetInfo;
- (void)setSheetInfo:(id)arg1;
- (BOOL)pageSheetDidShow;
- (void)setPageSheetDidShow:(BOOL)arg1;
- (BOOL)managerVCDidShow;
- (void)setManagerVCDidShow:(BOOL)arg1;
- (id)interactiveTransition;
- (void)setInteractiveTransition:(id)arg1;
- (id)popBackGesture;
- (void)setPopBackGesture:(id)arg1;
- (void).cxx_destruct;
@end

