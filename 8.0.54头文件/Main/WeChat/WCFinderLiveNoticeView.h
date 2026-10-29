@interface WCFinderLiveNoticeView : UIView <ILinkEventExt, WCFinderCouponReceivedExt, MMFinderLiveCouponItemObserver>
{
    BOOL _isAuthor; // +0x8
    BOOL _introductionExpandable; // +0x9
    BOOL _showCoveredStyle; // +0xa
    BOOL _displayArrow; // +0xb
    BOOL _hideActionButton; // +0xc
    BOOL _isInList; // +0xd
    BOOL _isMemberVisitant; // +0xe
    BOOL _isStartReminder; // +0xf
    id <WCFinderLiveNoticeViewDelegate> _delegate; // +0x10
    FinderLiveNoticeInfo * _noticeInfo; // +0x18
    FinderLiveNoticeListInfo * _noticeList; // +0x20
    long long _introductionStyle; // +0x28
    UIColor * _btnBGColor; // +0x30
    unsigned long long _openScene; // +0x38
    WCFinderLiveNoticeViewItemView * _mainNoticeItemView; // +0x40
    UIImageView * _liveLogoView; // +0x48
    UILabel * _noticeTimeLabel; // +0x50
    RichTextView * _noticeIntroductionTextView; // +0x58
    UILabel * _noticeRecommendationReasonLabel; // +0x60
    UILabel * _bookingNumberLabel; // +0x68
    UIView * _splitLineView; // +0x70
    UIColor * _actionTextColor; // +0x78
    UILabel * _topLabel; // +0x80
    MMUIButton * _actionButton; // +0x88
    WCFinderLiveNoticePayActionView * _payActionView; // +0x90
    WCFinderLiveNoticeViewItemView * _moreNoticesItemView; // +0x98
    UILabel * _moreNoticesLabel; // +0xa0
    UILabel * _couponsStateView; // +0xa8
    MMPaddingView * _couponsTitleLabel; // +0xb0
    UIColor * _profileActionTextColor; // +0xb8
    NSString * _anchorUsername; // +0xc0
    UIEdgeInsets _contentInsets; // +0xc8
}
+ (double)detailViewMarginRightWithIsAuthor:(BOOL)arg1 isInList:(BOOL)arg2 isStartReminder:(BOOL)arg3;
+ (double)heightWithIdentity:(BOOL)arg1 noticeInfo:(id)arg2 noticeList:(id)arg3 width:(double)arg4 introductionStyle:(long long)arg5 isInList:(BOOL)arg6 memberVisitant:(BOOL)arg7 isStartReminder:(BOOL)arg8 displayLiveTimeOnSingleLine:(BOOL)arg9;
+ (double)heightWithIdentity:(BOOL)arg1 noticeInfo:(id)arg2 noticeList:(id)arg3 width:(double)arg4 introductionStyle:(long long)arg5 isInList:(BOOL)arg6 memberVisitant:(BOOL)arg7 isStartReminder:(BOOL)arg8;
+ (id)getTitleFont:(BOOL)arg1;
+ (id)getReserveString:(id)arg1;
+ (BOOL)showsMoreNoticesWithNoticeList:(id)arg1;
+ (id)generateDisplayedIntroductionContentForInfo:(id)arg1 introductionStyle:(long long)arg2;
+ (id)getStartTimeText:(id)arg1;
+ (unsigned long long)lineNumbersForIntroductionStyle:(long long)arg1;
+ (double)getTopLabelHeight:(BOOL)arg1;
- (id)getDescColor;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)showsMoreNotices;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)getArrowPaddingRightWhenNotInList;
- (void)setShowCoveredStyle:(BOOL)arg1;
- (void)updateProfileActionTextColor:(id)arg1;
- (id)getCurrentActionTextColor;
- (void)setIsInList:(BOOL)arg1;
- (void)setIsStartReminder:(BOOL)arg1;
- (id)mainNoticeItemView;
- (id)liveLogoView;
- (id)splitLineView;
- (id)noticeTimeLabel;
- (id)noticeIntroductionTextView;
- (id)noticeRecommendationReasonLabel;
- (id)bookingNumberLabel;
- (id)topLabel;
- (id)actionButton;
- (id)payActionView;
- (id)moreNoticesItemView;
- (id)moreNoticesLabel;
- (id)couponsTitleLabel;
- (id)couponsStateView;
- (void)updateWithIdentity:(BOOL)arg1 anchorFinderUsername:(id)arg2 noticeInfo:(id)arg3 noticeList:(id)arg4 isInList:(BOOL)arg5 memberVisitant:(BOOL)arg6 isStartReminder:(BOOL)arg7;
- (void)onCouponDidUpdate:(id)arg1;
- (BOOL)showColumnView:(id)arg1;
- (void)flashNoticeViewWithCompletionBlock:(id /* block */)arg1;
- (void)updateActionButton;
- (void)updateActionButtonWhenNeedPay;
- (void)updateActionButtonWhenFree;
- (BOOL)enableShowActionButton;
- (BOOL)isOpenFromMember;
- (BOOL)displayTimeInSingleLine;
- (void)setIntroductionExpandable:(BOOL)arg1;
- (void)setIntroductionStyle:(long long)arg1;
- (void)expandIntroductionTextView;
- (void)shrinkIntroductionTextView;
- (void)resetIntroductionStyleIfNeeded;
- (void)onActionButtonClicked:(id)arg1;
- (void)onMainNoticeButtonClicked:(id)arg1;
- (void)onMoreNoticesButtonClicked:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)updateCardAccessibility;
- (id)cardAccessibilityLabel;
- (BOOL)needShowNoticeIntroductionTextView:(id)arg1;
- (double)getCardTitleIconPadding;
- (double)getCardTitlePaddingLeft;
- (double)getkContentSpacingVertical;
- (double)getkContentPaddingVertical;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)noticeList;
- (void)setNoticeList:(id)arg1;
- (BOOL)introductionExpandable;
- (long long)introductionStyle;
- (BOOL)showCoveredStyle;
- (BOOL)displayArrow;
- (void)setDisplayArrow:(BOOL)arg1;
- (UIEdgeInsets)contentInsets;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (id)btnBGColor;
- (void)setBtnBGColor:(id)arg1;
- (BOOL)hideActionButton;
- (void)setHideActionButton:(BOOL)arg1;
- (unsigned long long)openScene;
- (void)setOpenScene:(unsigned long long)arg1;
- (BOOL)isInList;
- (BOOL)isMemberVisitant;
- (void)setIsMemberVisitant:(BOOL)arg1;
- (BOOL)isStartReminder;
- (void)setMainNoticeItemView:(id)arg1;
- (void)setLiveLogoView:(id)arg1;
- (void)setNoticeTimeLabel:(id)arg1;
- (void)setNoticeIntroductionTextView:(id)arg1;
- (void)setNoticeRecommendationReasonLabel:(id)arg1;
- (void)setBookingNumberLabel:(id)arg1;
- (void)setSplitLineView:(id)arg1;
- (id)actionTextColor;
- (void)setActionTextColor:(id)arg1;
- (void)setTopLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setPayActionView:(id)arg1;
- (void)setMoreNoticesItemView:(id)arg1;
- (void)setMoreNoticesLabel:(id)arg1;
- (void)setCouponsStateView:(id)arg1;
- (void)setCouponsTitleLabel:(id)arg1;
- (id)profileActionTextColor;
- (void)setProfileActionTextColor:(id)arg1;
- (id)anchorUsername;
- (void)setAnchorUsername:(id)arg1;
- (void).cxx_destruct;
@end

