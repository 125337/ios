@interface MJDecorPackageCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MJDecorPackageItem * _item; // +0x18
    MMWebImageView * _iconImageView; // +0x20
    MMUIView * _maskView; // +0x28
    MMUIView * _iconContainerView; // +0x30
    MMUIActivityIndicatorView * _loadingView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)prepareForReuse;
- (void)setupWithItem:(id)arg1;
- (void)syncWithStatus;
- (void)setIsCellSelected:(BOOL)arg1;
- (id)iconContainerView;
- (id)iconImageView;
- (id)loadingView;
- (id)titleLabel;
- (void)setupMaskViewWithLoadingStyle;
- (void)setTitleLabel:(id)arg1;
- (id)item;
- (BOOL)isCellSelected;
- (void)setIconImageView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (void)setIconContainerView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
