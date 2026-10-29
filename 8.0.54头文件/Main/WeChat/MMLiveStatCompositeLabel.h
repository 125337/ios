@interface MMLiveStatCompositeLabel : UIView
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _subtitleLabel; // +0x10
}
- (id)init;
- (void)layoutSubviews;
- (void)initView;
- (void)updateWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

