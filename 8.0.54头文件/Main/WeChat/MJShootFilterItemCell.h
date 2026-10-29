@interface MJShootFilterItemCell : UICollectionViewCell <MJMaterialLoadingStatusView>
{
    BOOL _isCellSelected; // +0x8
    MMUIView * _iconContainerView; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUIView * _borderView; // +0x28
    MMUIView * _blurView; // +0x30
    MMUIView * _loadingView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)configCellWithItem:(id)arg1;
- (void)setIsCellSelected:(BOOL)arg1;
- (id)mj_loadingContainerView;
- (id)iconContainerView;
- (id)iconImageView;
- (id)titleLabel;
- (id)borderView;
- (id)blurView;
- (id)loadingView;
- (BOOL)isCellSelected;
- (void)setIconContainerView:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setBorderView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

