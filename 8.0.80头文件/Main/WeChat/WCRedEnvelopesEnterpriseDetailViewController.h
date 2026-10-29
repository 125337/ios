@interface WCRedEnvelopesEnterpriseDetailViewController : WCRedEnvelopesBaseViewController <WebAddContactDelegate, IZCWScrollNumViewDelegate, UITableViewDelegate, UITableViewDataSource, WCRedEnvelopesCommentInputToolViewDelegate>
{
    id <WCRedEnvelopesEnterpriseDetailViewControllerDelegate> m_delegate; // +0x90
    BOOL m_loadingMoreOrderList; // +0x98
    MMTableView * m_tableView; // +0xa0
    BOOL m_bDidBack; // +0xa8
    WCUITextField * m_oWishingTextField; // +0xb0
    UIView * m_oHeaderView; // +0xb8
    WCRedEnvelopesCommentInputToolView * oWCRedEnvelopesCommentInputToolView; // +0xc0
    UIView * oMsgAnimationView; // +0xc8
    UIView * oMoneyAnimationView; // +0xd0
    UIView * oTableAnimationView; // +0xd8
    UIView * oTopHeaderView; // +0xe0
    UIView * oNavigationBarView; // +0xe8
    UIImageView * commentImageView; // +0xf0
    UIButton * commentButton; // +0xf8
    BOOL m_bEnterpriseRedEnvelopes; // +0x100
    BOOL _bypassSafeAreaWrapForOpenAnimation; // +0x101
    int enWCRedEnvelopesEnterpriseDetailViewControllerScene; // +0x104
    unsigned int m_uiStatFromScene; // +0x108
    ContactUpdateHelper * _m_senderNickNameHelper; // +0x110
}
- (BOOL)shouldWrapViewWithSafeArea;
- (id)init;
- (void)dealloc;
- (BOOL)showSmallShareButton;
- (void)initNavigationBar;
- (BOOL)useTransparentNavibar;
- (void)OnLeftBarButtonDone;
- (void)OnLeftBarButtonDoneLogic;
- (void)OnRealnameVerfitySuccess:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)loadMoreOrderList;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldSyncBackgroundColorToExtendedContentView;
- (void)initContainerView;
- (id)genNumView;
- (CGRect)getFinalBoundsForDetailView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)statExpourseOperation;
- (id)getBottomView;
- (id)getNoMoreBottomView;
- (void)initTableView;
- (id)getAnimationView:(id)arg1;
- (id)GetNavigationBarViewHeader:(id)arg1;
- (id)GetViewHeader:(id)arg1;
- (id)GetHeaderView:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)commentRedEnvelopes;
- (void)gotoBalanceDetail;
- (void)gotoUrl;
- (void)reportChangeLinkClick:(unsigned int)arg1 Url:(id)arg2;
- (void)handleRedEnvelopesOperation:(id)arg1;
- (void)handleTailOperation;
- (void)watchMyRedEnvelopesList;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)SendTextMessageToolView:(id)arg1;
- (void)OnToolViewDissmiss;
- (void)startOpenAnimation;
- (void)animationForLabel;
- (void)setLeftCloseBarButton;
- (void)setEnWCRedEnvelopesEnterpriseDetailViewControllerScene:(int)arg1;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)OnWebAddContactReturn;
- (id)currentViewController;
- (int)enWCRedEnvelopesEnterpriseDetailViewControllerScene;
- (BOOL)m_bEnterpriseRedEnvelopes;
- (void)setM_bEnterpriseRedEnvelopes:(BOOL)arg1;
- (unsigned int)m_uiStatFromScene;
- (void)setM_uiStatFromScene:(unsigned int)arg1;
- (BOOL)bypassSafeAreaWrapForOpenAnimation;
- (void)setBypassSafeAreaWrapForOpenAnimation:(BOOL)arg1;
- (id)m_senderNickNameHelper;
- (void)setM_senderNickNameHelper:(id)arg1;
- (void).cxx_destruct;
@end
