@interface PreviewBottomButton : UIButton
{
    UILabel * _contentLabel; // +0x8
    UIImageView * _iconView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (double)totalHeight;
- (void)setImage:(id)arg1 title:(id)arg2;
- (void)layoutSubviews;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void).cxx_destruct;
@end
