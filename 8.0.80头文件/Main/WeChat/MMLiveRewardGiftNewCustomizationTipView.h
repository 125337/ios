@interface MMLiveRewardGiftNewCustomizationTipView : MMRectTriangleArrowView
{
    id /* block */ _selfSizeChangeCallback; // +0x8
    id /* block */ _onTapCallback; // +0x10
    MMUILabel * _tipLabel; // +0x18
    MMFinderLiveRewardGiftItem * _giftItem; // +0x20
    MMFinderLiveGiftNewCustomizationModel * _customizationModel; // +0x28
}
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2;
- (void)layoutSubviews;
- (void)addGestures;
- (void)layoutUI;
- (void)layoutTipLabel;
- (void)updateTipLabelOrigin;
- (void)updateTipContent;
- (void)updateSelfWidthIfNeeded;
- (void)updateWithGiftItem:(id)arg1;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (void)onTapCustomizationTip:(id)arg1;
- (id /* block */)selfSizeChangeCallback;
- (void)setSelfSizeChangeCallback:(id /* block */)arg1;
- (id /* block */)onTapCallback;
- (void)setOnTapCallback:(id /* block */)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)customizationModel;
- (void)setCustomizationModel:(id)arg1;
- (void).cxx_destruct;
@end
