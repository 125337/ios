@interface TextStatePublishRecentUseIconItemView : UICollectionViewCell
{
    TextStateIcon * _icon; // +0x8
    UIStackView * _stackView; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    MMUILabel * _iconDescriptionLabel; // +0x20
    UIView * _separatorView; // +0x28
    id /* block */ _deleteHandler; // +0x30
}
+ (double)horizonPadding;
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)initSubviews;
- (void)initLayout;
- (void)layoutSubviews;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onDelete:(id)arg1;
- (void)onLongPressToDelete;
- (void)applyLayoutAttributes:(id)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)icon;
- (id)stackView;
- (void)setStackView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)iconDescriptionLabel;
- (void)setIconDescriptionLabel:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id /* block */)deleteHandler;
- (void)setDeleteHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

