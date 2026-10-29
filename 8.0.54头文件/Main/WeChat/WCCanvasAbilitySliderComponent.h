@interface WCCanvasAbilitySliderComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>
{
    WCCanvasAbilitySlider * _abilitySlider; // +0x8
    MMCPLabel * _abilityLabel; // +0x10
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)abilityLabel;
- (id)abilitySlider;
- (void)setAbilitySlider:(id)arg1;
- (void)setAbilityLabel:(id)arg1;
- (void).cxx_destruct;
@end

