@interface HoneyPayReceiverCardDetailControlLogic : WCPayHoneyPayBaseControlLogic <WCPayQryHoneyPayCardDetailCgiDelegate, WCPayUnbindHoneyPayCardCgiDelegate, HoneyPayReceiverCardDetailViewControllerDelegate, WCPayGetPayPwdTokenCgiDelegate>
{
    id <HoneyPayReceiverCardDetailControlLogicDelegate> _delegate; // +0x38
    WCPayQryHoneyPayCardDetailCgi * _detailCgi; // +0x40
    WCPayUnbindHoneyPayCardCgi * _unbindCgi; // +0x48
    WCPayGetPayPwdTokenCgi * _getPayPwdTokenCgi; // +0x50
    HoneyPayReceiverCardDetailViewController * _detailVC; // +0x58
}
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)startLogic;
- (void)requestDetail;
- (void)receiverCardDetailVCDidClickUnbindCard:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)getPayPwdTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getPayPwdTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qryHoneyPayCardDetailCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)qryHoneyPayCardDetailCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)unbindHoneyPayCardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)unbindHoneyPayCardCgi:(id)arg1 didFailWithError:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)detailCgi;
- (void)setDetailCgi:(id)arg1;
- (id)unbindCgi;
- (void)setUnbindCgi:(id)arg1;
- (id)getPayPwdTokenCgi;
- (void)setGetPayPwdTokenCgi:(id)arg1;
- (id)detailVC;
- (void)setDetailVC:(id)arg1;
- (void).cxx_destruct;
@end

