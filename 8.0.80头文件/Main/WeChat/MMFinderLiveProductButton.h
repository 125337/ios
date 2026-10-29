@interface MMFinderLiveProductButton : MMUIButton
{
    MMWebImageView * _webImageView; // +0x8
    UIFont * _defaultFont; // +0x10
    double _cardWidth; // +0x18
    double _defaultWidth; // +0x20
    double _defaultSpacing; // +0x28
    FinderWindowProductInfo_ProductButtonInfo * _info; // +0x30
    CGSize _defaultIconSize; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)webImageView;
- (void)setWebImageView:(id)arg1;
- (CGSize)defaultIconSize;
- (void)setDefaultIconSize:(CGSize)arg1;
- (id)defaultFont;
- (void)setDefaultFont:(id)arg1;
- (double)cardWidth;
- (void)setCardWidth:(double)arg1;
- (double)defaultWidth;
- (void)setDefaultWidth:(double)arg1;
- (double)defaultSpacing;
- (void)setDefaultSpacing:(double)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (void).cxx_destruct;
@end
