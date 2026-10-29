@interface BypMsgContentLogicController : BaseMsgContentLogicController
{
    CBaseContact * _realChatContact; // +0x100
    CBaseContact * _myRoleContact; // +0x108
}
- (void)setM_contact:(id)arg1;
- (void)setRealChatContact:(id)arg1;
- (void)setMyRoleContact:(id)arg1;
- (void)layoutVisibleCellsForUpdateContact:(id)arg1;
- (void)configWithSessionId:(id)arg1;
- (void)OpenDetailInfo;
- (void)OpenContactInfo:(id)arg1;
- (id)GetUsrTitle;
- (id)getLeftBarButton;
- (id)getMessageChatContactByMessageWrap:(id)arg1;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (void)AddEmoticonMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AdjustMsgFromToUserWithChatName:(id)arg1 MsgWrap:(id)arg2;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (unsigned int)GetUnReadCount:(id)arg1;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (BOOL)isMsgCanRevoke:(id)arg1;
- (BOOL)CanSendEmoticonMessage;
- (unsigned int)getInputLimitEmotionBufSize;
- (BOOL)CanSendImageMsg:(id)arg1;
- (BOOL)CanSendVideoMsg;
- (BOOL)CanSendOriginalVideo;
- (long long)getLivePhotoMode;
- (id)getMsgSendOpEntry;
- (void)CameraControllerDidTakeVideo:(id)arg1;
- (id)realChatContact;
- (id)myRoleContact;
- (void).cxx_destruct;
@end
