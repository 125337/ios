@interface WAHomeRecommendHeaderTableViewCell : MMTableViewCell <ZZFlexibleLayoutViewProtocol>
{
    UIView * m_bottomLine; // +0x8
    UILabel * _titleLabel; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubViews;
- (void)layoutSubviews;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

