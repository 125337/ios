@interface WCPaySelectNameItem : WCBaseTextFieldItem <WCPayLogicMgrExt, UITextFieldDelegate, TenpaySecureCtrlDelegate>
{
    UILabel * m_nameLabel; // +0x50
    BOOL m_isUnselectable; // +0x58
    NSString * m_value; // +0x60
    TenpaySecureCtrl * m_secureTextField; // +0x68
    WCPayTransferToBankCardCandidateView * m_candidateView; // +0x70
    unsigned int m_nameLenLimit; // +0x78
}
- (void)setCandidateView:(id)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)initView:(CGRect)arg1;
- (void)updateView;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)setLengthLimit:(unsigned int)arg1;
- (void)setReceiverName:(id)arg1;
- (id)getTextValue;
- (id)getEncryptedValue;
- (void)OnGetTenpaySecureCtrlSalt:(id)arg1 Date:(id)arg2 Error:(id)arg3;
- (BOOL)onError:(id)arg1;
- (void)resignFirstResponder;
- (void).cxx_destruct;
@end

