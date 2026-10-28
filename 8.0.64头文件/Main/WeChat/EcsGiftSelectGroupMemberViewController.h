@interface EcsGiftSelectGroupMemberViewController : EcsGiftContactSelectListBaseViewController <EcsGiftContactSelectListBaseViewControllerDelegate>
{
    NSObject * _userData; // +0x70
    id <EcsGiftSelectGroupMemberViewControllerDelegate> _delegate; // +0x78
}
- (void)viewDidLoad;
- (void)leftBarbuttonClick;
- (void)viewWillAppear:(BOOL)arg1;
- (id)getChatroomContact;
- (id)getReloadContactDataList;
- (void)onSelectedOrCancelContact:(id)arg1 isSelected:(BOOL)arg2;
- (void)realCallbackSelectContact:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
