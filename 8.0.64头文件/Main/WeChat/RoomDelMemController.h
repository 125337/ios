@interface RoomDelMemController : NSObject <WCActionSheetDelegate, ChatroomMemberRemoveViewControllerDelegate, IOplogExt>
{
    CContact * _contact; // +0x8
    MMUIViewController * _weakViewController; // +0x10
    id <RoomDelMemControllDelegate> _delegate; // +0x18
    RoomHistoryContext * _historyContext; // +0x20
}
- (id)initWithViewController:(id)arg1 roomContact:(id)arg2 historyContext:(id)arg3;
- (void)updateContact:(id)arg1;
- (void)delChatRoomMemberFromInvitation:(id)arg1;
- (void)handleRevokeInvitation:(id)arg1 revokeHistory:(BOOL)arg2;
- (void)deleteSingleUsr:(id)arg1 message:(id)arg2 revokeHistory:(BOOL)arg3;
- (void)callRevokeHistoryThenRemoveMember:(id)arg1 message:(id)arg2;
- (void)removeChatRoomMember:(id)arg1 scene:(unsigned long long)arg2;
- (void)handleRevokeHistoryRecord:(id)arg1 usrname:(id)arg2;
- (void)handleRevokeHistoryFail:(id)arg1 failMsg:(id)arg2 operUsr:(id)arg3;
- (void)handleRevokeHistorySuccessForUsr:(id)arg1;
- (void)onDelUsrs:(id)arg1 success:(BOOL)arg2;
- (void)showLoadingWithText:(id)arg1;
- (void)stopLoadingAndShowOkWithText:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onChatroomMemberRemoveViewCancel;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)historyContext;
- (void)setHistoryContext:(id)arg1;
- (void).cxx_destruct;
@end
