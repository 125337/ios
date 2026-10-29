@interface MMFinderLiveFeedStreamProductCardView : MMFinderLiveFeedStreamWidgetBaseView
{
    BOOL _isExpandAnimating; // +0x8
    id <MMFinderLiveFeedStreamProductCardViewDelegate> _delegate; // +0x10
    FinderWindowProductInfo * _productInfo; // +0x18
    unsigned long long _style; // +0x20
    unsigned long long _watchTimeToChangeBubble; // +0x28
    id /* block */ _expandAnimationBlock; // +0x30
    MMWebImageView * _iconImageView; // +0x38
    UILabel * _titleLabel; // +0x40
    UILabel * _descLabel; // +0x48
    UILabel * _priceLabel; // +0x50
    PAGView * _playingIconView; // +0x58
    MMUIButton * _actionButton; // +0x60
    MMTimer * _timer; // +0x68
    FinderWindowProductInfo * _pendingProductInfo; // +0x70
}
+ (double)defaultHeightWithStyle:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setTaskId:(id)arg1;
- (void)prepareForReuse;
- (void)setProductInfo:(id)arg1;
- (void)setStyle:(unsigned long long)arg1 animated:(BOOL)arg2;
- (id)priceString:(unsigned long long)arg1;
- (id)iconImageView;
- (id)titleLabel;
- (id)descLabel;
- (id)priceLabel;
- (id)actionButton;
- (id)playingIconView;
- (void)onActionButtonDidClick:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)notifyToExpand;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)productInfo;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)watchTimeToChangeBubble;
- (void)setWatchTimeToChangeBubble:(unsigned long long)arg1;
- (id /* block */)expandAnimationBlock;
- (void)setExpandAnimationBlock:(id /* block */)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setPriceLabel:(id)arg1;
- (void)setPlayingIconView:(id)arg1;
- (void)setActionButton:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)isExpandAnimating;
- (void)setIsExpandAnimating:(BOOL)arg1;
- (id)pendingProductInfo;
- (void)setPendingProductInfo:(id)arg1;
- (void).cxx_destruct;
@end

