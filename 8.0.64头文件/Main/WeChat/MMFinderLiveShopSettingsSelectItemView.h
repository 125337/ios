@interface MMFinderLiveShopSettingsSelectItemView : MMFinderLiveShopSettingItemView
{
    UIImageView * _iconView; // +0x48
    UIImageView * _leftIconView; // +0x50
    id /* block */ _onSelected; // +0x58
}
+ (CGSize)leftIconDefaultSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)onTapped;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)leftIconView;
- (void)setLeftIconView:(id)arg1;
- (id /* block */)onSelected;
- (void)setOnSelected:(id /* block */)arg1;
- (void).cxx_destruct;
@end
