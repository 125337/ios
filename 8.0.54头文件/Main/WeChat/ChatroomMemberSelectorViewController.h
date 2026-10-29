@interface ChatroomMemberSelectorViewController : ContactSelectorViewController
{
    CContact * _chatroomContact; // +0x68
    NSString * _customizedTitle; // +0x70
}
- (id)initWithChatroomContact:(id)arg1 selectedContacts:(id)arg2;
- (id)initWithChatroomContact:(id)arg1 selectedContacts:(id)arg2 filterHandler:(id /* block */)arg3;
- (void)loadTitle;
- (void)viewDidLoad;
- (id)headerTitleInSection:(long long)arg1;
- (id)chatroomContact;
- (id)customizedTitle;
- (void)setCustomizedTitle:(id)arg1;
- (void).cxx_destruct;
@end

