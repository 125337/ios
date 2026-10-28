@interface WCFinderNotifySystemTableViewCell : UITableViewCell
{
    UILabel * _titleLabel; // +0x8
    RichTextView * _contentTextView; // +0x10
    UIView * _iconImageView; // +0x18
    UIImageView * _arrowImageView; // +0x20
    UIView * _lineView; // +0x28
    UILabel * _redDotCountLabel; // +0x30
}
+ (double)heightForSystemCellWithWidth:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUpUI;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)redDotCountLabel;
- (void)setRedDotCountLabel:(id)arg1;
- (void).cxx_destruct;
@end
