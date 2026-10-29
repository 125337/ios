@interface LiteAppJsApiTingWecoinPay : LiteAppJsApi <TingQQMembershipViewDelegate, MMPageSheetAdapterDelegate>
{
    MMListenMembershipJoinInfo * _joinInfo; // +0x20
    TingWecoinPlugin * _logic; // +0x28
    MMPageSheetAdapter * _pageAdapter; // +0x30
    NSString * _sessionId; // +0x38
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)callbackResult:(unsigned long long)arg1;
- (void)delayRefreshMembershipStatus;
- (void)reset;
- (void)showErrorToast;
- (void)showResultPage:(id)arg1;
- (void)showQQMemberBindingPage;
- (void)showWecoinPayPanel;
- (void)_reportBuyMembershipSucceed:(BOOL)arg1;
- (void)tingQQMembershipView:(id)arg1 confirmButtonClicked:(id)arg2;
- (void)tingQQMembershipView:(id)arg1 wecoinButtonClicked:(id)arg2;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (id)joinInfo;
- (void)setJoinInfo:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)pageAdapter;
- (void)setPageAdapter:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end

