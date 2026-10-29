@interface EmoticonLensMoreHeaderView : UICollectionReusableView
{
    BOOL _showTopSeparator; // +0x8
    NSString * _title; // +0x10
    UILabel * _titleLabel; // +0x18
    UIView * _topSeparator; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setTitle:(id)arg1;
- (void)setShowTopSeparator:(BOOL)arg1;
- (void)layoutSubviews;
- (id)title;
- (BOOL)showTopSeparator;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)topSeparator;
- (void)setTopSeparator:(id)arg1;
- (void).cxx_destruct;
@end

