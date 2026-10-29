@interface MMFinderLiveFansGroupAnchorEditTableGiftItemCell : MMFinderLiveFansGroupAnchorEditTableCellBase
{
    UIImageView * _thumbnailView; // +0x8
    UILabel * _nameLabel; // +0x10
    UILabel * _attachedTextLabel; // +0x18
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithGiftItem:(id)arg1;
- (void)layoutSubviews;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)attachedTextLabel;
- (void)setAttachedTextLabel:(id)arg1;
- (void).cxx_destruct;
@end

