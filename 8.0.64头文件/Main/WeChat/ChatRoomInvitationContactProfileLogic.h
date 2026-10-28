@interface ChatRoomInvitationContactProfileLogic : NSObject <WeixinContactInfoExt, OpenIMContactInfoExt>
{
    CContact * _roomContact; // +0x8
    id <MMUIViewControllerDelegate> _delegate; // +0x10
    CMessageWrap * _currentInvitationMsg; // +0x18
}
- (id)initWithRoomContact:(id)arg1 delegate:(id)arg2;
- (void)openContactProfile:(id)arg1 fromInvitationMsg:(id)arg2;
- (id)updateContactsAndGetInviterContactForInvitationMsg:(id)arg1;
- (void)onCheckDisableAllOperation:(id)arg1 Disable:(BOOL *)arg2;
- (id)roomContact;
- (void)setRoomContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentInvitationMsg;
- (void)setCurrentInvitationMsg:(id)arg1;
- (void).cxx_destruct;
@end
