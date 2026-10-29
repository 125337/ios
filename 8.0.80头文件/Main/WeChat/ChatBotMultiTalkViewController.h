@interface ChatBotMultiTalkViewController : MultiTalkMainViewController <ChatBotVOIPMainViewelegate>
{
    ChatBotVoIPSession * _voipSession; // +0x80
    ChatBotVOIPMainView * _mainView; // +0x88
    ChatBotVoIPRoomInfo * _roomInfo; // +0x90
    MMUIButton * _minimizeButton; // +0x98
}
- (id)initWithRoomInfo:(id)arg1;
- (void)initViews;
- (void)layoutMainView;
- (void)initMinimizeButton;
- (void)onMinimizeButtonClick;
- (void)setPanelSpeakerReady:(BOOL)arg1;
- (void)updateGroupInfo:(id)arg1;
- (void)onMultiTalkReady;
- (id)getMainView;
- (void)oonChatBotVOIPMainViewHangup;
- (void)onChatBotVOIPMainViewOpenMic;
- (void)onChatBotVOIPMainViewCloseMic;
- (double)onChatBotVOIPMainViewGetStatusBarHeight;
- (unsigned int)onGetCurrentDeviceStatus;
- (id)getGroupInfo;
- (id)voipSession;
- (void)setVoipSession:(id)arg1;
- (id)mainView;
- (void)setMainView:(id)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)minimizeButton;
- (void)setMinimizeButton:(id)arg1;
- (void).cxx_destruct;
@end
