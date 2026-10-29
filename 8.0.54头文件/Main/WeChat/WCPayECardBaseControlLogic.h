@interface WCPayECardBaseControlLogic : WCPayControlLogic <MMTipsViewControllerDelegate>
{
    WCPayECardCgiError * _baseECardCgiError; // +0x38
}
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)showAlertWith:(id)arg1;
- (void)handleECardCgiError:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (id)baseECardCgiError;
- (void)setBaseECardCgiError:(id)arg1;
- (void).cxx_destruct;
@end

