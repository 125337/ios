@interface MMFinderLiveStickerTextTemplateItemCell : UICollectionViewCell
{
    UIView * _containerView; // +0x8
    UIImageView * _thumbnailView; // +0x10
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithTemplateItem:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (void).cxx_destruct;
@end
