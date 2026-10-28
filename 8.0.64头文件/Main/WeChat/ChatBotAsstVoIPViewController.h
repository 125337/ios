@interface ChatBotAsstVoIPViewController : ChatBotBaseVoIPViewController <ChatBotAsstDiscoverViewDelegate, ChatBotAsstSocialHistoryOptionalDelegate>
{
    BOOL _needAutoEnterHistoryPage; // +0x70
    BOOL _historyTalkedCountFlag; // +0x71
    unsigned int _scene; // +0x74
    int _curRoomMode; // +0x78
    unsigned int _socialType; // +0x7c
    MemoryMappedKV * _mmkv; // +0x80
    GetBotChatHistoryResponse_ActiveChat * _activeSocialRoom; // +0x88
    ChatBotAsstSocialHistoryDataController * _historyDataController; // +0x90
}
- (void)commonInit;
- (id)initWithScene:(unsigned int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (unsigned int)getChatbotVoIPScene;
- (void)setNeedAutoEnterHistoryPage:(BOOL)arg1;
- (void)fetchRoomInfo;
- (void)checkNeedModHeadImage;
- (id)genJoinRoomParams;
- (BOOL)isInSocialMode;
- (void)layoutTalkingView;
- (void)changeRoomMode:(int)arg1;
- (int)getCurrRoomMode;
- (void)openSelectHeadImagePage;
- (void)onHeadImageClick;
- (void)enterAsstDiscoverPage;
- (void)enterAsstDiscoverPageWithCompletion:(id /* block */)arg1;
- (BOOL)needShowMultiHeadImageRow;
- (id)getMemberListForMultiHeadImagRow;
- (void)close;
- (void)enterSocialHistoryPage;
- (unsigned int)getAsstSocialType;
- (unsigned int)getActiveSocialRoomCount;
- (void)fetchTalkingSocialHistory:(id /* block */)arg1;
- (void)beginTalkWithOtherAsstWithRoomInfo:(id)arg1;
- (id)getHistoryDataController;
- (void)enterMyAsstSocialRoomWithGroupId:(id)arg1 activeSocialRoom:(id)arg2;
- (void)onTalkingSocialRoomCountUpdate:(unsigned int)arg1;
- (void)onHistoryTalkedCountUpdate:(unsigned int)arg1;
- (id)getLocalSessionIdArray;
- (void)cacheSessionIdArray:(id)arg1;
- (void)getSocialUserHistoryList:(id /* block */)arg1;
- (void)onStarBtnClick;
- (BOOL)hasStarCountUpdate;
- (void)saveStarCount:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)needAutoEnterHistoryPage;
- (int)curRoomMode;
- (void)setCurRoomMode:(int)arg1;
- (BOOL)historyTalkedCountFlag;
- (void)setHistoryTalkedCountFlag:(BOOL)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (unsigned int)socialType;
- (void)setSocialType:(unsigned int)arg1;
- (id)activeSocialRoom;
- (void)setActiveSocialRoom:(id)arg1;
- (id)historyDataController;
- (void)setHistoryDataController:(id)arg1;
- (void).cxx_destruct;
@end
