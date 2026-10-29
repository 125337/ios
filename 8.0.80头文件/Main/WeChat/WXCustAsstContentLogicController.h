@interface WXCustAsstContentLogicController : BypMsgContentLogicController <WeClawBotStatusRequestDelegate, IMsgExt>
{
    BOOL _fromCustAsstManage; // +0xda
    BOOL _isWeClawOffline; // +0xdb
    WeClawBotStatusRequest * _statusRequest; // +0xe0
}
- (void)setM_contact:(id)arg1;
- (void)setM_dicExtraInfo:(id)arg1;
- (void)ViewWillDisappear;
- (void)ViewDidInit;
- (id)getDefaultTitleTailSubViews;
- (id)GetTitleTailImageView;
- (void)checkAndFetchContactIfNeeded;
- (void)OpenContactInfo:(id)arg1;
- (BOOL)canShowChatRoomInfo;
- (void)OpenDetailInfo;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)deleteAllMsgByContact:(id)arg1;
- (BOOL)isShowHeadImage:(id)arg1;
- (double)selectFlagCenterYForMessage:(id)arg1 viewModel:(id)arg2;
- (BOOL)CanSendVoiceMsg;
- (BOOL)CanSendImageMsg:(id)arg1;
- (BOOL)CanSendVideoMsg;
- (id)getMsgSendOpEntry;
- (BOOL)mainSwitch_shouldHandleAppmsg;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)fromCustAsstManage;
- (void)setFromCustAsstManage:(BOOL)arg1;
- (BOOL)isWeClawOffline;
- (void)setIsWeClawOffline:(BOOL)arg1;
- (id)statusRequest;
- (void)setStatusRequest:(id)arg1;
- (void).cxx_destruct;
@end
