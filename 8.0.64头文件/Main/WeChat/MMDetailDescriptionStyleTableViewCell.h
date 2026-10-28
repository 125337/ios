@interface MMDetailDescriptionStyleTableViewCell : MMTableViewCell
{
    BOOL _centerTitleIfNeeded; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _subTitleLabel; // +0x18
    UIView * _lineView; // +0x20
}
+ (id)cellIdentifier;
+ (double)heightForTitle:(id)arg1 subTitleAttributeString:(id)arg2 cellWidth:(double)arg3;
+ (id)getTitleLabelFont;
+ (id)getSubTitleLabelFont;
+ (id)getTitleLabelColor;
+ (double)getLabelsLeftPadding;
+ (double)getLabelsRightPadding;
+ (double)getSeparatorLeftPadding;
+ (double)getSeparatorRightPadding;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateWithTitle:(id)arg1 subTitleAttributeString:(id)arg2;
- (void)layoutSubviews;
- (BOOL)centerTitleIfNeeded;
- (void)setCenterTitleIfNeeded:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end
