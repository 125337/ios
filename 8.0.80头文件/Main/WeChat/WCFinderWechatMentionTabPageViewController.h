@interface WCFinderWechatMentionTabPageViewController : WCFinderTabPageViewController <WCFinderWechatMentionVCDelegate, WCFinderRedDotExt>
{
    BOOL _likeTabUsesNormalRedDot; // +0x70
    BOOL _commentTabUsesNormalRedDot; // +0x71
    NSMutableArray * _childModelArray; // +0x78
    WCFinderTabPageModel * _likeTabPageModel; // +0x80
    WCFinderTabPageModel * _commentTabPageModel; // +0x88
    long long _selectedTab; // +0x90
    unsigned long long _unreadLikeCount; // +0x98
    unsigned long long _unreadCommentCount; // +0xa0
    NSString * _likeRedDotEventToken; // +0xa8
    NSString * _commentRedDotEventToken; // +0xb0
}
- (id)initWithSelectedTabType:(long long)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)setUpRightNav;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)loadUnreadCount;
- (void)setupRedDotUnreadCount;
- (void)setupRedDot;
- (void)switchTabPageViewControllerFrom:(id)arg1 to:(id)arg2 isTriggerByUser:(BOOL)arg3;
- (void)wechatMentionVC:(id)arg1 didUpdateRedDotUnreadCount:(unsigned long long)arg2 forTabType:(long long)arg3;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3 toCtrlInfo:(id)arg4 disposePath:(id)arg5;
- (void)handleRedDotRevokedAtPathIfEmpty:(id)arg1;
- (void)updateRedDotUnreadCount:(unsigned long long)arg1 forTabType:(long long)arg2;
- (void)setTabRedDotForType:(long long)arg1 unreadCount:(unsigned long long)arg2 usesNormalRedDot:(BOOL)arg3;
- (void)clearRedDotStateForTabType:(long long)arg1;
- (long long)tabTypeForRedDotPath:(id)arg1;
- (id)redDotEventTokenWithShowInfo:(id)arg1;
- (id)childModelArray;
- (id)likeTabPageModel;
- (id)commentTabPageModel;
- (void)onClickMentionSwitchAction;
- (void)setChildModelArray:(id)arg1;
- (void)setLikeTabPageModel:(id)arg1;
- (void)setCommentTabPageModel:(id)arg1;
- (long long)selectedTab;
- (void)setSelectedTab:(long long)arg1;
- (unsigned long long)unreadLikeCount;
- (void)setUnreadLikeCount:(unsigned long long)arg1;
- (unsigned long long)unreadCommentCount;
- (void)setUnreadCommentCount:(unsigned long long)arg1;
- (BOOL)likeTabUsesNormalRedDot;
- (void)setLikeTabUsesNormalRedDot:(BOOL)arg1;
- (BOOL)commentTabUsesNormalRedDot;
- (void)setCommentTabUsesNormalRedDot:(BOOL)arg1;
- (id)likeRedDotEventToken;
- (void)setLikeRedDotEventToken:(id)arg1;
- (id)commentRedDotEventToken;
- (void)setCommentRedDotEventToken:(id)arg1;
- (void).cxx_destruct;
@end
