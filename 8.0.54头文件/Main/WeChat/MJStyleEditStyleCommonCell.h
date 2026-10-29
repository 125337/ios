@interface MJStyleEditStyleCommonCell : UICollectionViewCell <MJMaterialLoadingStatusView, MJStyleEditCollectionViewCellProtocol>
{
    MMWebImageView * _imageView; // +0x8
    MMUILabel * _textLabel; // +0x10
    UIView * _selectedView; // +0x18
    MMUIView * _loadingView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)prepareForReuse;
- (void)updateImageWith:(id)arg1;
- (void)updateSelected:(id)arg1;
- (void)updateSelectionEnabled:(id)arg1;
- (id)imageView;
- (id)textLabel;
- (id)selectedView;
- (id)loadingView;
- (id)mj_loadingContainerView;
- (void)setImageView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setSelectedView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

