@interface MJImageTemplateCell : UICollectionViewCell
{
    MMWebImageView * _coverImageView; // +0x8
    UILabel * _titleLabel; // +0x10
    MJImageTemplateItem * _item; // +0x18
    UIView * _coverImageContainer; // +0x20
    UIView * _loadingMaskView; // +0x28
    MMUIActivityIndicatorView * _loadingIndicator; // +0x30
}
+ (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupViews;
- (void)_layoutViews;
- (void)prepareForReuse;
- (void)setupWithItem:(id)arg1;
- (void)syncWithStatus;
- (void)syncWithSelected;
- (void)_startLoading;
- (void)_stopLoading;
- (id)loadingMaskView;
- (id)loadingIndicator;
- (id)coverImageView;
- (id)titleLabel;
- (id)item;
- (void)setItem:(id)arg1;
- (id)coverImageContainer;
- (void)setCoverImageContainer:(id)arg1;
- (void)setLoadingMaskView:(id)arg1;
- (void)setLoadingIndicator:(id)arg1;
- (void).cxx_destruct;
@end
