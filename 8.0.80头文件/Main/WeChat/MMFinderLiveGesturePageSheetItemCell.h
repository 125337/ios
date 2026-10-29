@interface MMFinderLiveGesturePageSheetItemCell : UICollectionViewCell
{
    UIImageView * _thumbnailView; // +0x8
    UILabel * _nameLabel; // +0x10
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithGesture:(id)arg1 enabled:(BOOL)arg2;
- (void)layoutSubviews;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (void).cxx_destruct;
@end
