@interface MMFinderLiveShopInfoEcShopProductsCell : MMUIView
{
    MMWebImageView * _imageView; // +0x8
    FinderLiveGetAnchorHeaderEcInfoResponse_ProfileInfo_ProductInfo * _product; // +0x10
    id /* block */ _tapHandler; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setProduct:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)product;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
