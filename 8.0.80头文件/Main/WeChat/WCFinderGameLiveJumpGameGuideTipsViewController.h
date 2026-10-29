@interface WCFinderGameLiveJumpGameGuideTipsViewController : MMTipsViewController
{
    BOOL _checked; // +0x88
    BOOL _enableGuide; // +0x89
    MMUIButton * _checkBox; // +0x90
    id /* block */ _switchHandler; // +0x98
}
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(id /* block */)arg4 btnTitle:(id)arg5 handler:(id /* block */)arg6 switchHandler:(id /* block */)arg7;
- (void)setEnableGuide:(BOOL)arg1;
- (void)setChecked:(BOOL)arg1;
- (void)onCheckBoxClick:(id)arg1;
- (BOOL)checked;
- (BOOL)enableGuide;
- (id)checkBox;
- (void)setCheckBox:(id)arg1;
- (id /* block */)switchHandler;
- (void)setSwitchHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
