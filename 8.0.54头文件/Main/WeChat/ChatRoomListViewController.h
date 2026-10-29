@interface ChatRoomListViewController : MemberListViewController <WCActionSheetDelegate, IContactMgrExt>
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)showContactInfoView:(id)arg1;
- (void)deleteContact:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didDeleteContact:(id)arg1;
- (BOOL)shouldInteractivePop;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)JumpToChatRoom:(id)arg1;
- (long long)getEditingStyleForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)shouldHideTabbarBeforeSearchBarBecomeActive;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)registerYReportSdk;
@end

