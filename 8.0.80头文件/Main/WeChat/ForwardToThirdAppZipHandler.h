@interface ForwardToThirdAppZipHandler : NSObject
{
    BOOL _finished; // +0x8
    id <ForwardToThirdAppZipHandlerDelegate> _delegate; // +0x10
    ForwardMessageLogicController * _logicController; // +0x18
    WCChatRecordZipExportTask * _zipTask; // +0x20
    ForwardToThirdAppZipPreparingPageSheet * _waitingSheet; // +0x28
    double _lastLoggedProgress; // +0x30
}
- (id)initWithLogicController:(id)arg1;
- (void)startZipTaskIfNeeded;
- (void)pageSheetDidShow;
- (void)pageSheetDidCloseWithoutSelection;
- (BOOL)handleSelectedAppType:(long long)arg1 params:(id)arg2;
- (BOOL)shouldUseZipForAppType:(long long)arg1;
- (void)showWaitingSheetForAppType:(long long)arg1 params:(id)arg2;
- (void)consumeZipForAppType:(long long)arg1 params:(id)arg2;
- (void)jumpWithProvider:(id)arg1 appType:(long long)arg2 params:(id)arg3 legacyObjects:(id)arg4;
- (void)finishZipTaskWithoutCleanup;
- (void)finishTerminalZipTask:(id)arg1 showToast:(BOOL)arg2;
- (void)cancelAndCleanupZipTask;
- (void)notifyFinish;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)zipTask;
- (void)setZipTask:(id)arg1;
- (id)waitingSheet;
- (void)setWaitingSheet:(id)arg1;
- (double)lastLoggedProgress;
- (void)setLastLoggedProgress:(double)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
