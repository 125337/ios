@interface WCOutDialPad : MMUIView
{
    unsigned long long m_mode; // +0x8
    UIView * m_keyPadBtnsView; // +0x10
    UIView * m_SKMBtnsView; // +0x18
    UIButton * m_hideBtn; // +0x20
    UIButton * m_bottomFunctionBtn; // +0x28
    BOOL m_isMuteBtnSelected; // +0x30
    BOOL m_isSpeakerBtnSelected; // +0x31
    BOOL _hideKeyPad; // +0x32
    BOOL _enableBottomFunctionBtn; // +0x33
    id <WCOutDialPadDelegate> delegate; // +0x38
}
- (id)initWithPadMode:(unsigned long long)arg1;
- (void)configDialViewMode;
- (void)configCallingViewMode;
- (void)configKeyPadBtnViewWithColorMode:(unsigned long long)arg1;
- (void)configBottomFunctionBtnAndHideBtnWithMode:(unsigned long long)arg1;
- (void)configSKMBtnsView;
- (void)setHideKeyPad:(BOOL)arg1;
- (void)setEnableBottomFunctionBtn:(BOOL)arg1;
- (void)layoutSubviews;
- (void)didTagButton:(id)arg1;
- (void)updateDailViewMode;
- (void)traitCollectionDidChange:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isMuteBtnSelected;
- (BOOL)isSpeakerBtnSelected;
- (BOOL)hideKeyPad;
- (BOOL)enableBottomFunctionBtn;
- (void).cxx_destruct;
@end

