@interface KindaTransferPayService : NSObject <WCPayBizF2FConfirmViewControllerDelegate, MMKTransferPayService>
{
    NSString * _m_checkUserNameStr; // +0x8
    WCPayCheckNameView * _m_checkNameView; // +0x10
    MMTipsViewController * _checkNameTipsView; // +0x18
    MMVoidCallback * _m_checkSurNameCancelCallBack; // +0x20
    MMVoidStringCallback * _m_checkSurNameSuccessCallBack; // +0x28
    MMVoidCallback * _m_checkAmountCancelCallBack; // +0x30
    MMVoidI64Callback * _m_checkAmountSuccessCallBack; // +0x38
    WCPayBizF2FConfirmViewController * _m_amountConfirmViewController; // +0x40
}
- (void)stopTransferCheckSurname;
- (void)stopTransferCheckAmount;
- (id)init;
- (void)startTransferCheckAmountImpl:(id)arg1 cancel:(id)arg2 confirm:(id)arg3;
- (void)onWCPayBizF2FConfirmViewControllerBack;
- (void)onWCPayBizF2FConfirmViewControllerConfirm:(unsigned long long)arg1 sign:(id)arg2;
- (void)delloc;
- (void)startTransferCheckSurnameImpl:(id)arg1 cancel:(id)arg2 confirm:(id)arg3;
- (void)checkNameDidChange:(id)arg1;
- (void)cutString:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (id)m_checkUserNameStr;
- (void)setM_checkUserNameStr:(id)arg1;
- (id)m_checkNameView;
- (void)setM_checkNameView:(id)arg1;
- (id)checkNameTipsView;
- (void)setCheckNameTipsView:(id)arg1;
- (id)m_checkSurNameCancelCallBack;
- (void)setM_checkSurNameCancelCallBack:(id)arg1;
- (id)m_checkSurNameSuccessCallBack;
- (void)setM_checkSurNameSuccessCallBack:(id)arg1;
- (id)m_checkAmountCancelCallBack;
- (void)setM_checkAmountCancelCallBack:(id)arg1;
- (id)m_checkAmountSuccessCallBack;
- (void)setM_checkAmountSuccessCallBack:(id)arg1;
- (id)m_amountConfirmViewController;
- (void)setM_amountConfirmViewController:(id)arg1;
- (void).cxx_destruct;
@end

