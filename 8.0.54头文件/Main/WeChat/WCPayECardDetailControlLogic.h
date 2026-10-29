@interface WCPayECardDetailControlLogic : WCPayECardBaseControlLogic <WCPayECardDetailViewControllerDelegate, WCPayECardSuccessViewControllerDelegate>
{
    id <WCPayECardDetailControlLogicDelegate> _delegate; // +0x38
    QryCancelECardDescRes * _cancelDetail; // +0x40
}
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)startLogic;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)ecardDetailVC:(id)arg1 didClickCloseWith:(id)arg2;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)OnUnBindCard:(id)arg1 Error:(id)arg2;
- (void)successVCFinished:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cancelDetail;
- (void)setCancelDetail:(id)arg1;
- (void).cxx_destruct;
@end

