@interface EcsActionHandler_selectContact : EcsActionHandler_Base <SessionSelectControllerDelegate, EcsGiftSelectGroupMemberViewControllerDelegate>
- (void)handleAction:(id)arg1;
- (void)handleSelectContact:(id)arg1;
- (void)handleSelectGroupMember:(id)arg1;
- (void)onSelectedContactWithUserData:(id)arg1 userData:(id)arg2;
- (id)getSameNicknameTips;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (BOOL)onShouldFilterContact:(id)arg1;
- (BOOL)filterContact:(id)arg1;
@end
