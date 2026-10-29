@interface WCFinderGameLiveAccountCreationRedirectViewController : MMCPUIViewController <WCFinderCreateCoordinatorDelegate>
{
    UIView * _errorIconView; // +0x68
    MMUILabel * _titleLabel; // +0x70
    MMUILabel * _descLabel; // +0x78
    MMUIButton * _createAccountButton; // +0x80
    WCFinderCreateCoordinator * _createCoordinator; // +0x88
    WCFinderLiveStarterReporter * _reporter; // +0x90
}
- (id)init;
- (void)viewDidLoad;
- (void)layoutUI;
- (id)navigationBarBackgroundColor;
- (id)errorIconView;
- (id)titleLabel;
- (id)descLabel;
- (id)createAccountButton;
- (void)onClickCreateAccountButton:(id)arg1;
- (void)onClose;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)setErrorIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setCreateAccountButton:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end

