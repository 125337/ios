@interface MJPrecisionPickerViewLabelCell : UICollectionViewCell
{
    BOOL _isShowIndicator; // +0x8
    UILabel * _label; // +0x10
    UIView * _indicatorView; // +0x18
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)prepareForReuse;
- (id)indicatorView;
- (void)setIsShowIndicator:(BOOL)arg1;
- (BOOL)isShowIndicator;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end
