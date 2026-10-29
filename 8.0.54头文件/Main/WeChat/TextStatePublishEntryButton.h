@interface TextStatePublishEntryButton : MMUIButton
{
    TextStateIcon * _exposeIcon; // +0x8
    MMWebImageView * _iconImageView; // +0x10
    MMUILabel * _descriptionLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)initCommonStyles;
- (void)setExposeIcon:(id)arg1;
- (void)changeForStandardStyle;
- (void)changeForIconStyle;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)mainColor;
- (CGSize)iconSize;
- (double)buttonHeight;
- (id)exposeIcon;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (void).cxx_destruct;
@end

