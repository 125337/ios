@interface CBTAsstContentLogicController : BaseMsgContentLogicController <ISendMessageExt, addContactToChatRoomDelegate>
{
    BOOL _isProcessing; // +0x108
}
- (void)Register;
- (void)UnRegister;
- (void)initViewController;
- (void)ViewWillAppear;
- (void)checkAddFriend;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)getMsgFromLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3 limit:(unsigned int)arg4;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)clearAllMsg;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)getMsgSendOpEntry;
- (BOOL)CanSendImageMsg:(id)arg1;
- (BOOL)CanSendVoiceMsg;
- (BOOL)isMsgCanRevoke:(id)arg1;
- (BOOL)CanLongPressHeadImage;
- (BOOL)isShowHeadImage:(id)arg1;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (id)GetTitleTailImageView;
- (id)getSubTitle;
- (id)GetRightBarButtonTitle;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenContactInfo:(id)arg1 andScene:(unsigned int)arg2;
- (void)deleteAllMsgByContact:(id)arg1;
- (void)OpenDetailInfo;
- (void)newMessageFromAddContactToChatRoom:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (id)GetChatContact;
- (void)OnMsgSendSuccess:(id)arg1;
- (void)OnSendMessageSuccess:(id)arg1;
- (id)GetUsrTitle;
- (void)checkProcessingState;
- (double)maxProcessingTimeInterval;
- (void)updateTitle;
- (void)resetProcessingState;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)mainSwitch_shouldHandleAppmsg;
- (void)onModifyContact:(id)arg1;
- (BOOL)isProcessing;
- (void)setIsProcessing:(BOOL)arg1;
@end
