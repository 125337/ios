@interface ChatBotMultiTalkMiniInAppView : MultitalkMiniInAppView <ChatBotVoIPMiniInAppViewDelegate>
{
    ChatBotVoIPRoomInfo * _roomInfo; // +0x8
    ChatBotVoIPMiniInAppView * _chatBotMiniView; // +0x10
    id /* block */ _autoResetTalkingInfoBlock; // +0x18
}
- (id)initWithRoomInfo:(id)arg1;
- (id)getVoiceInputView;
- (void)dealloc;
- (void)cancelAutoResetTalkingInfoBlock;
- (void)setupTalkingInfo:(id)arg1;
- (void)onMiniInAppViewOnMainAreaClick;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)chatBotMiniView;
- (void)setChatBotMiniView:(id)arg1;
- (id /* block */)autoResetTalkingInfoBlock;
- (void)setAutoResetTalkingInfoBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
