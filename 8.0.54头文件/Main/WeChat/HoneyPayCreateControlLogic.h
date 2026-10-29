@interface HoneyPayCreateControlLogic : WCPayHoneyPayBaseControlLogic <WCPayGetPayPwdTokenCgiDelegate, HoneyPayGetCreateTokenSignCgiDelegate, WCPayCheckHoneyUserCgiDelegate, WCPayCheckHoneyPayerCgiDelegate, WCPayCreateHoneyPayCardCgiDelegate, WCPaySelectSingleContactControlLogicDelegate, MMTipsViewControllerDelegate, WCPayPayPwdViewControllerDelegate, HoneyPayPayerDetailControlLogicDelegate, HoneyPaySelectCardTypeViewControllerDelegate, HoneyPayPrepareCardViewControllerDelegate>
{
    id <HoneyPayCreateControlLogicDelegate> _delegate; // +0x38
    WCPayCheckHoneyPayerCgi * _checkPayerCgi; // +0x40
    WCPayCheckHoneyUserCgi * _checkUserCgi; // +0x48
    HoneyPayGetCreateTokenSignCgi * _getCreateTokenSignCgi; // +0x50
    WCPayCreateHoneyPayCardCgi * _createCgi; // +0x58
    WCPayGetPayPwdTokenCgi * _getPayPwdTokenCgi; // +0x60
    HoneyPaySelectCardTypeViewController * _selectCardTypeVC; // +0x68
    WCPayPayPwdViewController * _pwdVC; // +0x70
}
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)startLogic;
- (void)dealloc;
- (void)gotoModifyMaximumAmount;
- (void)verifyPassword;
- (void)selectSingleContactLogic:(id)arg1 didSelectContact:(id)arg2;
- (void)OnRealnameVerifySuccess:(id)arg1;
- (void)selectCardTypeVC:(id)arg1 didSelectCardType:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)prepareCardVC:(id)arg1 didClickNextWithAmount:(id)arg2 wishing:(id)arg3;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)getPayPwdTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getPayPwdTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)checkHoneyPayerCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)checkHoneyPayerCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getCreateTokenSignCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getCreateTokenSignCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)checkHoneyUserCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)checkHoneyUserCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)createHoneyPayCardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)createHoneyPayCardCgi:(id)arg1 didFailWithError:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)checkPayerCgi;
- (void)setCheckPayerCgi:(id)arg1;
- (id)checkUserCgi;
- (void)setCheckUserCgi:(id)arg1;
- (id)getCreateTokenSignCgi;
- (void)setGetCreateTokenSignCgi:(id)arg1;
- (id)createCgi;
- (void)setCreateCgi:(id)arg1;
- (id)getPayPwdTokenCgi;
- (void)setGetPayPwdTokenCgi:(id)arg1;
- (id)selectCardTypeVC;
- (void)setSelectCardTypeVC:(id)arg1;
- (id)pwdVC;
- (void)setPwdVC:(id)arg1;
- (void).cxx_destruct;
@end

