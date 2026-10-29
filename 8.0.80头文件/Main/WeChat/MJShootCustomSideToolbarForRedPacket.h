@interface MJShootCustomSideToolbarForRedPacket : MJShootSideToolbar
{
    MJToolbarButton * _fancyButton; // +0x8
}
- (void)commonInit;
- (id)fancyButton;
- (void)fancyButtonDidTouchUpInside:(id)arg1;
- (void)configStyleWithButton:(id)arg1 normalImageName:(id)arg2 selectedImageName:(id)arg3;
- (void)configExpandHitSizeWithButton:(id)arg1;
- (void)updateForTemplateShooting;
- (void)updateForNormalShooting;
- (void)updateForTemplatePanelShowing;
- (void)updateForTemplatePanelDismissing;
- (void)updateForVisagePanelShowing;
- (void)updateForVisagePanelDismissing;
- (void)updateForFlashOn;
- (void)updateForFlashOff;
- (void)updateCountdownTimerButtonStyleWithMode:(unsigned long long)arg1;
- (void)updateRecordingTimerButtonStyleWithMode:(unsigned long long)arg1;
- (void)setFancyButton:(id)arg1;
- (void).cxx_destruct;
@end
