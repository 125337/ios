@interface MMFinderLiveFeedNoticeDetailView : MMPageSheetBaseView <MMWebViewDelegate, WCFinderLiveExt>
{
    BOOL _showHideButton; // +0x8
    BOOL _shouldShowColumnView; // +0x9
    BOOL _isLandscape; // +0xa
    BOOL _folding; // +0xb
    int _reportScene; // +0xc
    WCFinderContact * _anchorContact; // +0x10
    WCFinderContact * _referrerContact; // +0x18
    FinderLiveNoticeInfo * _noticeInfo; // +0x20
    id /* block */ _actionButtonBlock; // +0x28
    id /* block */ _unLikeButtonBlock; // +0x30
    id /* block */ _pageSheetDidDismissBlock; // +0x38
    NSString * _customActionTitleForUnreservedFreeNotice; // +0x40
    double _fixedHeightRatio; // +0x48
    UIView * _cardView; // +0x50
    MMUIImageView * _cardImageView; // +0x58
    UIView * _cardContentView; // +0x60
    UIScrollView * _contentScrollView; // +0x68
    UIView * _contentView; // +0x70
    MMLivePageSheetDragBar * _dragBar; // +0x78
    UIView * _referrerHeaderView; // +0x80
    WCFinderHeadImageView * _referrerAvatarView; // +0x88
    MMUILabel * _referrerNameLabel; // +0x90
    MMUILabel * _referrerRecommendLabel; // +0x98
    WCFinderHeadImageView * _anchorAvatarView; // +0xa0
    MMUIButton * _anchorDisplayNameButton; // +0xa8
    WCFinderAuthInfoIconView * _anchorVerificationStatusView; // +0xb0
    UILabel * _noticeRecommendationLabel; // +0xb8
    MMUILabel * _titleLabel; // +0xc0
    MMUILabel * _subtitleLabel; // +0xc8
    MMUILabel * _timeLabel; // +0xd0
    MMUIButton * _actionButton; // +0xd8
    MMUIButton * _unLikeButton; // +0xe0
    MMFinderLiveFeedNoticeDetailBindItemView * _bindItemView; // +0xe8
    MMFinderLiveNoticeDetailPayView * _noticeDetailPayVIew; // +0xf0
    CAGradientLayer * _gradientLayer; // +0xf8
    MMFinderLiveFeedNoticeColumnView * _columnView; // +0x100
}
- (void)pageSheetDidDismiss;
- (id)init;
- (void)showWithAnchorFinderContact:(id)arg1 noticeInfo:(id)arg2 showHideButton:(BOOL)arg3 shouldShowColumnView:(BOOL)arg4 reportScene:(int)arg5 completionBlock:(id /* block */)arg6;
- (void)updateWithAnchorFinderContact:(id)arg1 noticeInfo:(id)arg2 showHideButton:(BOOL)arg3 shouldShowColumnView:(BOOL)arg4 reportScene:(int)arg5 completionBlock:(id /* block */)arg6;
- (void)refreshUI;
- (void)updateActionButton:(id)arg1;
- (void)updateUnLikeButton:(BOOL)arg1;
- (void)updateActionButtonWhenNeedPay:(id)arg1;
- (void)updateActionButtonWhenFree:(id)arg1;
- (void)updateWithNoticeInfo:(id)arg1;
- (BOOL)showColumnView:(id)arg1;
- (double)getFootContentHeight:(id)arg1;
- (void)updateWithAnchorFinderContact:(id)arg1;
- (void)updateReferrerContact:(id)arg1;
- (BOOL)hasReferrerHeader;
- (void)updateReferrerHeader;
- (void)updateNoticeView:(id)arg1;
- (void)updateBindItemView:(id)arg1;
- (void)layoutUI;
- (double)getTitleLabelTop;
- (void)createUI;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (void)setFixedHeightRatio:(double)arg1;
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
- (id)timeLabel;
- (id)titleLabel;
- (id)anchorVerificationStatusView;
- (id)anchorDisplayNameButton;
- (id)anchorAvatarView;
- (id)referrerHeaderView;
- (id)referrerAvatarView;
- (id)referrerNameLabel;
- (id)referrerRecommendLabel;
- (id)noticeRecommendationLabel;
- (id)bindItemView;
- (void)anchorAvatarViewClick;
- (id)noticeDetailPayVIew;
- (void)updateGradientLayer:(BOOL)arg1;
- (id)getGradientLayer:(CGRect)arg1 radio1:(double)arg2 radio2:(double)arg3;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)referrerContact;
- (void)setReferrerContact:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (BOOL)showHideButton;
- (void)setShowHideButton:(BOOL)arg1;
- (BOOL)shouldShowColumnView;
- (void)setShouldShowColumnView:(BOOL)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (id /* block */)actionButtonBlock;
- (void)setActionButtonBlock:(id /* block */)arg1;
- (id /* block */)unLikeButtonBlock;
- (void)setUnLikeButtonBlock:(id /* block */)arg1;
- (id /* block */)pageSheetDidDismissBlock;
- (void)setPageSheetDidDismissBlock:(id /* block */)arg1;
- (id)customActionTitleForUnreservedFreeNotice;
- (void)setCustomActionTitleForUnreservedFreeNotice:(id)arg1;
- (double)fixedHeightRatio;
- (void)setCardView:(id)arg1;
- (void)setCardImageView:(id)arg1;
- (void)setCardContentView:(id)arg1;
- (void)setContentScrollView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDragBar:(id)arg1;
- (void)setReferrerHeaderView:(id)arg1;
- (void)setReferrerAvatarView:(id)arg1;
- (void)setReferrerNameLabel:(id)arg1;
- (void)setReferrerRecommendLabel:(id)arg1;
- (void)setAnchorAvatarView:(id)arg1;
- (void)setAnchorDisplayNameButton:(id)arg1;
- (void)setAnchorVerificationStatusView:(id)arg1;
- (void)setNoticeRecommendationLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setUnLikeButton:(id)arg1;
- (void)setBindItemView:(id)arg1;
- (void)setNoticeDetailPayVIew:(id)arg1;
- (BOOL)isLandscape;
- (void)setIsLandscape:(BOOL)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (BOOL)folding;
- (void)setFolding:(BOOL)arg1;
- (void)setColumnView:(id)arg1;
- (void).cxx_destruct;
@end
