@interface GameLifeChatViewControllerV3 : GCReportBaseVc <IGameCenterMsgNotifyExt>
{
    BOOL _isInTab; // +0x70
    unsigned int _sourceScene; // +0x74
    NSString * _focusMsgId; // +0x78
    double _tabbarHeight; // +0x80
    unsigned long long _selectTab; // +0x88
    MMUIButton * _currentTitleButton; // +0x90
    UIView * _indicatorView; // +0x98
    GameCenterMsgListInteractTabViewController * _interactTabVc; // +0xa0
    MMUIViewController * _chatVc; // +0xa8
    MMUIViewController * _currentTabVc; // +0xb0
    MMUIButton * _tabButtonLeft; // +0xb8
    MMUIButton * _tabButtonRight; // +0xc0
}
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)dealloc;
- (void)unregisterExtension;
- (void)determinDefaultSelectTab;
- (void)chooseTab:(unsigned long long)arg1;
- (void)chooseTab:(unsigned long long)arg1 isInit:(BOOL)arg2;
- (void)setupTitleButtons;
- (void)onGameCenterMessageRedPointInfoChange:(id)arg1;
- (void)updateMessageRedPoint;
- (void)setBadgeViewWithCount:(unsigned long long)arg1 hasRedDot:(BOOL)arg2 atView:(id)arg3;
- (void)clickTitleLeft:(id)arg1;
- (void)clickTitleRight:(id)arg1;
- (void)setCurrentTitleButton:(id)arg1 isInit:(BOOL)arg2;
- (void)setCurrentTabVc:(id)arg1;
- (id)chatVc;
- (id)interactTabVc;
- (double)visableHeight;
- (id)navigationBarBackgroundColor;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (id)focusMsgId;
- (void)setFocusMsgId:(id)arg1;
- (BOOL)isInTab;
- (void)setIsInTab:(BOOL)arg1;
- (double)tabbarHeight;
- (void)setTabbarHeight:(double)arg1;
- (unsigned long long)selectTab;
- (void)setSelectTab:(unsigned long long)arg1;
- (id)currentTitleButton;
- (void)setCurrentTitleButton:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (void)setInteractTabVc:(id)arg1;
- (void)setChatVc:(id)arg1;
- (id)currentTabVc;
- (id)tabButtonLeft;
- (void)setTabButtonLeft:(id)arg1;
- (id)tabButtonRight;
- (void)setTabButtonRight:(id)arg1;
- (void).cxx_destruct;
@end
