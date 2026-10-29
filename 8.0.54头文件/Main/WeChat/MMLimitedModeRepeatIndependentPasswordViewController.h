@interface MMLimitedModeRepeatIndependentPasswordViewController : MMLimitedModeSetIndependentPasswordViewController <MMLimitedModeSetPasswordLogicDelegate>
{
    MMLimitedModeSetPasswordLogic * m_setPasswordLogic; // +0x68
    NSString * _m_firsetInputPassword; // +0x70
    MMLimitedModeSetIndependentPasswordViewController * _firstInputViewController; // +0x78
}
- (void)viewDidLoad;
- (id)getTitleLabelText;
- (BOOL)isShowGoToWechatPassWordButton;
- (BOOL)isShowDesclabel;
- (void)doInputFinishAction;
- (void)onLimitedModeSetPasswordRetType:(unsigned int)arg1 ticket:(id)arg2 success:(BOOL)arg3 errMsg:(id)arg4;
- (id)m_firsetInputPassword;
- (void)setM_firsetInputPassword:(id)arg1;
- (id)firstInputViewController;
- (void)setFirstInputViewController:(id)arg1;
- (void).cxx_destruct;
@end

