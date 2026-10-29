@interface SelectContactFromChatRoomViewController : MultiSelectContactsViewController <RoomContactSelectDelegate, SelectContactFromChatRoomSelectListViewControllerDelegate, UITextFieldDelegate>
{
    id <SelectContactFromChatRoomViewControllerDelegate> _m_selectContactDelegate; // +0xe8
    NSMutableArray * _arrSelectContactFromChatRoom; // +0xf0
}
- (void)viewDidLoad;
- (void)updatePanelBtn;
- (void)openChatRoomContactList:(id)arg1;
- (void)didSearchControllerSelectContact:(id)arg1 indexPath:(id)arg2;
- (Class)getContactSelectViewClass;
- (void)modifySearchController:(id)arg1;
- (void)onSelectedContactResult:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)m_selectContactDelegate;
- (void)setM_selectContactDelegate:(id)arg1;
- (id)arrSelectContactFromChatRoom;
- (void)setArrSelectContactFromChatRoom:(id)arg1;
- (void).cxx_destruct;
@end
