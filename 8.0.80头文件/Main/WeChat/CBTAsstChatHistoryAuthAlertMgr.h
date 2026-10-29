@interface CBTAsstChatHistoryAuthAlertMgr : NSObject
{
    BOOL _awaitingUserDecision; // +0x8
    CBTAsstConfirmSheetPresenter * _presenter; // +0x10
    NSString * _pendingCardId; // +0x18
    id /* block */ _pendingCompletion; // +0x20
    unsigned long long _presentGeneration; // +0x28
}
+ (id)sharedInstance;
- (id)init;
- (BOOL)isAlertPresenting;
- (void)finishPendingWithResult:(long long)arg1;
- (void)dismissAlert;
- (void)scheduleAuthTimeout:(double)arg1 generation:(unsigned long long)arg2;
- (void)requestAuthWithVariant:(long long)arg1 chatId:(id)arg2 cardId:(id)arg3 hostViewController:(id)arg4 timeout:(double)arg5 completion:(id /* block */)arg6;
- (id)recentAuthAlertContent;
- (void)handlePresentResult:(long long)arg1 cardId:(id)arg2;
- (void)finishWithResult:(long long)arg1 completion:(id /* block */)arg2;
- (id)presenter;
- (void)setPresenter:(id)arg1;
- (id)pendingCardId;
- (void)setPendingCardId:(id)arg1;
- (id /* block */)pendingCompletion;
- (void)setPendingCompletion:(id /* block */)arg1;
- (BOOL)awaitingUserDecision;
- (void)setAwaitingUserDecision:(BOOL)arg1;
- (unsigned long long)presentGeneration;
- (void)setPresentGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
