@interface CBTDoppelViewController : ChatBotBaseVoIPViewController <IChatBotAvatarUpdateExt, CBTDramaHistoryDelegate, ICBTMomentExt>
{
    BOOL _isClickClose; // +0x70
    unsigned int _scene; // +0x74
    int _curRoomMode; // +0x78
    MemoryMappedKV * _mmkv; // +0x80
}
- (void)commonInit;
- (void)dealloc;
- (id)initWithScene:(unsigned int)arg1;
- (id)doppelTalkingView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (unsigned int)getChatbotVoIPScene;
- (void)setLeftPanPopGestureHandler:(id)arg1;
- (void)fetchRoomInfo;
- (int)getOpenScene;
- (void)checkNeedModHeadImage;
- (id)genStartSessionParams;
- (BOOL)needWelcomeEvent;
- (id)genAiCarryInfo;
- (void)layoutBackground;
- (void)layoutTalkingView;
- (void)initViews;
- (void)changeRoomMode:(int)arg1;
- (int)getCurrRoomMode;
- (void)boardViewHitTest:(id)arg1;
- (void)openSettingPage;
- (void)onHeadImageClick;
- (void)close;
- (void)enterCBTDramaHistory:(long long)arg1 dramaItems:(id)arg2;
- (void)dramaHistorySelect:(long long)arg1;
- (void)onStarBtnClick;
- (BOOL)needShowTraceRedDot;
- (void)resetTraceRedDot;
- (void)saveStarCount:(unsigned int)arg1;
- (void)onUpdateAvatar:(id)arg1;
- (BOOL)shouldMiniInteractiveTransitionReceiveTouch:(id)arg1 PanGesture:(id)arg2;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (int)curRoomMode;
- (void)setCurRoomMode:(int)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (BOOL)isClickClose;
- (void)setIsClickClose:(BOOL)arg1;
- (void).cxx_destruct;
@end
