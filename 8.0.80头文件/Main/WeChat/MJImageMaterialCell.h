@interface MJImageMaterialCell : UICollectionViewCell
{
    MJImageMaterialItem * _item; // +0x8
    UIView * _thumbnailContainer; // +0x10
    MMWebImageView * _thumbnailImageView; // +0x18
    UIView * _loadingMaskView; // +0x20
    MMUIActivityIndicatorView * _loadingIndicator; // +0x28
}
+ (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupViews;
- (void)_layoutViews;
- (void)prepareForReuse;
- (void)setupWithItem:(id)arg1;
- (void)syncWithStatus;
- (void)updateSelected:(BOOL)arg1;
- (void)_startLoading;
- (void)_stopLoading;
- (id)loadingMaskView;
- (id)loadingIndicator;
- (id)item;
- (void)setItem:(id)arg1;
- (id)thumbnailContainer;
- (void)setThumbnailContainer:(id)arg1;
- (id)thumbnailImageView;
- (void)setLoadingMaskView:(id)arg1;
- (void)setLoadingIndicator:(id)arg1;
- (void).cxx_destruct;
@end
