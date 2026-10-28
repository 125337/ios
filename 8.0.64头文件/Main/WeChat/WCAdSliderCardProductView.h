@interface WCAdSliderCardProductView : MMUIView <IWCAdSliderCardLogicExt, CAAnimationDelegate>
{
    BOOL _isDetail; // +0x8
    BOOL _isMediaPlayProcessed; // +0x9
    id <WCAdSliderCardProductViewDelegate> _delegate; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCAdSliderCardProductInfo * _productInfo; // +0x20
    long long _currentIndex; // +0x28
    long long _currentState; // +0x30
    MMUIView * _barView; // +0x38
    MMUILabel * _titleView; // +0x40
    WCAdURLImageView * _productImageView; // +0x48
    CAGradientLayer * _actionBgLayer; // +0x50
    MMUIButton * _actionTitleView; // +0x58
    MMUILabel * _nextTitleView; // +0x60
    WCAdURLImageView * _nextProductImageView; // +0x68
    CAAnimation * _currentAnimation; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 isDetail:(BOOL)arg3;
- (void)dealloc;
- (void)initView;
- (void)switchToIndex:(long long)arg1;
- (void)onMediaPlay;
- (void)doAnimationSwitchToIndex:(long long)arg1 isSlideLeft:(BOOL)arg2;
- (void)delaySwitchToActionState:(double)arg1;
- (void)cancelDelaySwitchToActionState;
- (void)doAnimationSwitchToActionState;
- (void)doAnimationFirstShow;
- (void)setContentWithIndex:(long long)arg1 andState:(long long)arg2;
- (void)showActionView:(long long)arg1;
- (void)hideActionView;
- (id)barView;
- (id)titleView;
- (id)nextTitleView;
- (id)actionTitleView;
- (id)productImageView;
- (id)nextProductImageView;
- (id)actionBgLayer;
- (id)createTitleView;
- (id)createProductImageView;
- (void)updateVisible;
- (void)initNextProductView:(long long)arg1;
- (void)removeNextProductView;
- (void)removeAllAnimations;
- (void)resetCurrentContentView;
- (id)fetchProductItem:(long long)arg1;
- (id)currentProductItem;
- (id)sliderCardLogic;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onBarViewTapped;
- (void)onOpeningAnimationVisibleStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 isVisible:(BOOL)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (BOOL)isDetail;
- (void)setIsDetail:(BOOL)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (long long)currentState;
- (void)setCurrentState:(long long)arg1;
- (void)setBarView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setProductImageView:(id)arg1;
- (void)setActionBgLayer:(id)arg1;
- (void)setActionTitleView:(id)arg1;
- (void)setNextTitleView:(id)arg1;
- (void)setNextProductImageView:(id)arg1;
- (id)currentAnimation;
- (void)setCurrentAnimation:(id)arg1;
- (BOOL)isMediaPlayProcessed;
- (void)setIsMediaPlayProcessed:(BOOL)arg1;
- (void).cxx_destruct;
@end
