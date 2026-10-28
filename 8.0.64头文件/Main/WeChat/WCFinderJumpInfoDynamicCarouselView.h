@interface WCFinderJumpInfoDynamicCarouselView : UIView <WCFinderJumpInfoDynamicCarouselViewModelDelegate, WCFinderJumpInfoViewProtocol>
{
    BOOL _isStyleInitialized; // +0x8
    WCFinderJumpInfoDynamicCarouselViewModel * _viewModel; // +0x10
    id <WCFinderJumpInfoDynamicCarouselViewDelegate> _delegate; // +0x18
    unsigned long long _currentPhase; // +0x20
    MMWebImageView * _iconImageView; // +0x28
    UIView * _iconStatusContainerView; // +0x30
    CAGradientLayer * _iconStatusGradientLayer; // +0x38
    WCFinderJumpInfoDynamicCarouselDetailItemView * _iconStatusView; // +0x40
    WCFinderJumpInfoDynamicCarouselTitleView * _titleView; // +0x48
    WCFinderJumpInfoDynamicCarouselDetailView * _detailView; // +0x50
    MMUILabel * _bottomLabel; // +0x58
    MMUIButton * _actionButton; // +0x60
    unsigned long long _style; // +0x68
    MMTimer * _timer; // +0x70
    unsigned long long _feedExposeTimestamp; // +0x78
    unsigned long long _viewExposeTimestamp; // +0x80
}
+ (id)createIconImageView;
+ (id)createTitleView;
+ (id)createDetailView;
+ (id)createBottomLabel;
+ (id)createActionButton;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (id)jumpInfoStyle;
- (void)loadCardGestures;
- (void)loadSubviews;
- (void)didClickCard:(id)arg1;
- (void)didClickActionButton:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)updateSubviews:(BOOL)arg1;
- (void)switchCarouselDetailViewWithAnimation:(long long)arg1;
- (void)updateCarouselDetailView;
- (void)hideSubviewsBeforeExpandingCard;
- (void)hideSubviewsAnimatedBeforeExpandingCard:(id /* block */)arg1;
- (void)showSubviewsAfterExpandingCard;
- (void)showSubviewsAnimatedAfterExpandingCard:(id /* block */)arg1;
- (void)layoutAndFitSize:(BOOL)arg1;
- (double)_fittingMaxWith;
- (void)SmallCard_layoutAndFitSize:(BOOL)arg1;
- (void)BigCard_layoutAndFitSize:(BOOL)arg1;
- (void)layoutSubviews;
- (void)titleViewContentDidChange;
- (void)detailViewContentDidChange;
- (void)showCard;
- (void)expandCard;
- (void)dynamicCarouselViewModelDidReloadViewProperties:(id)arg1 shouldReloadSubviews:(BOOL)arg2;
- (void)dynamicCarouselViewModelDidSwitchCarouselContent:(id)arg1;
- (void)dynamicCarouselViewModelDidUpdateCarouselContent:(id)arg1;
- (id)jumpInfo;
- (int)showPosition;
- (void)setFeedExposeTime:(unsigned long long)arg1;
- (unsigned long long)feedExposeTime;
- (unsigned long long)viewExposeTime;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)expandJumpInfoViewForCompletePlayIfNeeded;
- (void)changeToPhase:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)jumpInfoAnimatedActionBeforeAnimation:(id /* block */)arg1;
- (void)jumpInfoActionAfterAnimationToPhase:(unsigned long long)arg1;
- (void)resetReportData;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)currentPhase;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)iconStatusContainerView;
- (void)setIconStatusContainerView:(id)arg1;
- (id)iconStatusGradientLayer;
- (void)setIconStatusGradientLayer:(id)arg1;
- (id)iconStatusView;
- (void)setIconStatusView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)detailView;
- (void)setDetailView:(id)arg1;
- (id)bottomLabel;
- (void)setBottomLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (unsigned long long)style;
- (BOOL)isStyleInitialized;
- (void)setIsStyleInitialized:(BOOL)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (unsigned long long)feedExposeTimestamp;
- (void)setFeedExposeTimestamp:(unsigned long long)arg1;
- (unsigned long long)viewExposeTimestamp;
- (void)setViewExposeTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
