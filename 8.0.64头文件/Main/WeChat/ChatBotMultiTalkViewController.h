@interface ChatBotMultiTalkViewController : MultiTalkMainViewController <ChatBotVOIPMainViewelegate>
{
    ChatBotVOIPMainView * _mainView; // +0x80
    ChatBotVoIPRoomInfo * _roomInfo; // +0x88
    MMUIButton * _minimizeButton; // +0x90
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
- (unsigned long long)getRoomId;
- (id)getGroupInfo;
- (id)mainView;
- (void)setMainView:(id)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)minimizeButton;
- (void)setMinimizeButton:(id)arg1;
- (void).cxx_destruct;
@end
