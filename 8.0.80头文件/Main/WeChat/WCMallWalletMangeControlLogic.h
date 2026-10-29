@interface WCMallWalletMangeControlLogic : WCPayControlLogic <WCPayWalletGetFunctionSwitchListCgiDelegate, WCPayWalletBatchFunctionOperateCgiDelegate, WCPayMallFuncManageViewControllerDelegate, WCBizMainViewControllerExt>
{
    id <WCMallWalletMangeControlLogicDelegate> m_delegate; // +0x38
    WCPayWalletGetFunctionSwitchListCgi * _getListCgi; // +0x40
    WCPayWalletBatchFunctionOperateCgi * _batchOperateCgi; // +0x48
}
- (id)getListCgi;
- (id)batchOperateCgi;
- (void)setControlLogicDelegate:(id)arg1;
- (void)startLogic;
- (void)onWCPayWalletGetFunctionSwitchListCgiResponseOK:(id)arg1;
- (void)onWCPayWalletGetFunctionSwitchListCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayMallFuncManageViewControllerCancel;
- (BOOL)isWCPayMallFuncManagerViewControllerBePresent;
- (void)OnWCPayMallFuncManageViewControllerBatchOperate:(id)arg1;
- (void)onWCPayWalletBatchFunctionOperateCgiResponseOK:(id)arg1;
- (void)onWCBizMainViewControllerGetFuncDone;
- (void)onWCPayWalletBatchFunctionOperateCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)setGetListCgi:(id)arg1;
- (void)setBatchOperateCgi:(id)arg1;
- (void).cxx_destruct;
@end
