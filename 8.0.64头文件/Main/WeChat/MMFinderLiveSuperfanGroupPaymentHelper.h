@interface MMFinderLiveSuperfanGroupPaymentHelper : NSObject <MMFinderLiveGenericPaymentSheetViewDelegate, WCCoinConsumeLogicDelegate>
{
    id /* block */ _onClickQuestionView; // +0x8
    id /* block */ _onClickAgreement; // +0x10
    MMUIViewController * _viewController; // +0x18
    id /* block */ _paySuccessCallback; // +0x20
    MMFinderLiveTask * _liveTask; // +0x28
    unsigned long long _lastSelectedIndex; // +0x30
    MMFinderLiveGenericPaymentSheetView * _sheetView; // +0x38
    unsigned long long _subscriptionType; // +0x40
}
- (id)initWithLiveTask:(id)arg1;
- (void)showPaymentViewAnimated:(BOOL)arg1 resetToDefaultIndex:(BOOL)arg2;
- (void)hidePaymentViewAnimated:(BOOL)arg1;
- (void)paymentSheetViewWillClose:(id)arg1;
- (void)paymentSheetView:(id)arg1 didClickPayWithItem:(id)arg2;
- (void)_followAnchorWithCompletion:(id /* block */)arg1;
- (BOOL)isFollowAnchor;
- (void)_doJoinSuperfanWithType:(unsigned long long)arg1 subscriptionInfo:(id)arg2;
- (void)paymentSheetViewDidClickQuestionView:(id)arg1;
- (void)paymentSheetView:(id)arg1 didClickAgreementUrl:(id)arg2;
- (void)buyOneMonthWithResp:(id)arg1;
- (void)monthlySubscribeWithResp:(id)arg1;
- (void)checkSuperfanStateWithCheckCount:(id)arg1;
- (id)genSubscribeParameterWithResp:(id)arg1;
- (id)genConsumeParameterWithResp:(id)arg1;
- (id)genConsumeParameterWithMode:(unsigned long long)arg1 resp:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
- (id /* block */)onClickQuestionView;
- (void)setOnClickQuestionView:(id /* block */)arg1;
- (id /* block */)onClickAgreement;
- (void)setOnClickAgreement:(id /* block */)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id /* block */)paySuccessCallback;
- (void)setPaySuccessCallback:(id /* block */)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (unsigned long long)lastSelectedIndex;
- (void)setLastSelectedIndex:(unsigned long long)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (unsigned long long)subscriptionType;
- (void)setSubscriptionType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
