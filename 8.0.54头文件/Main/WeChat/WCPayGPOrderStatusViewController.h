@interface WCPayGPOrderStatusViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, ILinkEventExt, MMTipsViewControllerDelegate, WCPayWebImageViewDelegate, WCPayGPPhotoViewControllerDelegate, WCActionSheetDelegate, WCPayRemarkPageSheetDelegate>
{
    BOOL _bIsAllPayerHasPay; // +0x90
    BOOL _bIsLoadingImage; // +0x91
    BOOL _bIsHeaderViewThemeExpand; // +0x92
    id <WCPayGPOrderStatusViewControllerDelegate> _delegate; // +0x98
    MMTableView * _tableView; // +0xa0
    AAQueryDetailRes * _orderDetailData; // +0xa8
    NSMutableArray * _sectionOneData; // +0xb0
    NSMutableArray * _sectionTwoData; // +0xb8
    NSString * _payerSolitaireContent; // +0xc0
    MMTipsViewController * _payNotifyConfirmTipsView; // +0xc8
    WCPayWebImageView * _remarkImageView; // +0xd0
    WCPayGPPhotoViewController * _photoViewController; // +0xd8
    WCPayRemarkPageSheet * _remarkPageSheet; // +0xe0
    WCPayGPOrderStatusHeaderView * _tableHeaderView; // +0xe8
    WCActionSheet * _m_actionSheet; // +0xf0
    WCPayNoticeItemView * _noticeItemView; // +0xf8
    CGRect _picImgFromRect; // +0x100
}
- (id)navigationBarBackgroundColor;
- (void)setDelegate:(id)arg1;
- (void)refreshViewCotnrollerWithControlData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)setupData;
- (void)setupReportData;
- (void)setupContentView;
- (id)genTableHeaderView;
- (void)refreshHeaderView;
- (void)genTableFooterViewAfterReloadData;
- (id)genTableFooterView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getSectionTtileContent;
- (void)makeSectionTitleContentView:(id)arg1 indexPath:(id)arg2;
- (id)getAAPayerWithIndexPath:(id)arg1;
- (void)makeSectionContactContentView:(id)arg1 withIndexPath:(id)arg2;
- (void)orderDetailVCCancel;
- (id)getContactFromUsername:(id)arg1;
- (void)rightBarButtonPress;
- (BOOL)bHasCloseOrderItem;
- (void)pressCloseOrder;
- (void)confirmToCloseOrder;
- (void)handlePayBtnPress;
- (void)handleViewBalanceLinkClick;
- (void)pressLaunchNewGroupPay;
- (BOOL)isCommonAAType;
- (BOOL)isActivityAAType;
- (id)genOrderStatusSubLabel;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)pressSendPayNotify;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)handleViewRemarkImage;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)showPhotoViewController;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (BOOL)shouldShowDeleteMenu;
- (void)onPhtotViewControllerClickSaveImage:(id)arg1;
- (void)handleSetPayerRemark;
- (void)pageSheetConfirmWithRemark:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickJumpInfo:(id)arg1;
- (id)delegate;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)orderDetailData;
- (void)setOrderDetailData:(id)arg1;
- (id)sectionOneData;
- (void)setSectionOneData:(id)arg1;
- (id)sectionTwoData;
- (void)setSectionTwoData:(id)arg1;
- (BOOL)bIsAllPayerHasPay;
- (void)setBIsAllPayerHasPay:(BOOL)arg1;
- (id)payerSolitaireContent;
- (void)setPayerSolitaireContent:(id)arg1;
- (id)payNotifyConfirmTipsView;
- (void)setPayNotifyConfirmTipsView:(id)arg1;
- (id)remarkImageView;
- (void)setRemarkImageView:(id)arg1;
- (id)photoViewController;
- (void)setPhotoViewController:(id)arg1;
- (BOOL)bIsLoadingImage;
- (void)setBIsLoadingImage:(BOOL)arg1;
- (CGRect)picImgFromRect;
- (void)setPicImgFromRect:(CGRect)arg1;
- (id)remarkPageSheet;
- (void)setRemarkPageSheet:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (BOOL)bIsHeaderViewThemeExpand;
- (void)setBIsHeaderViewThemeExpand:(BOOL)arg1;
- (id)m_actionSheet;
- (void)setM_actionSheet:(id)arg1;
- (id)noticeItemView;
- (void)setNoticeItemView:(id)arg1;
- (void).cxx_destruct;
@end

