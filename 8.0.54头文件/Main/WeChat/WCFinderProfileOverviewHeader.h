@interface WCFinderProfileOverviewHeader : UICollectionReusableView
{
    BOOL _needReDisplayExtButton; // +0x8
    UILabel * _titleLabel; // +0x10
    UIView * _bottomLine; // +0x18
    UIButton * _extButton; // +0x20
    UIEdgeInsets _titleEdgeInsets; // +0x28
    UIEdgeInsets _lineEdgeInsets; // +0x48
}
+ (double)defaultDisplayHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)extButton;
- (void)prepareForReuse;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void)setExtButton:(id)arg1;
- (UIEdgeInsets)titleEdgeInsets;
- (void)setTitleEdgeInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)lineEdgeInsets;
- (void)setLineEdgeInsets:(UIEdgeInsets)arg1;
- (BOOL)needReDisplayExtButton;
- (void)setNeedReDisplayExtButton:(BOOL)arg1;
- (void).cxx_destruct;
@end

