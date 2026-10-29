@interface WCCoinEncashIncomeLogic : MMObject <WCCoinPrepareIncomeEncashCgiDelegate, WCCoinEncashIncomeCgiDelegate, WCCoinFetchMoneyInputViewControllerDelegate, WCPayJSApiVerifyDelegate, WCPayPaidSuccessStatusViewControllerDelegate, WCCoinRealNameAuthCgiDelegate, WCCoinResignTaxCutTipsViewDelegate>
{
    WCCoinEncashParameter * _parameter; // +0x8
    id <WCCoinEncashIncomeLogicDelegate> _delegate; // +0x10
    unsigned long long _amount; // +0x18
    PrepareIncomeEncashResponse * _prepareEncashResponse; // +0x20
    NSString * _wcpayToken; // +0x28
    WCCoinInterceptLogic * _interceptLogic; // +0x30
    WCCoinFetchMoneyInputViewController * _inputVC; // +0x38
    KindaProgressDialog * _loading; // +0x40
    SecurityInfoAuthrizeLogic * _authLogic; // +0x48
}
- (void)start;
- (void)enterInputVC;
- (void)getRealNameInfo;
- (void)uploadToken:(id)arg1;
- (void)encashWith:(unsigned long long)arg1;
- (void)startPrepareEncash;
- (void)startGetWCPayToken;
- (void)startEncash;
- (void)startEncash:(id)arg1 action:(int)arg2;
- (void)callSuccess;
- (void)callFail;
- (void)handleIntercept:(id)arg1;
- (id)getTopVC;
- (void)showError:(id)arg1;
- (void)shouldFetchMoney:(id)arg1 amount:(unsigned long long)arg2;
- (void)vcDidBePopedOrDismissed:(id)arg1;
- (void)didClickTaxCutEntrance:(id)arg1;
- (void)statusViewControlleDidClickDone:(id)arg1;
- (void)didClickAgree:(id)arg1;
- (void)didClickDisagree:(id)arg1;
- (void)onVerifyResult:(id)arg1;
- (id)getParam;
- (id)getCurrentURL;
- (void)realNameAuthCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)realNameAuthCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)prepareIncomeEncashCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)prepareIncomeEncashCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)encashIncomeCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)encashIncomeCgi:(id)arg1 didFailWithError:(id)arg2;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)amount;
- (void)setAmount:(unsigned long long)arg1;
- (id)prepareEncashResponse;
- (void)setPrepareEncashResponse:(id)arg1;
- (id)wcpayToken;
- (void)setWcpayToken:(id)arg1;
- (id)interceptLogic;
- (void)setInterceptLogic:(id)arg1;
- (id)inputVC;
- (void)setInputVC:(id)arg1;
- (id)loading;
- (void)setLoading:(id)arg1;
- (id)authLogic;
- (void)setAuthLogic:(id)arg1;
- (void).cxx_destruct;
@end

