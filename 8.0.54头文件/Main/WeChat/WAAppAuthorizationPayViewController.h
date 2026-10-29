@interface WAAppAuthorizationPayViewController : ZZFLEXTableViewController
{
    WAContact * _contact; // +0x68
    WAAppAuthInfoData * _authInfo; // +0x70
    id /* block */ _updateAction; // +0x78
}
- (id)initWithContact:(id)arg1 authInfo:(id)arg2;
- (id)init;
- (void)loadView;
- (void)viewDidLoad;
- (void)onReturn;
- (void)reloadPayVCUI;
- (void)switchAuthState:(unsigned int)arg1 completeAction:(id /* block */)arg2;
- (BOOL)judgeRiskControlInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id /* block */)updateAction;
- (void)setUpdateAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

