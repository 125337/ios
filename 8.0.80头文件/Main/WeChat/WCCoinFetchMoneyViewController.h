@interface WCCoinFetchMoneyViewController : MMUIViewController <ILinkEventExt, MMWebViewDelegate, WCPayJSApiVerifyDelegate, WCLiveActionSheetDelegate, WCCoinEncashIncomeCgiDelegate, WCCoinFetchMoneyInputViewControllerDelegate, WCPayPaidSuccessStatusViewControllerDelegate, MMFinderLiveFetchMoneyAnnouncementViewDelegate, MMFinderLiveFetchMoneyAnnouncementCellDelegate, MMFinderLiveFetchMoneyTableCellDelegate, WCCoinResignTaxCutTipsViewDelegate>
{
    BOOL _isFirstAppear; // +0x70
    BOOL _needGetSettleInfo; // +0x71
    BOOL _isCocertActivate; // +0x72
    id <WCCoinFetchMoneyViewControllerDelegate> _delegate; // +0x78
    UIView * _contentView; // +0x80
    UIView * _linksContainerView; // +0x88
    MMUILabel * _bottomLabel; // +0x90
    Announcement * _announcement; // +0x98
    FinderGetLiveIncomePageResponse * _pageInfo; // +0xa0
    NSMutableArray * _cellPageItems; // +0xa8
    NSMutableArray * _bottomItemsArray; // +0xb0
    SettleToAgencyRelateInfo * _settleInfo; // +0xb8
    SecurityInfoAuthrizeLogic * _authLogic; // +0xc0
    WCCoinInterceptLogic * _interceptLogic; // +0xc8
    WCTableViewManager * _tableViewManager; // +0xd0
    MMFinderLiveFetchMoneyAnnouncementView * _announcementView; // +0xd8
    NSString * _tips; // +0xe0
    FinderEncashPrepareInfo * _lastEncashPrepareInfo; // +0xe8
    unsigned long long _amount; // +0xf0
    NSString * _billNo; // +0xf8
    PrepareIncomeEncashResponse * _prepareEncashResponse; // +0x100
    WCCoinFetchMoneyInputViewController * _inputMoneyVC; // +0x108
    WCCoinFetchMoneySuccessViewController * _fetchMoneySuccessVC; // +0x110
    WCPayJSApiVerifyPayPasswordControlLogic * _currentLogic; // +0x118
}
- (id)init;
- (id)initWithSettleInfo:(id)arg1;
- (void)viewDidLoad;
- (void)registerExtension;
- (void)viewDidAppear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (void)refresh;
- (void)layoutSinglePage;
- (void)layoutNoMoneyTopViewWithIncomeTips;
- (void)layoutTopViewWithIncomeTips;
- (void)layoutNavigationBar;
- (void)layoutContentView;
- (void)layoutNoMoneyEnterpriseTopView;
- (void)layoutTopView;
- (void)layoutAnnouncementViewIfNeed:(id)arg1;
- (void)layoutTitleView:(id)arg1;
- (void)layoutBottomView;
- (void)layoutEncashContentsFor:(id)arg1;
- (id)createEncashButton;
- (void)genBottomViewItemsWith:(id)arg1 container:(id)arg2 layoutIndex:(long long)arg3;
- (void)clickBottomIKnow;
- (id)createAgencyTipsWithContent:(id)arg1;
- (id)createEnterpriseAgencyTipsWithContent:(id)arg1;
- (void)layoutMultiPages;
- (void)configureOptionTableView;
- (void)addAnnouncementCell;
- (void)addCell;
- (void)layoutBottomActivities;
- (id)genBottomActivitiesWith:(id)arg1 maxWidth:(double)arg2 margin:(double)arg3;
- (id)makeNewSeperatorLine:(CGRect)arg1;
- (id)bottomTextViewWithContent:(id)arg1 url:(id)arg2 maxWidth:(double)arg3;
- (BOOL)containBottomTips;
- (void)enterInputMoneyVC:(id)arg1;
- (void)realEnterInputMoneyVC:(id)arg1 incomeBizInfo:(id)arg2;
- (BOOL)containsMultiPages;
- (void)getPagetInfo;
- (void)fetchMoney:(id)arg1 encashAmount:(unsigned long long)arg2 incomeBizInfo:(id)arg3;
- (void)startFinderRealNameVerifyWith:(id)arg1;
- (void)getSecurityInfoAuthTokenWith:(id)arg1 authParams:(id)arg2;
- (void)uploadFinderRealNameToken:(id)arg1;
- (void)uploadFinderRealNameNewCode:(id)arg1;
- (void)getSettleInfoIfNeed;
- (void)startGetWCPayTokenWith:(id)arg1;
- (void)startEncash:(id)arg1 incomeBizInfo:(id)arg2;
- (id)singleIncomePageItem;
- (id)singleEncashPrepareInfo;
- (BOOL)noMoneyForSinglePage;
- (void)clickFetchMoney;
- (void)clickFetchMoney:(id)arg1;
- (void)continueClickFetchMoneyCheckWith:(id)arg1;
- (void)internalEnterInputPageWith:(id)arg1;
- (void)showSelectEncashWaySheetWith:(id)arg1;
- (id)getRewardTypeWithType:(unsigned int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickBalance;
- (void)onClickLeftItem;
- (void)onClickIncomeDetail;
- (void)onClickPendingBalance;
- (id)pendingIncomeBalanceTextForSinglePage;
- (BOOL)hasPendingIncomeForSinglePage;
- (void)onClickIncomeDetailWithUrl:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)tapBottom:(id)arg1;
- (BOOL)handleFinderEncashIntercept:(id)arg1 incomeBizInfo:(id)arg2;
- (void)handleIntercept:(id)arg1;
- (void)showError:(id)arg1;
- (id)getTopVC;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)clickMMFinderLiveFetchMoneyTableCellEncashButton:(id)arg1;
- (void)clickMMFinderLiveFetchMoneyTableCellDetailButton:(id)arg1;
- (void)clickMMFinderLiveFetchMoneyTableCellPendingBalance:(id)arg1;
- (void)clickMMFinderLiveFetchMoneyAnnouncementCell:(id)arg1;
- (void)clickMMFinderLiveFetchMoneyAnnouncementView:(id)arg1;
- (void)onClickCurrnetAnnouncement;
- (void)clearPageItems;
- (void)addPageItemIfNeed:(id)arg1;
- (void)addAnnouncementIfNeed:(id)arg1;
- (void)cacheAnnouncement:(id)arg1;
- (void)setCacheAnnouncementClicked;
- (void)shouldFetchMoney:(id)arg1 amount:(unsigned long long)arg2;
- (void)vcDidBePopedOrDismissed:(id)arg1;
- (void)didClickTaxCutEntrance:(id)arg1;
- (void)onVerifyResult:(id)arg1;
- (id)getParam;
- (id)getCurrentURL;
- (void)encashIncomeCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)internalFetchMoneySuccessWtih:(id)arg1 incomBizInfo:(id)arg2;
- (void)encashIncomeCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)statusViewControlleDidClickDone:(id)arg1;
- (void)registerYReportSdk;
- (void)reportNoRealNameIntercept;
- (void)reportEncashInterceptJumpInfo:(id)arg1;
- (void)reportEncashLogicErrCode:(int)arg1;
- (double)announcementViewHeight:(id)arg1;
- (double)announcementViewWidth;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)linksContainerView;
- (void)setLinksContainerView:(id)arg1;
- (id)bottomLabel;
- (void)setBottomLabel:(id)arg1;
- (id)announcement;
- (void)setAnnouncement:(id)arg1;
- (id)pageInfo;
- (void)setPageInfo:(id)arg1;
- (BOOL)isFirstAppear;
- (void)setIsFirstAppear:(BOOL)arg1;
- (id)cellPageItems;
- (void)setCellPageItems:(id)arg1;
- (id)bottomItemsArray;
- (void)setBottomItemsArray:(id)arg1;
- (id)settleInfo;
- (void)setSettleInfo:(id)arg1;
- (id)authLogic;
- (void)setAuthLogic:(id)arg1;
- (id)interceptLogic;
- (void)setInterceptLogic:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)announcementView;
- (void)setAnnouncementView:(id)arg1;
- (BOOL)needGetSettleInfo;
- (void)setNeedGetSettleInfo:(BOOL)arg1;
- (BOOL)isCocertActivate;
- (void)setIsCocertActivate:(BOOL)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)lastEncashPrepareInfo;
- (void)setLastEncashPrepareInfo:(id)arg1;
- (unsigned long long)amount;
- (void)setAmount:(unsigned long long)arg1;
- (id)billNo;
- (void)setBillNo:(id)arg1;
- (id)prepareEncashResponse;
- (void)setPrepareEncashResponse:(id)arg1;
- (id)inputMoneyVC;
- (void)setInputMoneyVC:(id)arg1;
- (id)fetchMoneySuccessVC;
- (void)setFetchMoneySuccessVC:(id)arg1;
- (id)currentLogic;
- (void)setCurrentLogic:(id)arg1;
- (void).cxx_destruct;
@end
