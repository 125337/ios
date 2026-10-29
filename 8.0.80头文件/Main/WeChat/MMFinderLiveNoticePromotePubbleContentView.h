@interface MMFinderLiveNoticePromotePubbleContentView : MMFinderLivePromotePubbleContentView <WCActionSheetDelegate>
{
    MMWebImageView * _titleImgView; // +0x8
    MMUIButton * _detailButton; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _introLabel; // +0x20
    MMPaddingView * _couponsTitleLabel; // +0x28
    MMLiveIconButton * _actionButton; // +0x30
    WCFinderLiveNoticePayActionView * _payActionView; // +0x38
    FinderLiveNoticeInfo * _noticeInfo; // +0x40
    MMFinderLiveNoticePromotePubbleActor * _actor; // +0x48
}
- (id)initWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;
- (id)actor;
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)layoutUI;
- (void)refreshData;
- (BOOL)shouldBeAccessibilityElement;
- (id)accessibilityLabelString;
- (id)accessibilityValueString;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (void)setNoticeInfo:(id)arg1;
- (id)getCurrentPromoteBuffer;
- (void)onShowed;
- (void)onClosed;
- (void)checkShouldDismissForNoticeNotNeedPayment;
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
- (void)showLiveNoticeDetailView;
- (void)preLoadConcertPageSheet:(id)arg1;
- (void)onSubscribeAction;
- (id)reserveNoticeLogic;
- (void)showCouponPageSheet;
- (void)didMoveToWindow;
- (id)titleImgView;
- (void)setTitleImgView:(id)arg1;
- (id)detailButton;
- (void)setDetailButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)introLabel;
- (void)setIntroLabel:(id)arg1;
- (id)couponsTitleLabel;
- (void)setCouponsTitleLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)payActionView;
- (void)setPayActionView:(id)arg1;
- (id)noticeInfo;
- (void)setActor:(id)arg1;
- (void).cxx_destruct;
@end
