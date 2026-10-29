@interface WCCanvasRandomPickCardButtonView : MMUIButton <WCCanvasImageLoaderObserver>
{
    WCCanvasRandomLayoutEncorePickInfo * _encoreInfo; // +0x8
    UIView * _highlightedCoverView; // +0x10
    CustomVisualEffectView * _blurView; // +0x18
}
+ (CGSize)calcButtonViewSizeWithEncoreInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 encoreInfo:(id)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (id)highlightedCoverView;
- (id)blurView;
- (void)generateSubviews;
- (void)setButtonImage:(id)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)encoreInfo;
- (void)setEncoreInfo:(id)arg1;
- (void)setHighlightedCoverView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void).cxx_destruct;
@end

