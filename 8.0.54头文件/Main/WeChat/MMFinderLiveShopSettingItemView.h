@interface MMFinderLiveShopSettingItemView : UIView
{
    BOOL _enableDarkmode; // +0x8
    unsigned long long _level; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _detailLabel; // +0x20
    UIView * _titlePreLineView; // +0x28
    NSNumber * _customLabelLeft; // +0x30
    NSNumber * _customDetailLabelWidth; // +0x38
    UIView * _highLightShadowView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setTitleLabelFontSize:(double)arg1;
- (void)setDetailLabelFontSize:(double)arg1;
- (void)layoutSubviews;
- (void)setLevel:(unsigned long long)arg1;
- (void)addLayoutObserveFor:(id)arg1 keyPaths:(id)arg2;
- (unsigned long long)level;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)titlePreLineView;
- (void)setTitlePreLineView:(id)arg1;
- (id)customLabelLeft;
- (void)setCustomLabelLeft:(id)arg1;
- (id)customDetailLabelWidth;
- (void)setCustomDetailLabelWidth:(id)arg1;
- (BOOL)enableDarkmode;
- (void)setEnableDarkmode:(BOOL)arg1;
- (id)highLightShadowView;
- (void)setHighLightShadowView:(id)arg1;
- (void).cxx_destruct;
@end

