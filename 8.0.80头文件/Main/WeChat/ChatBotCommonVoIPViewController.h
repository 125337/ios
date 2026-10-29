@interface ChatBotCommonVoIPViewController : ChatBotBaseVoIPViewController <ChatBotVOIPMainViewelegate>
{
    ChatBotVOIPMainView * _mainView; // +0x70
}
- (id)initWithRoomInfo:(id)arg1;
- (void)fetchRoomInfo;
- (void)viewDidAppear:(BOOL)arg1;
- (void)layoutTalkingView;
- (id)genStartSessionParams;
- (int)getOpenScene;
- (void)startSession;
- (BOOL)shouldInteractivePop;
- (double)onChatBotVOIPMainViewGetStatusBarHeight;
- (void)oonChatBotVOIPMainViewHangup;
- (void)onChatBotVOIPMainViewChangeVideoMode:(BOOL)arg1;
- (id)getVideoPreviewView;
- (void)onChatBotVOIPMainViewFlipCamera;
- (id)mainView;
- (void)setMainView:(id)arg1;
- (void).cxx_destruct;
@end
