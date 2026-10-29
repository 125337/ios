@interface WCPayMainViewControllerV2 : WCBizBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, WCActionSheetDelegate, WCPayMainViewLogicControllerDelegate, WCPayRealNameTipsViewControllerDelegate, WCPayWalletEntryHeaderViewDelegate, WCPayWalletViewControllerDelegate, WCPayPwdViewControllerDelegate, ILinkEventExt, WCPayLogicMgrExt, WCMallWalletMangeControlLogicDelegate, WCPayWalletCollectionViewFlowLayoutDelegate, WCPayUploadIDCardTipsViewControllerDelegate, WCPayMainViewTipsPageSheetDelegate>
{
    BOOL _bHasNewOrRedDotWhenOpen; // +0x80
    BOOL _bHasShowUploadIdImageAlert; // +0x81
    BOOL _bNeedScrollToHead; // +0x82
    BOOL _hasReportedWalletEntryReddot; // +0x83
    BOOL _hasShownComplianceHalfPage; // +0x84
    BOOL _hasShowTipsPageSheet; // +0x85
    WCPayMainViewLogicController * _logicController; // +0x88
    NoticeItem * _bannerData; // +0x90
    GetEUInfoResp * _getGDPRResponse; // +0x98
    UICollectionView * _collectionView; // +0xa0
    WCPayWalletEntryHeaderView * _headerView; // +0xa8
    UIView * _footerView; // +0xb0
    UIImageView * _wechatLogoImgView; // +0xb8
    double _itemLeftRightMargin; // +0xc0
    double _itemTopBottomMargin; // +0xc8
    double _itemTargetHeight; // +0xd0
    NSArray * _payManageLabelList; // +0xd8
    NSString * _complianceHalfPageData; // +0xe0
    WCPayComplianceHalfPage * _complianceHalfPage; // +0xe8
    WCPayMainViewTipsPageSheet * _tipsPageSheet; // +0xf0
    CGSize _itemTargetSize; // +0xf8
}
- (void)initView;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setupData;
- (void)setupView;
- (void)setupCollectionView;
- (void)setupHeaderView;
- (void)setupFooterView;
- (void)enterReceiveOrPayLogic;
- (void)refreshViewControllerWithData:(id)arg1;
- (id)getViewController;
- (void)timeoutNumberStartTimeout;
- (void)popToRootWithoutAnimation;
- (void)refreshViewAfterUpdatePaycardListData:(id)arg1 isFromCache:(BOOL)arg2;
- (void)refreshViewAfterGetFunctionData:(BOOL)arg1;
- (void)refreshViewAfterGetGDPRResponse:(id)arg1;
- (void)showBusinessDisclaimerWithItemData:(id)arg1;
- (void)openH5WithItemData:(id)arg1;
- (void)openWeappWithItemData:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1;
- (void)checkAndShowAlertInfo:(id)arg1;
- (void)onMainViewTipsPageSheetClickButton;
- (void)onOperate;
- (void)refreshView;
- (void)updateWalletBalanceViewData:(id)arg1;
- (BOOL)checkShowChangeWalletTips:(id)arg1;
- (void)checkIfNeedShowRealnameGuideView:(id)arg1;
- (void)manageServiceBtnClick;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickBannerUrl:(id)arg1;
- (void)offlinePayEntryBtnClick;
- (void)balanceEntryBtnClick;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)useSmallBottomMarginInDecorationView;
- (double)calcItemTargetHeightWithWidth:(double)arg1;
- (void)calcItemSize;
- (void)calcItemLeftRightMargin;
- (void)calcItemTopBottomMargin;
- (void)onWCPayWalletViewControllerDidCallUpdate;
- (void)onWCPayWalletViewControllerDidCallUpdateBalance;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)handleEventAfterSvrDataFinishReload;
- (void)reportExposureData;
- (void)showComplianceHalfPageIfExist;
- (void)realNameTipsVCDidConfirm:(id)arg1;
- (void)OnWCPayPwdViewControllerBack;
- (void)onBatchFunctionOperateDone;
- (BOOL)isWCMallWalletMangeControlLogicNeedShowLoading;
- (BOOL)isWCMallWalletMangeControllerNeedPresentShow;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)registerYReportSdk;
- (BOOL)bHasNewOrRedDotWhenOpen;
- (void)setBHasNewOrRedDotWhenOpen:(BOOL)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)bannerData;
- (void)setBannerData:(id)arg1;
- (id)getGDPRResponse;
- (void)setGetGDPRResponse:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)wechatLogoImgView;
- (void)setWechatLogoImgView:(id)arg1;
- (BOOL)bHasShowUploadIdImageAlert;
- (void)setBHasShowUploadIdImageAlert:(BOOL)arg1;
- (CGSize)itemTargetSize;
- (void)setItemTargetSize:(CGSize)arg1;
- (double)itemLeftRightMargin;
- (void)setItemLeftRightMargin:(double)arg1;
- (double)itemTopBottomMargin;
- (void)setItemTopBottomMargin:(double)arg1;
- (double)itemTargetHeight;
- (void)setItemTargetHeight:(double)arg1;
- (BOOL)bNeedScrollToHead;
- (void)setBNeedScrollToHead:(BOOL)arg1;
- (id)payManageLabelList;
- (void)setPayManageLabelList:(id)arg1;
- (BOOL)hasReportedWalletEntryReddot;
- (void)setHasReportedWalletEntryReddot:(BOOL)arg1;
- (id)complianceHalfPageData;
- (void)setComplianceHalfPageData:(id)arg1;
- (id)complianceHalfPage;
- (void)setComplianceHalfPage:(id)arg1;
- (BOOL)hasShownComplianceHalfPage;
- (void)setHasShownComplianceHalfPage:(BOOL)arg1;
- (id)tipsPageSheet;
- (void)setTipsPageSheet:(id)arg1;
- (BOOL)hasShowTipsPageSheet;
- (void)setHasShowTipsPageSheet:(BOOL)arg1;
- (void).cxx_destruct;
@end

