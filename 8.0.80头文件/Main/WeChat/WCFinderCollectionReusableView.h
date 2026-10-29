@interface WCFinderCollectionReusableView : UICollectionReusableView
{
    double _contentWidth; // +0x8
    UIView * _wc_contentView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (double)contentWidth;
- (id)wc_contentView;
- (void)addSubview:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)addSubviewToReusableView:(id)arg1;
- (void)layoutSubviews;
- (void)reLayoutContentView;
- (void)setContentWidth:(double)arg1;
- (void)setWc_contentView:(id)arg1;
- (void).cxx_destruct;
@end
