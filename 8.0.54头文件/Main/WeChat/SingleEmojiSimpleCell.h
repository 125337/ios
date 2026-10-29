@interface SingleEmojiSimpleCell : UICollectionViewCell
{
    EmojiInfoObj * _emojiInfo; // +0x8
    MMWebImageView * _imageView; // +0x10
    UIEdgeInsets _edgeInsets; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1;
- (void)updateWithEmojiInfo:(id)arg1;
- (void)initEmoticonView;
- (void)setEdgeInsets:(UIEdgeInsets)arg1;
- (void)layoutSubviews;
- (UIEdgeInsets)edgeInsets;
- (id)emojiInfo;
- (void)setEmojiInfo:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end

