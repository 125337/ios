@interface WCMomentsPrivacyLastSelectCell : MMTableViewCell
{
    UILabel * _titleLabel; // +0x8
    UIView * _lineView; // +0x10
}
+ (id)cellIdentifier;
+ (double)heightForTitle:(id)arg1 cellWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateWithTitle:(id)arg1;
- (void)layoutSubviews;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end
