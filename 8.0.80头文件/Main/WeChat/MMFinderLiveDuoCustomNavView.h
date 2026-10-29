@interface MMFinderLiveDuoCustomNavView : UIView
{
    double _topExtension; // +0x8
    UIView * _leftContentView; // +0x10
    UILabel * _titleLabel; // +0x18
    UIView * _rightContentView; // +0x20
    double _reservedWidth; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setReservedWidth:(double)arg1;
- (void)setTopExtension:(double)arg1;
- (double)topExtension;
- (id)leftContentView;
- (void)setLeftContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rightContentView;
- (void)setRightContentView:(id)arg1;
- (double)reservedWidth;
- (void).cxx_destruct;
@end
