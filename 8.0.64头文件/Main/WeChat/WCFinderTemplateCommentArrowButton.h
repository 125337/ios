@interface WCFinderTemplateCommentArrowButton : MMUIButton
{
    MMWebImageView * _iconView; // +0x8
    UILabel * _textLabel; // +0x10
}
+ (double)heightWithTitle:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateWithIcon:(id)arg1 title:(id)arg2;
- (void)updateWithIconUrl:(id)arg1 title:(id)arg2 bgColor:(id)arg3;
- (void)layoutWithMaxWidth:(double)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
