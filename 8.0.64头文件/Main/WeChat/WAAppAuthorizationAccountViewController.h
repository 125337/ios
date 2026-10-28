@interface WAAppAuthorizationAccountViewController : ZZFLEXTableViewController <MMAuthorizeAddAvatarViewControllerDelegate, WCActionSheetDelegate>
{
    WAContact * _contact; // +0x70
    WAAppAuthInfoData * _authInfo; // +0x78
    id /* block */ _updateAction; // +0x80
    WAAppAuthorizationAccountLogic * _logic; // +0x88
}
- (id)initWithContact:(id)arg1 authInfo:(id)arg2;
- (id)init;
- (void)loadView;
- (void)viewDidLoad;
- (void)setContact:(id)arg1;
- (void)setAuthInfo:(id)arg1;
- (void)reloadAccountVCUI;
- (void)onReturn;
- (void)switchAuthState:(unsigned int)arg1 completeAction:(id /* block */)arg2;
- (void)switchAuthState:(unsigned int)arg1 accountId:(unsigned int)arg2 completeAction:(id /* block */)arg3;
- (void)addNewAccount;
- (void)editAccount:(id)arg1;
- (void)deleteAcctount:(id)arg1 adIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)onAddAvatarSuccess:(id)arg1;
- (void)onModAvatarSuccess:(id)arg1;
- (id)contact;
- (id)authInfo;
- (id /* block */)updateAction;
- (void)setUpdateAction:(id /* block */)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (void).cxx_destruct;
@end
