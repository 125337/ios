@interface WCFinderWechatMentionTabPageViewController : WCFinderTabPageViewController
{
    NSMutableArray * _childModelArray; // +0x70
    WCFinderTabPageModel * _likeTabPageModel; // +0x78
    WCFinderTabPageModel * _commentTabPageModel; // +0x80
    unsigned long long _selectedTab; // +0x88
}
- (id)initWithSelectedTabType:(unsigned long long)arg1;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)setUpRightNav;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setupRedDot;
- (void)switchTabPageViewControllerFrom:(id)arg1 to:(id)arg2 isTriggerByUser:(BOOL)arg3;
- (void)clearCurrentTabRedDot;
- (id)childModelArray;
- (id)likeTabPageModel;
- (id)commentTabPageModel;
- (void)onClickMentionSwitchAction;
- (void)setChildModelArray:(id)arg1;
- (void)setLikeTabPageModel:(id)arg1;
- (void)setCommentTabPageModel:(id)arg1;
- (unsigned long long)selectedTab;
- (void)setSelectedTab:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
