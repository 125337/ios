@interface MMFinderLiveGroupedProductsImageView : UICollectionViewCell
{
    BOOL _allLabelsHidden; // +0x8
    MMWebImageView * _imageView; // +0x10
    NSArray * _labels; // +0x18
    MMFinderLiveGroupedProductsViewModel * _viewModel; // +0x20
    FinderLiveGetPairingTabResponse_PairingImg * _data; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)onLabelClicked:(id)arg1;
- (void)setAllLabelsHidden:(BOOL)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)labels;
- (void)setLabels:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (BOOL)allLabelsHidden;
- (void).cxx_destruct;
@end
