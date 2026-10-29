@interface EmojiCell : UICollectionViewCell
{
    UIImageView * _checkbox; // +0x8
    CGSize _emoticonContentSize; // +0x10
    BOOL _isEditing; // +0x20
    BOOL _isChecked; // +0x21
    MMWebImageView * _thumbView; // +0x28
    MMEmoticonView * _emoticonView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForEmoticonConfiguration;
- (void)fitEmoticonViewWithContentSize:(CGSize)arg1;
- (void)layoutEmoticonViewWithContentSize:(CGSize)arg1;
- (void)setIsEditing:(BOOL)arg1;
- (void)setIsChecked:(BOOL)arg1;
- (void)refreshCheckboxImage;
- (void)prepareForReuse;
- (id)thumbView;
- (void)setThumbView:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (BOOL)isEditing;
- (BOOL)isChecked;
- (void).cxx_destruct;
@end
