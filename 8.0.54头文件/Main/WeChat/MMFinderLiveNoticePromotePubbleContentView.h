@interface MMFinderLiveNoticePromotePubbleContentView : MMFinderLivePromotePubbleContentView <WCActionSheetDelegate, MMFinderLiveCouponItemObserver>
{
    BOOL _isLastReserved; // +0x8
    BOOL _isLastHasPay; // +0x9
    MMWebImageView * _titleImgView; // +0x10
    MMUIButton * _detailButton; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _introLabel; // +0x28
    MMUILabel * _couponsRecommendLabel; // +0x30
    MMPaddingView * _couponsTitleLabel; // +0x38
    MMLiveIconButton * _actionButton; // +0x40
    WCFinderLiveNoticePayActionView * _payActionView; // +0x48
    FinderLiveNoticeInfo * _noticeInfo; // +0x50
    WCFinderBaseCgi * _reserveNoticeCGI; // +0x58
    WCLiveActionSheet * _actionSheet; // +0x60
    MMFinderLiveBuyTicketHandle * _ticketHandle; // +0x68
}
- (id)initWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)layoutUI;
- (void)refreshData;
- (BOOL)shouldBeAccessibilityElement;
- (id)accessibilityLabelString;
- (id)accessibilityValueString;
- (void)dealloc;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (id)getCurrentPromoteBuffer;
- (id)onPromoteBubbleActionExtraInfo;
- (void)onShowed;
- (void)onClosed;
- (long long)actionTypeForPromoteReport;
- (void)onCouponDidUpdate:(id)arg1;
- (void)checkShouldDismissForNoticeNotNeedPayment;
- (void)updateLastReserveState;
- (id)standardReportDict;
- (void)layoutActionButton;
- (void)layoutPayActionView;
- (void)layoutDetailButton;
- (BOOL)isShowingPaidView;
- (void)layoutTitleImgView;
- (void)layoutTitleLabel;
- (void)layoutIntroLabel;
- (void)layoutCouponsViews;
- (void)updateLabelsOriginY;
- (void)updateActionButtonStyle;
- (void)updateActionButtonWhenNeedPay;
- (void)updateActionButtonWhenFree;
- (double)rightWidgetLeft;
- (void)detailButtonClick;
- (void)showdLiveNoticeDetailView;
- (void)preLoadConcertPageSheet:(id)arg1;
- (void)onSubscribeAction;
- (void)onActionButtonClick:(BOOL)arg1;
- (void)onClickFreeLiveNotice:(id)arg1 isFromDetailView:(BOOL)arg2;
- (void)onClickNeedPayLiveNotice:(id)arg1 isFromDetailView:(BOOL)arg2;
- (void)hadndleBuySuccess:(id)arg1 isFromDetailView:(BOOL)arg2;
- (void)getTicketClick:(id)arg1;
- (void)showConcertTicketConfirmed:(id)arg1;
- (void)pushToMembershipIntroVC;
- (id)ticketHandle;
- (void)handleSubscribeAction:(BOOL)arg1 isFromDetailView:(BOOL)arg2;
- (void)showActionSheetForUnReserveFromDetailView:(BOOL)arg1;
- (unsigned long long)getChangeState;
- (id)getLiveCGIExtentParamsWithOptype:(unsigned long long)arg1 isFromDetailView:(BOOL)arg2;
- (void)subscribeNotice:(BOOL)arg1 isFromDetailView:(BOOL)arg2;
- (void)showCouponPageSheet;
- (void)changeNoticeStatus:(unsigned long long)arg1;
- (void)disMissSelf;
- (void)onDismissed;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportForSubscribeNotice:(unsigned long long)arg1 isFromDetailNotice:(BOOL)arg2;
- (id)titleImgView;
- (void)setTitleImgView:(id)arg1;
- (id)detailButton;
- (void)setDetailButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)introLabel;
- (void)setIntroLabel:(id)arg1;
- (id)couponsRecommendLabel;
- (void)setCouponsRecommendLabel:(id)arg1;
- (id)couponsTitleLabel;
- (void)setCouponsTitleLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)payActionView;
- (void)setPayActionView:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)reserveNoticeCGI;
- (void)setReserveNoticeCGI:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (BOOL)isLastReserved;
- (void)setIsLastReserved:(BOOL)arg1;
- (BOOL)isLastHasPay;
- (void)setIsLastHasPay:(BOOL)arg1;
- (void)setTicketHandle:(id)arg1;
- (void).cxx_destruct;
@end

