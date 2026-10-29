@interface WCFinderProfilePrivateViewModel : WCFinderStreamProfilePageModel
{
    UIImage * _errorIcon; // +0x8
    NSString * _errorTips; // +0x10
}
- (id)displayName;
- (BOOL)displayPrivateAccount;
- (BOOL)displayAccountBlocked;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (id)errorIcon;
- (id)errorTips;
- (void)setErrorIcon:(id)arg1;
- (void)setErrorTips:(id)arg1;
- (void).cxx_destruct;
@end
