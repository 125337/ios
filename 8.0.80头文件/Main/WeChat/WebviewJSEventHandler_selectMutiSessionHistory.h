@interface WebviewJSEventHandler_selectMutiSessionHistory : WebviewJSEventHandlerBase <MutiSessionMessageViewControllerDelegate>
{
    JSEvent * _jsEvent; // +0x8
    NSMutableDictionary * _m_selectDict; // +0x10
    NSMutableDictionary * _m_selectDictExtraData; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onDoneButtonClick:(id)arg1 m_selectDictExtraData:(id)arg2;
- (id)processResultWithUser:(id)arg1 msgList:(id)arg2;
- (void)AdjustMsgFromToUserWithChatName:(id)arg1 MsgWrap:(id)arg2 UserName:(id)arg3;
- (id)getContactsFromSelectedUserNames:(id)arg1;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (id)m_selectDict;
- (void)setM_selectDict:(id)arg1;
- (id)m_selectDictExtraData;
- (void)setM_selectDictExtraData:(id)arg1;
- (void).cxx_destruct;
@end
