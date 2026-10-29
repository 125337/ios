@interface MMFinderLiveFeedNoticeDetailView : MMPageSheetBaseView <MMWebViewDelegate, MMFinderLiveCouponViewDelegate, WCFinderLiveExt>
{
    BOOL _isLive; // +0x8
    BOOL _showHideButton; // +0x9
    BOOL _isLandscape; // +0xa
    BOOL _folding; // +0xb
    int _reportScene; // +0xc
    id /* block */ _actionButtonBlock; // +0x10
    id /* block */ _unLikeButtonBlock; // +0x18
    id /* block */ _onReceiveCouponButtonBlock; // +0x20
    NSString * _customActionTitleForUnreservedFreeNotice; // +0x28
    WCFinderContact * _anchorContact; // +0x30
    FinderLiveNoticeInfo * _noticeInfo; // +0x38
    UIView * _cardView; // +0x40
    MMUIImageView * _cardImageView; // +0x48
    UIView * _cardContentView; // +0x50
    UIScrollView * _contentScrollView; // +0x58
    UIView * _contentView; // +0x60
    MMLiveShopShelfDragBar * _dragBar; // +0x68
    WCFinderHeadImageView * _anchorAvatarView; // +0x70
    MMUIButton * _anchorDisplayNameButton; // +0x78
    MMWebImageView * _anchorVerificationStatusView; // +0x80
    UILabel * _noticeRecommendationLabel; // +0x88
    MMUILabel * _titleLabel; // +0x90
    MMUILabel * _subtitleLabel; // +0x98
    MMUIButton * _actionButton; // +0xa0
    MMUIButton * _unLikeButton; // +0xa8
    MMUILabel * _couponStateLabel; // +0xb0
    MMPaddingView * _couponLabel; // +0xb8
    MMFinderLiveMultiCouponForNoticeView * _multiCouponView; // +0xc0
    MMFinderLiveNoticeDetailPayView * _noticeDetailPayVIew; // +0xc8
    CAGradientLayer * _gradientLayer; // +0xd0
    MMFinderLiveFeedNoticeColumnView * _columnView; // +0xd8
}
- (id)init;
- (void)updateWithAnchorFinderContact:(id)arg1 noticeInfo:(id)arg2 isLive:(BOOL)arg3 showHideButton:(BOOL)arg4 reportScene:(int)arg5 completionBlock:(id /* block */)arg6;
- (void)updateActionButton:(id)arg1;
- (void)updateUnLikeButton:(BOOL)arg1;
- (void)updateActionButtonWhenNeedPay:(id)arg1;
- (void)updateActionButtonWhenFree:(id)arg1;
- (void)updateWithNoticeInfo:(id)arg1;
- (void)updateCouponViews:(id)arg1;
- (BOOL)showColumnView:(id)arg1;
- (double)getFootContentHeight:(id)arg1;
- (void)updateWithAnchorFinderContact:(id)arg1;
- (void)updateNoticeView:(id)arg1;
- (void)layoutUI;
- (double)getTitleLabelTop;
- (void)createUI;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (double)contentViewHeight;
- (double)getCurrentTotalHeight;
- (id)contentView;
- (id)cardImageView;
- (id)cardView;
- (id)cardContentView;
- (id)columnView;
- (void)onColumnButtonClick:(id)arg1;
- (void)onColumnButtonReport:(BOOL)arg1;
- (void)onHideButtonReport:(BOOL)arg1;
- (void)openWebViewController:(id)arg1 fromNav:(id)arg2 closeCompletion:(id /* block */)arg3;
- (id)contentScrollView;
- (id)dragBar;
- (id)actionButton;
- (id)unLikeButton;
- (void)unLikeButtonClick;
- (void)actionButtonClick;
- (void)executeActionBlock:(BOOL)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)anchorVerificationStatusView;
- (id)anchorDisplayNameButton;
- (id)anchorAvatarView;
- (id)noticeRecommendationLabel;
- (id)couponStateLabel;
- (id)couponLabel;
- (id)multiCouponView;
- (void)anchorAvatarViewClick;
- (id)noticeDetailPayVIew;
- (void)updateGradientLayer:(BOOL)arg1;
- (id)getGradientLayer:(CGRect)arg1 radio1:(double)arg2 radio2:(double)arg3;
- (void)onActionButtonClicked:(id)arg1 view:(id)arg2;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (id /* block */)actionButtonBlock;
- (void)setActionButtonBlock:(id /* block */)arg1;
- (id /* block */)unLikeButtonBlock;
- (void)setUnLikeButtonBlock:(id /* block */)arg1;
- (id /* block */)onReceiveCouponButtonBlock;
- (void)setOnReceiveCouponButtonBlock:(id /* block */)arg1;
- (id)customActionTitleForUnreservedFreeNotice;
- (void)setCustomActionTitleForUnreservedFreeNotice:(id)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (BOOL)isLive;
- (void)setIsLive:(BOOL)arg1;
- (BOOL)showHideButton;
- (void)setShowHideButton:(BOOL)arg1;
- (void)setCardView:(id)arg1;
- (void)setCardImageView:(id)arg1;
- (void)setCardContentView:(id)arg1;
- (void)setContentScrollView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDragBar:(id)arg1;
- (void)setAnchorAvatarView:(id)arg1;
- (void)setAnchorDisplayNameButton:(id)arg1;
- (void)setAnchorVerificationStatusView:(id)arg1;
- (void)setNoticeRecommendationLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setUnLikeButton:(id)arg1;
- (void)setCouponStateLabel:(id)arg1;
- (void)setCouponLabel:(id)arg1;
- (void)setMultiCouponView:(id)arg1;
- (void)setNoticeDetailPayVIew:(id)arg1;
- (BOOL)isLandscape;
- (void)setIsLandscape:(BOOL)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (BOOL)folding;
- (void)setFolding:(BOOL)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (void)setColumnView:(id)arg1;
- (void).cxx_destruct;
@end

