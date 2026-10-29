@interface GameCenterMsgListViewController : GameCenterNativeVc <WCActionSheetDelegate>
{
    unsigned int _sourceScene; // +0x70
    int _msgShowType; // +0x74
    NSString * _focusMsgId; // +0x78
    MMUIButton * _currentTitleButton; // +0x80
    UIView * _indicatorView; // +0x88
    GameCenterMsgListInteractTabViewController * _interactTabVc; // +0x90
    GameCenterMsgListNoticeTabViewController * _noticeTabVc; // +0x98
    GameCenterMsgListBaseTabViewController * _currentTabVc; // +0xa0
    NSIndexPath * _quickJumpIndex; // +0xa8
}
- (id)init;
- (void)viewDidLoad;
- (void)setupForUnreadMessage;
- (void)setupTitleButtons;
- (void)setupMsgManagerEntrance;
- (void)showManagerList:(id)arg1;
- (void)setBadgeViewWithCount:(unsigned long long)arg1 atView:(id)arg2;
- (void)clickTitleLeft:(id)arg1;
- (void)clickTitleRight:(id)arg1;
- (void)setCurrentTitleButton:(id)arg1;
- (void)setCurrentTabVc:(id)arg1;
- (id)interactTabVc;
- (id)noticeTabVc;
- (id)navigationBarBackgroundColor;
- (void)reportObj12909WithPosition:(unsigned int)arg1;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (id)focusMsgId;
- (void)setFocusMsgId:(id)arg1;
- (int)msgShowType;
- (void)setMsgShowType:(int)arg1;
- (id)currentTitleButton;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (void)setInteractTabVc:(id)arg1;
- (void)setNoticeTabVc:(id)arg1;
- (id)currentTabVc;
- (id)quickJumpIndex;
- (void)setQuickJumpIndex:(id)arg1;
- (void).cxx_destruct;
@end
