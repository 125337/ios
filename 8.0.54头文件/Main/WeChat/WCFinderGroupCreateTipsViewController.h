@interface WCFinderGroupCreateTipsViewController : MMUIViewController <WCFinderCreateGroupViewControllerDelegate>
{
    CContact * _chatRoomContact; // +0x68
}
- (id)initWithChatRoomContact:(id)arg1;
- (void)viewDidLoad;
- (id)subTipsViewWithTitle:(id)arg1 desc:(id)arg2;
- (id)navigationBarBackgroundColor;
- (void)createGroupContact;
- (void)clickBindMasterAction;
- (void)createUserClosed;
- (void)createUserFinished:(id)arg1;
- (id)chatRoomContact;
- (void)setChatRoomContact:(id)arg1;
- (void).cxx_destruct;
@end

