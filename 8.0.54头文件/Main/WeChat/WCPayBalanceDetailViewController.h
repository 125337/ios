@interface WCPayBalanceDetailViewController : WCPayBaseViewController <WCPayFreezeBalanceMsgNotify, WCPayRealNameTipsViewControllerDelegate, WCPayNoticeBannerDelegate, MMWebViewDelegate, WCActionSheetDelegate, ILinkEventExt>
{
    WCActionSheet * m_actionSheet; // +0x90
    id <WCPayBalanceDetailViewControllerDelegate> m_delegate; // +0x98
    RichTextView * richTextView; // +0xa0
    BOOL m_bDidPoped; // +0xa8
    NSDictionary * m_dicBanners; // +0xb0
    BOOL _hasShowBalanceUpgrade; // +0xb8
    UIView * _lqpEntranceLine; // +0xc0
    UIButton * _lqpEntranceButton; // +0xc8
    UIView * _containerView; // +0xd0
    UIView * _headerView; // +0xd8
    UIView * _bannerContainer; // +0xe0
    WCPayNoticeItemView * _banner; // +0xe8
    UIImageView * _logoView; // +0xf0
    UILabel * _balanceTitleLabel; // +0xf8
    UIView * _moneyContainerView; // +0x100
    TimeoutNumber * _timeoutNumber; // +0x108
    UIButton * _freezeButton; // +0x110
    WCPayWebImageView * _freezeButtonIcon; // +0x118
    UILabel * _freezeButtonLabel; // +0x120
    WCPayWebImageView * _freezeButtonArrow; // +0x128
    MMUIButton * _lqtEntryButton; // +0x130
    UIImageView * _lqtEntryButtonArrow; // +0x138
    UIImageView * _lqtEntryButtonMask; // +0x140
    UIView * _footerView; // +0x148
    UIButton * _saveButton; // +0x150
    UIButton * _fetchButton; // +0x158
    UIButton * _realnameButton; // +0x160
    UILabel * _realnameButtonLabel; // +0x168
    UIImageView * _realnameButtonArrow; // +0x170
    UIButton * _lctButton; // +0x178
    UIImageView * _lctButtonIcon; // +0x180
    UILabel * _lctButtonLabel; // +0x188
    UIImageView * _lctButtonArrow; // +0x190
    UIView * _qaContainerView; // +0x198
    MMUIButton * _qaButton; // +0x1a0
    MMUIButton * _upgradeButton; // +0x1a8
    UIView * _upgradeLine; // +0x1b0
    UILabel * _brandLabel; // +0x1b8
}
- (void)updateView;
- (void)updateHeaderView;
- (void)updateBannerContainer;
- (BOOL)shouldShowBanner;
- (void)updateBanner;
- (void)updateLogoView;
- (void)updateBalanceTitleLabel;
- (void)updateMoneyContainerView;
- (void)updateTimeoutNumber;
- (BOOL)shouldShowFreezeButton;
- (void)updateFreezeButton;
- (void)updateFreezeButtonIcon;
- (void)updateFreezeButtonLabel;
- (void)updateFreezeButtonArrow;
- (BOOL)shouldShowLqtEntryButton;
- (void)updateLqtEntryButton;
- (void)updateLqtEntryButtonMask;
- (void)updateLqtEntryButtonArrow;
- (void)updateFooterView;
- (void)updateSaveButton;
- (BOOL)shouldShowFetchButton;
- (void)updateFetchButton;
- (BOOL)shouldShowRealnameButton;
- (void)updateRealnameButton;
- (void)updateRealnameButtonLabel;
- (void)updateRealnameButtonArrow;
- (BOOL)shouldShowLctButton;
- (void)updateLctButton;
- (void)updateLctButtonIcon;
- (void)updateLctButtonLabel;
- (void)updateLctButtonArrow;
- (void)updateQaContainerView;
- (BOOL)shouldShowQaButton;
- (void)updateQaButton;
- (void)onClickQaButton:(id)arg1;
- (BOOL)shouldShowUpgradeButton;
- (BOOL)shouldShowUpgradeLine;
- (void)updateUpgradeLine;
- (void)updateUpgradeButton;
- (void)updateBrandLabel;
- (id)init;
- (void)stopNumberTimeout;
- (id)colorFromInt:(unsigned long long)arg1;
- (void)lqtActionEntryBtnCancel:(id)arg1;
- (void)lqtActionEntryArrowHighlight:(id)arg1;
- (void)balanceFreezeClick;
- (BOOL)isShowLCTEntry;
- (void)onClickLqpEntranceButton;
- (void)refreshViewWithData:(id)arg1;
- (void)OnLeftBarButtonDone;
- (void)viewWillAppear:(BOOL)arg1;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)onWatchBalanceList;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg1;
- (void)onLCTBtnClick:(id)arg1;
- (void)onLCTBtnCancel:(id)arg1;
- (void)onLCTBtnHighlight:(id)arg1;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)webViewReturn:(id)arg1;
- (void)onRealnameBtnClick:(id)arg1;
- (void)onRealnameBtnCancel:(id)arg1;
- (void)onRealnameBtnHighlight:(id)arg1;
- (void)reportWithAction:(unsigned long long)arg1 url:(id)arg2;
- (void)realNameTipsVCDidCancel:(id)arg1;
- (void)realNameTipsVCDidConfirm:(id)arg1;
- (void)onWCPayFreezeBalanceMsgNotify:(id)arg1;
- (void)lqtActionEntryBtnClick:(id)arg1;
- (id)lqpEntranceLine;
- (void)setLqpEntranceLine:(id)arg1;
- (id)lqpEntranceButton;
- (void)setLqpEntranceButton:(id)arg1;
- (BOOL)hasShowBalanceUpgrade;
- (void)setHasShowBalanceUpgrade:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)bannerContainer;
- (void)setBannerContainer:(id)arg1;
- (id)banner;
- (void)setBanner:(id)arg1;
- (id)logoView;
- (void)setLogoView:(id)arg1;
- (id)balanceTitleLabel;
- (void)setBalanceTitleLabel:(id)arg1;
- (id)moneyContainerView;
- (void)setMoneyContainerView:(id)arg1;
- (id)timeoutNumber;
- (void)setTimeoutNumber:(id)arg1;
- (id)freezeButton;
- (void)setFreezeButton:(id)arg1;
- (id)freezeButtonIcon;
- (void)setFreezeButtonIcon:(id)arg1;
- (id)freezeButtonLabel;
- (void)setFreezeButtonLabel:(id)arg1;
- (id)freezeButtonArrow;
- (void)setFreezeButtonArrow:(id)arg1;
- (id)lqtEntryButton;
- (void)setLqtEntryButton:(id)arg1;
- (id)lqtEntryButtonArrow;
- (void)setLqtEntryButtonArrow:(id)arg1;
- (id)lqtEntryButtonMask;
- (void)setLqtEntryButtonMask:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)saveButton;
- (void)setSaveButton:(id)arg1;
- (id)fetchButton;
- (void)setFetchButton:(id)arg1;
- (id)realnameButton;
- (void)setRealnameButton:(id)arg1;
- (id)realnameButtonLabel;
- (void)setRealnameButtonLabel:(id)arg1;
- (id)realnameButtonArrow;
- (void)setRealnameButtonArrow:(id)arg1;
- (id)lctButton;
- (void)setLctButton:(id)arg1;
- (id)lctButtonIcon;
- (void)setLctButtonIcon:(id)arg1;
- (id)lctButtonLabel;
- (void)setLctButtonLabel:(id)arg1;
- (id)lctButtonArrow;
- (void)setLctButtonArrow:(id)arg1;
- (id)qaContainerView;
- (void)setQaContainerView:(id)arg1;
- (id)qaButton;
- (void)setQaButton:(id)arg1;
- (id)upgradeButton;
- (void)setUpgradeButton:(id)arg1;
- (id)upgradeLine;
- (void)setUpgradeLine:(id)arg1;
- (id)brandLabel;
- (void)setBrandLabel:(id)arg1;
- (void).cxx_destruct;
@end

