@interface WCPayLQTDetailViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WAAppTaskMgrExt, WCPayFirstPurchaseModalDelegate, WCPayLQTTipsPanelViewDelegate, MMUseCaseCallback, WCPayWebImageViewDelegate, WCPlayerConfigViewControllerDelegate>
{
    BOOL _bIsClosingAccount; // +0x98
    BOOL _bHasReportLctOperationShow; // +0x99
    BOOL _bHasReportLctOperationV2Show; // +0x9a
    BOOL _bHasReportSecurityEntryShow; // +0x9b
    BOOL _bHasReportFixedDepositEntryShow; // +0x9c
    BOOL _bHasShowDetailHalfPage; // +0x9d
    BOOL _bHasShowFirstPurchaseModal; // +0x9e
    BOOL _bHasShowKnowLQTHalfPage; // +0x9f
    BOOL _bHasShowUpgradeFixedDepositHalfPage; // +0xa0
    BOOL _bHasReportEndowmentInsOperationView; // +0xa1
    id <WCPayLQTDetailViewControllerDelegate> _delegate; // +0xa8
    MMTableView * _tableView; // +0xb0
    NSMutableArray * _infoNodeListArray; // +0xb8
    WCPayLQTTipsPanelView * _tipsPanelView; // +0xc0
    TimeoutNumber * _timeoutNumber; // +0xc8
    long long _tableRowCount; // +0xd0
    UIImageView * _lqtSecurityReddotView; // +0xd8
    NSMutableDictionary * _redDotReportStateDict; // +0xe0
    WCPayLQTPageSheet * _detailPopupHalfPage; // +0xe8
    WCPayFirstPurchaseModal * _firstPurchaseModal; // +0xf0
    WCPayTitleAlignLeftPageSheet * _upgradeToFixedDepositHalfPage; // +0xf8
    UIView * _endowmentInsOperationView; // +0x100
}
- (id)init;
- (void)stopMoneyTimeout;
- (void)startMoneyTimeout;
- (void)dealloc;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)showDetailPopupHalfPage;
- (void)showFirstPurchaseModal;
- (void)showUpgradeFixedDepositHalfPage;
- (void)onTipsModalLeftBtn;
- (void)onTipsModalRightBtn;
- (void)onTipsModalOutSide;
- (double)heightForLabelTitle:(id)arg1 withImg:(BOOL)arg2;
- (double)diffHeightForFundName:(id)arg1;
- (double)diffHeightForDynamicFont:(id)arg1 dynamicFont:(id)arg2 text:(id)arg3;
- (double)tableViewMainContentHeight;
- (double)tableViewOtherContentHeight;
- (double)tableViewTinyAppContentHeight;
- (void)setupContentView;
- (void)scrollToBottomIfNeed;
- (void)setupTipsPanelView;
- (void)setupTableHeaderView;
- (id)genBottomButton:(id)arg1 actionClick:(SEL)arg2 actionDown:(SEL)arg3 actionCancel:(SEL)arg4;
- (void)setupTableFooterView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeDetailMainContent:(id)arg1;
- (void)onClickActivityBtn:(id)arg1;
- (void)makeDetailEnteranceContent:(id)arg1 indexPath:(id)arg2;
- (void)makeMoreProductLabelCell:(id)arg1;
- (void)makeRefactorOperateCell:(id)arg1 operateInfo:(id)arg2 atRow:(long long)arg3;
- (id)makeOperationView:(id)arg1 cellWidth:(double)arg2 withInfo:(id)arg3 atRow:(long long)arg4;
- (void)makeSepbarCellContent:(id)arg1;
- (void)makeTinyAppContent:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)leftBarButtonClick;
- (void)rightBarButtonClick;
- (void)actionSheetItemClick;
- (void)footerButtonClick:(id)arg1;
- (void)footerButtonDown:(id)arg1;
- (void)footerButtonCancel:(id)arg1;
- (void)fofButtonClick:(id)arg1;
- (void)fofButtonDown:(id)arg1;
- (void)fofButtonCancel:(id)arg1;
- (void)financialInfoBtnClick:(id)arg1;
- (void)financialInfoBtnDown:(id)arg1;
- (void)financialInfoBtnCancel:(id)arg1;
- (void)saveBtnClick;
- (void)onClickTinyApp:(id)arg1;
- (void)onClickH5:(id)arg1;
- (void)fetchBtnClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleNewDocumentItemClick:(id)arg1;
- (void)openH5WithString:(id)arg1;
- (void)openTinyAppWithUsername:(id)arg1 path:(id)arg2;
- (void)openNativeBusi:(id)arg1;
- (void)bannerBtnClick;
- (BOOL)hasTinyAppEnterance;
- (void)handleClickLQTTinyApp;
- (void)gainRateCoverBtnClick;
- (void)incomeCoverBtnClick;
- (id)convertFromDocument:(id)arg1;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (void)moneyCoverBtnClick:(id)arg1;
- (void)moneyCoverBtnDown:(id)arg1;
- (void)moneyCoverBtnCancel:(id)arg1;
- (void)onTapDepositCell;
- (void)onLQTTipsPanelViewDismiss;
- (void)handleVideoFeedThumbImageClick:(id)arg1;
- (void)handleStaticVideoThumbImageClick:(id)arg1;
- (id)genStaticVideoPlayInfo:(id)arg1;
- (id)generateDownloadArgsWrap:(id)arg1;
- (id)getTempVideoPath:(id)arg1;
- (id)getFormatVideoPath:(id)arg1;
- (id)getTempDirectory;
- (long long)overrideUserInterfaceStyle;
- (BOOL)hasLctOperationInfoData;
- (BOOL)hasRefactorOperationInfoData;
- (BOOL)isLctOperationCellIndexPath:(id)arg1;
- (double)calcLctOperationContentHeight;
- (double)calcOpeContentHeightWithoutProduct;
- (double)calcOpeContentHeightWithProduct;
- (double)calRefactorOpeContentHeight:(id)arg1;
- (double)calRefactorOpeMoreProductLabelHeight;
- (double)calRefactorOpeContentProductDetailHeight:(id)arg1 contentWidth:(double)arg2;
- (void)makeLctOperationContent:(id)arg1;
- (void)makeLctOperationContentWithoutProduct:(id)arg1;
- (void)lctOperationCoverBtnClick;
- (void)makeLctOperationContentWithProduct:(id)arg1;
- (void)makeLctOperationV2ContentWithoutProductList:(id)arg1 logo:(id)arg2 arrow:(id)arg3 cell:(id)arg4;
- (void)makeLctOperationV2ContentWithProductList:(id)arg1 logo:(id)arg2 arrow:(id)arg3 cell:(id)arg4;
- (void)refactorOperationTitleItemCoverBtnClick:(id)arg1;
- (void)refactorOperationProductItemCoverBtnClick:(id)arg1;
- (void)refactorEndowmentOperationCoverBtnClick:(id)arg1;
- (void)lctOperationTitleItemCoverBtnClick;
- (void)lctOperationProductItemCoverBtnClick;
- (void)showFirstEntryTipsIfNecessary:(id)arg1;
- (void)reportLctOperateV2WithReportScene:(int)arg1 clickIndex:(int)arg2;
- (void)call:(id)arg1;
- (void)processFixedDepositItem:(id)arg1;
- (BOOL)isLQTRector;
- (void)showLqtSecurityEntryWithHeader:(id)arg1;
- (void)lqtSecurityEntryClick;
- (void)showLqtMiddleNoticeBanner:(id)arg1;
- (BOOL)detectNewDocumentItemHasValidJumpData:(id)arg1;
- (void)middleNoticeBannerClick;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (id)genHighlighCoverBtnWithSize:(CGSize)arg1;
- (unsigned long long)getMillSecond;
- (id)genReportRefactorLogStr:(int)arg1;
- (id)delegate;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)bIsClosingAccount;
- (void)setBIsClosingAccount:(BOOL)arg1;
- (id)infoNodeListArray;
- (void)setInfoNodeListArray:(id)arg1;
- (id)tipsPanelView;
- (void)setTipsPanelView:(id)arg1;
- (id)timeoutNumber;
- (void)setTimeoutNumber:(id)arg1;
- (long long)tableRowCount;
- (void)setTableRowCount:(long long)arg1;
- (BOOL)bHasReportLctOperationShow;
- (void)setBHasReportLctOperationShow:(BOOL)arg1;
- (BOOL)bHasReportLctOperationV2Show;
- (void)setBHasReportLctOperationV2Show:(BOOL)arg1;
- (BOOL)bHasReportSecurityEntryShow;
- (void)setBHasReportSecurityEntryShow:(BOOL)arg1;
- (BOOL)bHasReportFixedDepositEntryShow;
- (void)setBHasReportFixedDepositEntryShow:(BOOL)arg1;
- (id)lqtSecurityReddotView;
- (void)setLqtSecurityReddotView:(id)arg1;
- (id)redDotReportStateDict;
- (void)setRedDotReportStateDict:(id)arg1;
- (BOOL)bHasShowDetailHalfPage;
- (void)setBHasShowDetailHalfPage:(BOOL)arg1;
- (id)detailPopupHalfPage;
- (void)setDetailPopupHalfPage:(id)arg1;
- (BOOL)bHasShowFirstPurchaseModal;
- (void)setBHasShowFirstPurchaseModal:(BOOL)arg1;
- (id)firstPurchaseModal;
- (void)setFirstPurchaseModal:(id)arg1;
- (BOOL)bHasShowKnowLQTHalfPage;
- (void)setBHasShowKnowLQTHalfPage:(BOOL)arg1;
- (id)upgradeToFixedDepositHalfPage;
- (void)setUpgradeToFixedDepositHalfPage:(id)arg1;
- (BOOL)bHasShowUpgradeFixedDepositHalfPage;
- (void)setBHasShowUpgradeFixedDepositHalfPage:(BOOL)arg1;
- (id)endowmentInsOperationView;
- (void)setEndowmentInsOperationView:(id)arg1;
- (BOOL)bHasReportEndowmentInsOperationView;
- (void)setBHasReportEndowmentInsOperationView:(BOOL)arg1;
- (void).cxx_destruct;
@end
