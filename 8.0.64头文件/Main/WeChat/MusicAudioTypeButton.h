@interface MusicAudioTypeButton : UIControl
{
    MusicSourceViewInfo * _info; // +0x8
    NSString * _hintLabelText; // +0x10
    UILabel * _titleLabel; // +0x18
    UIImageView * _imageView; // +0x20
    UIView * _verticalSeparator; // +0x28
    double _verticalSeparatorPadding; // +0x30
    double _contentSpacing; // +0x38
    UILabel * _descriptionLabel; // +0x40
    CGSize _verticalSeparatorSize; // +0x48
    UIEdgeInsets _contentEdgeInsets; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setupDescriptionLabelAlpha;
- (void)showArrowViewOnHintLabelExpanded:(BOOL)arg1;
- (void)setInfo:(id)arg1;
- (BOOL)canShowHintLabelTextWithInfo:(id)arg1;
- (void)setHintLabelText:(id)arg1;
- (void)setAudioType:(int)arg1;
- (CGSize)imageViewSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (void)decorateLabel:(id)arg1;
- (id)titleLabel;
- (id)descriptionLabel;
- (id)imageView;
- (id)verticalSeparator;
- (BOOL)showHintLabel;
- (id)accessibilityLabel;
- (id)currentTitle;
- (id)info;
- (id)hintLabelText;
- (void)setTitleLabel:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setVerticalSeparator:(id)arg1;
- (CGSize)verticalSeparatorSize;
- (void)setVerticalSeparatorSize:(CGSize)arg1;
- (double)verticalSeparatorPadding;
- (void)setVerticalSeparatorPadding:(double)arg1;
- (double)contentSpacing;
- (void)setContentSpacing:(double)arg1;
- (UIEdgeInsets)contentEdgeInsets;
- (void)setContentEdgeInsets:(UIEdgeInsets)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void).cxx_destruct;
@end
