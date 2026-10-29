@interface CBTAsstMemoryDetailSourceView : UIView
{
    UILabel * _titleLabel; // +0x8
    UILabel * _contentLabel; // +0x10
}
+ (double)heightForWidth:(double)arg1 title:(id)arg2 content:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 content:(id)arg2;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void).cxx_destruct;
@end
