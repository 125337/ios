@interface HoneyPayPayerDetailControlLogic : WCPayHoneyPayBaseControlLogic <HoneyPayPayerCardDetailViewControllerDelegate, WCPayQryHoneyPayerDetailCgiDelegate, HoneyPayModifyMaximumAmountViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayModifyHoneyPayerCreditLineCgiDelegate, WCPayUnbindHoneyPayCardCgiDelegate, WCPayModifyHoneyPayerPayWayCgiDelegate, WCPayModifyHoneyPayerNotifyCgiDelegate, HoneyPayGetMCreditLineTokenCgiDelegate, WCPayGetPayPwdTokenCgiDelegate, MMTipsViewControllerDelegate>
{
    id <HoneyPayPayerDetailControlLogicDelegate> _delegate; // +0x38
    unsigned long long _entranceType; // +0x40
    unsigned long long _verifyPasswordScene; // +0x48
    WCPayQryHoneyPayerDetailCgi * _detailCgi; // +0x50
    HoneyPayPayerCardDetailViewController * _detailVC; // +0x58
    WCPayModifyHoneyPayerCreditLineCgi * _modifyCgi; // +0x60
    WCPayUnbindHoneyPayCardCgi * _unbindCgi; // +0x68
    WCPayModifyHoneyPayerPayWayCgi * _modifyPayWayCgi; // +0x70
    WCPayModifyHoneyPayerNotifyCgi * _modifyNotifyCgi; // +0x78
    HoneyPayGetMCreditLineTokenCgi * _getMCreditLineTokenCgi; // +0x80
    WCPayGetPayPwdTokenCgi * _getPayPwdTokenCgi; // +0x88
}
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)startLogic;
- (void)stopLogic;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)requestCreatedDetail;
- (void)requestDetail;
- (void)verifyPassword:(unsigned long long)arg1;
- (void)popAndPushDetailVC:(BOOL)arg1;
- (void)payerCardDetailVCDidClickChangeMaximumAmount:(id)arg1;
- (void)payerCardDetailVCDidClickUnbindCard:(id)arg1;
- (void)payerCardDetailVC:(id)arg1 changePayWay:(id)arg2;
- (void)payerCardDetailVCDidClickCreatedDoneButton:(id)arg1;
- (void)modifyMaximumAmountVC:(id)arg1 didClickNextWithAmount:(id)arg2;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)getPayPwdTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getPayPwdTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qryHoneyPayerDetailCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)qryHoneyPayerDetailCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getMCreditLineTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)getMCreditLineTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)modifyHoneyPayerCreditLineCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)modifyHoneyPayerCreditLineCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)unbindHoneyPayCardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)unbindHoneyPayCardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)modifyHoneyPayerPayWayCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)modifyHoneyPayerPayWayCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)modifyHoneyPayerNotifyCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)modifyHoneyPayerNotifyCgi:(id)arg1 didFailWithError:(id)arg2;
- (id)cardNo;
- (id)tokenMess;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg1;
- (unsigned long long)verifyPasswordScene;
- (void)setVerifyPasswordScene:(unsigned long long)arg1;
- (id)detailCgi;
- (void)setDetailCgi:(id)arg1;
- (id)detailVC;
- (void)setDetailVC:(id)arg1;
- (id)modifyCgi;
- (void)setModifyCgi:(id)arg1;
- (id)unbindCgi;
- (void)setUnbindCgi:(id)arg1;
- (id)modifyPayWayCgi;
- (void)setModifyPayWayCgi:(id)arg1;
- (id)modifyNotifyCgi;
- (void)setModifyNotifyCgi:(id)arg1;
- (id)getMCreditLineTokenCgi;
- (void)setGetMCreditLineTokenCgi:(id)arg1;
- (id)getPayPwdTokenCgi;
- (void)setGetPayPwdTokenCgi:(id)arg1;
- (void).cxx_destruct;
@end

