@interface WCMusicSearchSmartBoxCellCollectionViewCell : UICollectionViewCell
{
    double _contentSpacing; // +0x8
    MMUILabel * _textLabel; // +0x10
    UIImageView * _iconView; // +0x18
    UIView * _separatorView; // +0x20
    CGSize _iconSize; // +0x28
    UIEdgeInsets _contentEdgeInsets; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setupWithInfo:(id)arg1 query:(id)arg2;
- (void)setupWithInfoString:(id)arg1 query:(id)arg2;
- (void)setupHighlightedTextForLabel:(id)arg1 highlightedText:(id)arg2;
- (void)setSeperateLineHidden:(BOOL)arg1;
- (id)textLabel;
- (id)iconView;
- (id)separatorView;
- (UIEdgeInsets)contentEdgeInsets;
- (void)setContentEdgeInsets:(UIEdgeInsets)arg1;
- (double)contentSpacing;
- (void)setContentSpacing:(double)arg1;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void).cxx_destruct;
@end
