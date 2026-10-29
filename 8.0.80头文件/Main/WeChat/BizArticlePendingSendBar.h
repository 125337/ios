@interface BizArticlePendingSendBar : MMUIView
{
    id <BizArticlePendingSendBarDelegate> _delegate; // +0x8
    UIView * _backgroundCardView; // +0x10
    MMUILabel * _hintLabel; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMWebImageView * _coverImageView; // +0x28
    UIButton * _interactionButton; // +0x30
    unsigned long long _contentType; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 contentType:(unsigned long long)arg2 imageUrl:(id)arg3;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onTapBar;
- (void)onInteractionTouchDown:(id)arg1;
- (void)onInteractionTouchEnd:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundCardView;
- (void)setBackgroundCardView:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)interactionButton;
- (void)setInteractionButton:(id)arg1;
- (unsigned long long)contentType;
- (void)setContentType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
