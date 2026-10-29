@interface EmotionStoreDesignerEmojiCell : UICollectionViewCell
{
    SingleEmoticonView * _emoticonView; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (void).cxx_destruct;
@end

