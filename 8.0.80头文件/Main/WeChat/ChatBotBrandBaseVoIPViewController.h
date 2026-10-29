@interface ChatBotBrandBaseVoIPViewController : MMUIViewController <ChatBotBrandVoIPTalkingViewDeleget, IChatBotVoIPSessionDelegate>
{
    BOOL _disableLeftPanGes; // +0x70
    ChatBotVoIPViewControllerContext * _context; // +0x78
    MiniTaskPanGestureHandler * _leftPanPopGestureHandler; // +0x80
    ChatBotBlurImageView * _fakeMainFrameSnapshotView; // +0x88
    UIView * _fakeSnapshotShadowView; // +0x90
    MMUIButton * _fakeSnapshotMaskView; // +0x98
    UIImageView * _backgroundView; // +0xa0
    ChatBotVoIPRoomInfo * _roomInfo; // +0xa8
    ChatBotBrandVoIPTalkingView * _talkingView; // +0xb0
    ChatBotVoIPSession * _voipSession; // +0xb8
}
- (id)init;
- (id)getRoomIdentifier;
- (void)dealloc;
- (void)fetchRoomInfo;
- (void)viewDidLoad;
- (void)initViews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutBackground;
- (void)initNavigationItems;
- (id)getTalkingView;
- (id)getBackgroundView;
- (void)layoutTalkingView;
- (id)genStartSessionParams;
- (BOOL)needWelcomeEvent;
- (id)genAiCarryInfo;
- (void)startSession;
- (void)destroySession;
- (void)closeVCByCallEnd;
- (unsigned int)getChatbotVoIPScene;
- (int)getChatBotVoIPOpenScene;
- (void)interruptAISpeaking;
- (void)onTalkSucc;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractivePop;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)close;
- (double)getContentViewLayoutTop;
- (id)getAIByPassInfo;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onChangeSpecialModel:(id)arg1 modelName:(id)arg2;
- (void)UIManagerDidCloseCompletely;
- (void)multiTalkMgrDidClose;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)disableLeftPanGes;
- (void)setDisableLeftPanGes:(BOOL)arg1;
- (id)leftPanPopGestureHandler;
- (void)setLeftPanPopGestureHandler:(id)arg1;
- (id)fakeMainFrameSnapshotView;
- (void)setFakeMainFrameSnapshotView:(id)arg1;
- (id)fakeSnapshotShadowView;
- (void)setFakeSnapshotShadowView:(id)arg1;
- (id)fakeSnapshotMaskView;
- (void)setFakeSnapshotMaskView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)talkingView;
- (void)setTalkingView:(id)arg1;
- (id)voipSession;
- (void)setVoipSession:(id)arg1;
- (void).cxx_destruct;
@end
