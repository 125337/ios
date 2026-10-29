@interface HoneyPayHomeViewController : HoneyPayBaseViewController <WCPayNoticeBannerDelegate>
{
    id <HoneyPayHomeViewControllerDelegate> _delegate; // +0x90
    HoneyPayListResp * _response; // +0x98
    WCPayAgreementView * _agreementView; // +0xa0
    UIButton * _addCardButton; // +0xa8
    UIButton * _helpButton; // +0xb0
    NSDictionary * _bannerData; // +0xb8
    WCPayNoticeItemView * _noticeItemView; // +0xc0
}
- (void)viewDidLoad;
- (BOOL)useBlackStatusbar;
- (void)refreshViewWithData:(id)arg1;
- (void)requestBannerData;
- (void)setupNavigationBar;
- (void)reloadTableView;
- (void)showWelcome;
- (void)showCardList;
- (void)makeCardCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeAddCardCell:(id)arg1;
- (void)makeReachLimitCell:(id)arg1;
- (void)onRightBarButtonClick;
- (void)clickWelcomeHelp;
- (void)clickCardCell:(id)arg1;
- (void)clickAddCard;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (id)helpButton;
- (id)addCardButton;
- (id)agreementView;
- (id)banner;
- (BOOL)useTransparentNavibar;
- (id)agreementWording;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (void)setAgreementView:(id)arg1;
- (void)setAddCardButton:(id)arg1;
- (void)setHelpButton:(id)arg1;
- (id)bannerData;
- (void)setBannerData:(id)arg1;
- (id)noticeItemView;
- (void)setNoticeItemView:(id)arg1;
- (void).cxx_destruct;
@end

