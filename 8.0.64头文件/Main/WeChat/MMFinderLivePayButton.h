@interface MMFinderLivePayButton : MMUIView
{
    BOOL _isTrialTimeout; // +0x8
    BOOL _isPayState; // +0x9
    BOOL _isTicket; // +0xa
    unsigned int _priceInWecoin; // +0xc
    double _fullSizeWith; // +0x10
    double _fullSizeOffsetX; // +0x18
    long long _layoutOrientation; // +0x20
    MMUILabel * _retryViewTipLabel; // +0x28
    id /* block */ _payButtonClickCallback; // +0x30
    UIView * _contentView; // +0x38
    MMUIButton * _containerButton; // +0x40
    UIImageView * _wecoinIconView; // +0x48
    MMUILabel * _priceInWecoinLabel; // +0x50
    MMUILabel * _payTipsLabel; // +0x58
    LOTAnimationView * _breatheAnimationView; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (void)layoutUI:(BOOL)arg1;
- (void)layoutRetryViewTipLabel;
- (void)layoutTipsLabels;
- (void)updatePriceInWecoin:(unsigned int)arg1 payState:(BOOL)arg2;
- (double)internalPayButtonWidth;
- (double)internalPayButtonTop;
- (void)setIsTicket:(BOOL)arg1;
- (void)updatePayState:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setIsPayState:(BOOL)arg1;
- (void)setIsTrialTimeout:(BOOL)arg1;
- (void)setFullSizeWith:(double)arg1;
- (void)updateButtonAccessibilityLabelWithPayTips:(id)arg1;
- (void)startBubbleBreatheAnimation;
- (void)stopBubbleBreatheAnimation;
- (void)onPayButtonClicked:(id)arg1;
- (BOOL)isTrialTimeout;
- (BOOL)isPayState;
- (double)fullSizeWith;
- (double)fullSizeOffsetX;
- (void)setFullSizeOffsetX:(double)arg1;
- (BOOL)isTicket;
- (long long)layoutOrientation;
- (void)setLayoutOrientation:(long long)arg1;
- (id)retryViewTipLabel;
- (void)setRetryViewTipLabel:(id)arg1;
- (id /* block */)payButtonClickCallback;
- (void)setPayButtonClickCallback:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)containerButton;
- (void)setContainerButton:(id)arg1;
- (id)wecoinIconView;
- (void)setWecoinIconView:(id)arg1;
- (id)priceInWecoinLabel;
- (void)setPriceInWecoinLabel:(id)arg1;
- (id)payTipsLabel;
- (void)setPayTipsLabel:(id)arg1;
- (unsigned int)priceInWecoin;
- (void)setPriceInWecoin:(unsigned int)arg1;
- (id)breatheAnimationView;
- (void)setBreatheAnimationView:(id)arg1;
- (void).cxx_destruct;
@end
