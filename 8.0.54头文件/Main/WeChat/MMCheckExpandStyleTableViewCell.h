@interface MMCheckExpandStyleTableViewCell : MMTableViewCell
{
    UIImageView * _leftCheckMark; // +0x8
    UIImageView * _rightArrow; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subTitleLabel; // +0x20
    UIView * _lineView; // +0x28
}
+ (id)cellIdentifier;
+ (double)heightForTitle:(id)arg1 cellWidth:(double)arg2;
+ (double)heightForTitle:(id)arg1 subTitle:(id)arg2 cellWidth:(double)arg3;
+ (double)getCheckmarkLeftPadding;
+ (double)getTitleLabelLeftPadding;
+ (double)getTitleLabelRightPadding;
+ (double)getRightArrowRightPadding;
+ (id)getTitleLabelColor;
+ (id)getTitleLabelFont;
+ (double)getSeparatorLeftPadding;
+ (double)getSeparatorRightPadding;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)toggleArrowHidden:(BOOL)arg1;
- (void)initView;
- (void)updateWithTitle:(id)arg1 isChecked:(BOOL)arg2 isExpanded:(BOOL)arg3 checkColor:(id)arg4;
- (void)updateWithTitle:(id)arg1 subTitle:(id)arg2 isChecked:(BOOL)arg3 isExpanded:(BOOL)arg4 checkColor:(id)arg5;
- (void)layoutSubviews;
- (id)leftCheckMark;
- (void)setLeftCheckMark:(id)arg1;
- (id)rightArrow;
- (void)setRightArrow:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end

