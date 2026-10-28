@interface MMLimitedModeBizCell : MMTableViewCell
{
    id <MMLimitedModeBizCellDelegate> _delegate; // +0x8
    long long _bizType; // +0x10
    UIImageView * _backgroundImageView; // +0x18
    UIImageView * _iconImageView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _descLabel; // +0x30
    UIImageView * _arrowImageView; // +0x38
    UIView * _separatorView; // +0x40
    UIActivityIndicatorView * _indicatorView; // +0x48
}
+ (id)cellInTableView:(id)arg1 delegate:(id)arg2;
+ (double)cellHeight;
- (void)updateWithBizType:(long long)arg1 position:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)bizType;
- (void)setBizType:(long long)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end
