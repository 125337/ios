@interface ChatBotAsstVoIPViewController : ChatBotBaseVoIPViewController <ChatBotAsstDiscoverViewDelegate, ChatBotAsstSocialHistoryOptionalDelegate, IChatBotAvatarUpdateExt, ICBTMomentExt, CBTDramaHistoryDelegate>
{
    BOOL _needAutoEnterHistoryPage; // +0x70
    BOOL _historyTalkedCountFlag; // +0x71
    BOOL _isClickClose; // +0x72
    unsigned int _scene; // +0x74
    int _curRoomMode; // +0x78
    unsigned int _socialType; // +0x7c
    NSString * _videoUrl; // +0x80
    MemoryMappedKV * _mmkv; // +0x88
    GetBotChatHistoryResponse_ActiveChat * _activeSocialRoom; // +0x90
    ChatBotAsstSocialHistoryDataController * _historyDataController; // +0x98
    WCPlayerConfigControlView * _videoControlView; // +0xa0
    WCPlayerView * _videoView; // +0xa8
}
- (void)commonInit;
- (void)dealloc;
- (id)initWithScene:(unsigned int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (unsigned int)getChatbotVoIPScene;
- (void)setNeedAutoEnterHistoryPage:(BOOL)arg1;
- (void)fetchRoomInfo;
- (int)getOpenScene;
- (void)checkNeedModHeadImage;
- (id)genStartSessionParams;
- (BOOL)needWelcomeEvent;
- (id)genAiCarryInfo;
- (BOOL)isInSocialMode;
- (void)layoutBackground;
- (void)setUpVideoView;
- (id)createPlayerInfoFromMediaWrap:(id)arg1;
- (void)layoutTalkingView;
- (void)initViews;
- (void)changeRoomMode:(int)arg1;
- (int)getCurrRoomMode;
- (void)boardViewHitTest:(id)arg1;
- (void)openSettingPage;
- (void)onHeadImageClick;
- (void)enterAsstDiscoverPage;
- (void)enterAsstDiscoverPageWithCompletion:(id /* block */)arg1;
- (BOOL)needShowMultiHeadImageRow;
- (id)getMemberListForMultiHeadImagRow;
- (void)close;
- (void)enterSocialHistoryPage;
- (void)enterCBTDramaHistory:(long long)arg1 dramaItems:(id)arg2;
- (unsigned int)getAsstSocialType;
- (unsigned int)getActiveSocialRoomCount;
- (void)dramaHistorySelect:(long long)arg1;
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
- (void)onUpdateAvatar:(id)arg1;
- (void)onLoadMoments:(int)arg1 momentModel:(id)arg2 isFirstLoad:(BOOL)arg3 cursorId:(id)arg4;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)needAutoEnterHistoryPage;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
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
- (id)videoControlView;
- (void)setVideoControlView:(id)arg1;
- (id)videoView;
- (void)setVideoView:(id)arg1;
- (BOOL)isClickClose;
- (void)setIsClickClose:(BOOL)arg1;
- (void).cxx_destruct;
@end
