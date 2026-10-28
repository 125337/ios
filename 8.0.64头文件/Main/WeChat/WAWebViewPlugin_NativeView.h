@interface WAWebViewPlugin_NativeView : WAWebViewPluginBase <WAAlertDialogDelegate>
{
    BOOL _didAppear; // +0x8
    unsigned long long _alertDisplayingCount; // +0x10
    id /* block */ _onLoadingToastFinished; // +0x18
    NSDictionary * _toastParam; // +0x20
    NSMutableArray * _alertsWaitingQueue; // +0x28
    NSMutableArray * _alertsDisplayingQueue; // +0x30
    NSMutableArray * _actionSheetArr; // +0x38
}
- (void)showToast:(id)arg1;
- (void)updateToast:(id)arg1;
- (void)hideToast:(id /* block */)arg1;
- (BOOL)isLoadingToastExsist;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)showModal:(id)arg1 delegate:(id)arg2;
- (void)updateModal:(id)arg1;
- (void)onConfirm:(id)arg1;
- (void)onCancel:(id)arg1;
- (id)popDelegateForAlert:(id)arg1;
- (id)alertsWaitingQueue;
- (id)alertsDisplayingQueue;
- (unsigned long long)alertDisplayingCount;
- (id)getDisplayingModal;
- (void)bringAlertsToFront;
- (id)getModalContentDescription;
- (id)getToastContentDescription;
- (void)addActionSheet:(id)arg1;
- (void)delActionSheet:(id)arg1;
- (id)getActionSheet:(long long)arg1;
- (void)setAlertDisplayingCount:(unsigned long long)arg1;
- (id /* block */)onLoadingToastFinished;
- (void)setOnLoadingToastFinished:(id /* block */)arg1;
- (BOOL)didAppear;
- (void)setDidAppear:(BOOL)arg1;
- (id)toastParam;
- (void)setToastParam:(id)arg1;
- (void)setAlertsWaitingQueue:(id)arg1;
- (void)setAlertsDisplayingQueue:(id)arg1;
- (id)actionSheetArr;
- (void)setActionSheetArr:(id)arg1;
- (void).cxx_destruct;
@end
