@interface WAPNAuthCardSession : WAAgentAuthCardSession
{
    BOOL _showsToast; // +0x8
    WAPNAuthCoordinator * _coordinator; // +0x10
    WAPNAuthSheetInfo * _sheetInfo; // +0x18
    long long _toastType; // +0x20
    long long _selectedIndex; // +0x28
    id /* block */ _onRequestAddPhone; // +0x30
    id /* block */ _onConfirmAccept; // +0x38
}
+ (id)replaySessionFromSnapshot:(id)arg1 appId:(id)arg2;
+ (long long)replaySelectedIndexFromPayload:(id)arg1 phoneList:(id)arg2;
- (id)initWithCoordinator:(id)arg1 appId:(id)arg2 sheetInfo:(id)arg3;
- (id)initWithCoordinator:(id)arg1 appId:(id)arg2 sheetInfo:(id)arg3 toastType:(long long)arg4;
- (void)finishWithStatus:(unsigned long long)arg1 extra:(id)arg2;
- (void)finishToastAfterRenderingIfNeeded;
- (BOOL)acceptWaitsForCGI;
- (void)confirmAcceptFromCardWithCompletion:(id /* block */)arg1;
- (id)buildUserInputForm;
- (id)buildAuthCardData;
- (id)buildSnapshot;
- (long long)selectedIndexForSnapshotInList:(id)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (id)sheetInfo;
- (void)setSheetInfo:(id)arg1;
- (BOOL)showsToast;
- (void)setShowsToast:(BOOL)arg1;
- (long long)toastType;
- (void)setToastType:(long long)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (id /* block */)onRequestAddPhone;
- (void)setOnRequestAddPhone:(id /* block */)arg1;
- (id /* block */)onConfirmAccept;
- (void)setOnConfirmAccept:(id /* block */)arg1;
- (void).cxx_destruct;
@end
