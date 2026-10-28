@interface MMFinderLiveGroupedProductsCell : UITableViewCell
{
    MMFinderLiveGroupedProductsImagesView * _imageViews; // +0x8
    MMFinderLiveGroupedProductsBottomView * _bottomView; // +0x10
    MMFinderLiveGroupedProductsViewModel * _viewModel; // +0x18
}
+ (double)preferHeightWithViewModel:(id)arg1 inWidth:(double)arg2;
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
