@interface TextStatePublishOfficialIconItemView : UICollectionViewCell
{
    TextStatePublishOfficialIconItem * _iconItem; // +0x8
    MMWebImageView * _iconImageView; // +0x10
    MMUILabel * _descriptionLabel; // +0x18
}
+ (double)itemWidth;
+ (double)minItemHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setIconItem:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)iconItem;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (void).cxx_destruct;
@end
