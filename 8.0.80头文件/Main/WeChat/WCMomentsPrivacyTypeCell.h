@interface WCMomentsPrivacyTypeCell : MMTableViewCell
{
    UIImageView * _leftCheckMark; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _subTitleLabel; // +0x18
    UIView * _lineView; // +0x20
}
+ (id)cellIdentifier;
+ (double)heightForTitle:(id)arg1 subTitle:(id)arg2 cellWidth:(double)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateWithTitle:(id)arg1 subTitle:(id)arg2 isChecked:(BOOL)arg3;
- (void)layoutSubviews;
- (id)leftCheckMark;
- (void)setLeftCheckMark:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end
