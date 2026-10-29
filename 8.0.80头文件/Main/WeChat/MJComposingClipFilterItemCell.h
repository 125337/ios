@interface MJComposingClipFilterItemCell : UICollectionViewCell <MJMaterialLoadingStatusView>
{
    BOOL _isCellSelected; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    MMUIView * _loadingView; // +0x20
    UIImageView * _disableImageView; // +0x28
    MJSegmentFilterInspectorViewModel * _viewModel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (void)commonInit;
- (void)configCellWithFilter:(id)arg1;
- (void)setIsCellSelected:(BOOL)arg1;
- (id)mj_loadingContainerView;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)isCellSelected;
- (id)disableImageView;
- (void)setDisableImageView:(id)arg1;
- (id)viewModel;
- (void).cxx_destruct;
@end
