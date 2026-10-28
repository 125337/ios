@interface WCFinderNotifyCenterTabPageVC : WCFinderTabPageViewController
{
    BOOL _showMentionSwitchEntry; // +0x70
    WCFinderRedDotTipsShowInfo * _rightEntryRedDotShowInfo; // +0x78
    WCFinderContact * _authorContact; // +0x80
    NSArray * _childModelArray; // +0x88
    long long _unreadLikeCount; // +0x90
    long long _unreadCommentCount; // +0x98
    long long _unreadNotifyCount; // +0xa0
    long long _unreadFollowCount; // +0xa8
    double _enterTime; // +0xb0
    WCFinderRedDotCtrlInfo * _redDotCtrlInfo; // +0xb8
}
- (id)initWithContact:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)setUpRightNav;
- (void)loadUnreadCount;
- (void)loadChildTabModel;
- (id)createTabModelWithTabType:(unsigned long long)arg1 tabTitle:(id)arg2 bindRedDotPath:(id)arg3;
- (unsigned long long)defaultSelectType;
- (void)setupRedDot;
- (void)setTabRedDotForType:(unsigned long long)arg1 unreadCount:(unsigned long long)arg2;
- (void)switchTabPageViewControllerFrom:(id)arg1 to:(id)arg2 isTriggerByUser:(BOOL)arg3;
- (void)configureTabPageHeaderView:(id)arg1;
- (void)onClickMentionSwitchAction;
- (unsigned long long)tabIndexWithTabType:(unsigned long long)arg1;
- (id)rightEntryRedDotShowInfo;
- (void)setRightEntryRedDotShowInfo:(id)arg1;
- (id)authorContact;
- (void)setAuthorContact:(id)arg1;
- (id)childModelArray;
- (void)setChildModelArray:(id)arg1;
- (long long)unreadLikeCount;
- (void)setUnreadLikeCount:(long long)arg1;
- (long long)unreadCommentCount;
- (void)setUnreadCommentCount:(long long)arg1;
- (long long)unreadNotifyCount;
- (void)setUnreadNotifyCount:(long long)arg1;
- (long long)unreadFollowCount;
- (void)setUnreadFollowCount:(long long)arg1;
- (double)enterTime;
- (void)setEnterTime:(double)arg1;
- (BOOL)showMentionSwitchEntry;
- (void)setShowMentionSwitchEntry:(BOOL)arg1;
- (id)redDotCtrlInfo;
- (void)setRedDotCtrlInfo:(id)arg1;
- (void).cxx_destruct;
@end
