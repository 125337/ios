@interface BrandProfileFuwuUrlView : BrandProfileFuwuBaseView
{
    BrandProfileFuwuInfo * _fuwuInfo; // +0x8
    UIView * _topDividingView; // +0x10
    MMUIButton * _button; // +0x18
    double _cachedFuwuViewHeight; // +0x20
    UIImageView * _iconView; // +0x28
}
- (id)init;
- (void)setupSubviews;
- (void)layoutSubviews;
- (double)calcuteFuwuViewHeight;
- (void)updateFuwuInfo:(id)arg1;
- (void)onFuwuButtonClicked:(id)arg1;
- (id)fuwuInfo;
- (void)setFuwuInfo:(id)arg1;
- (id)topDividingView;
- (void)setTopDividingView:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (double)cachedFuwuViewHeight;
- (void)setCachedFuwuViewHeight:(double)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void).cxx_destruct;
@end
