@interface WCRedEnvelopesWelcomePageViewController : WCRedEnvelopesBaseViewController
{
    id <WCRedEnvelopesWelcomePageViewControllerDelegate> m_delegate; // +0x88
    BOOL m_bDidBack; // +0x90
    WCRedEnvelopesWelcomePageLayout * _m_layout; // +0x98
}
- (id)init;
- (BOOL)useTransparentNavibar;
- (void)updateNavigationBarWithFlag:(unsigned int)arg1;
- (void)initNavigationBar;
- (void)OnLeftBarButtonDone;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)OnClickHeadActivity;
- (void)OnClickTailActivity;
- (void)OnClickBannerActivity;
- (void)setDelegate:(id)arg1;
- (id)m_layout;
- (void)setM_layout:(id)arg1;
- (void).cxx_destruct;
@end

