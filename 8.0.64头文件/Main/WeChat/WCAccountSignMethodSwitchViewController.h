@interface WCAccountSignMethodSwitchViewController : MMPageSheetBaseViewController
{
    id <WCAccountSignMethodSwitchViewControllerDelegate> _delegate; // +0x70
    unsigned long long _signMethod; // +0x78
    unsigned long long _signType; // +0x80
    AppleStyleLoginRegisterButton * _defaultButton; // +0x88
    AppleStyleLoginRegisterButton * _appleButton; // +0x90
    AppleStyleLoginRegisterButton * _facebookButton; // +0x98
    AppleStyleLoginRegisterButton * _passkeyButton; // +0xa0
    UILabel * _separatorTextLabel; // +0xa8
    UIView * _separatorLineView; // +0xb0
}
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)configPageSheet;
- (void)configDetailView;
- (void)updateContent;
- (void)updateDetailViewLayout:(id)arg1;
- (void)setSignType:(unsigned long long)arg1;
- (void)setSignMethod:(unsigned long long)arg1;
- (void)onTapDefaultButton;
- (void)onTapAppleButton;
- (void)onTapFacebookButton;
- (void)onTapPasskeyButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)signMethod;
- (unsigned long long)signType;
- (id)defaultButton;
- (void)setDefaultButton:(id)arg1;
- (id)appleButton;
- (void)setAppleButton:(id)arg1;
- (id)facebookButton;
- (void)setFacebookButton:(id)arg1;
- (id)passkeyButton;
- (void)setPasskeyButton:(id)arg1;
- (id)separatorTextLabel;
- (void)setSeparatorTextLabel:(id)arg1;
- (id)separatorLineView;
- (void)setSeparatorLineView:(id)arg1;
- (void).cxx_destruct;
@end
