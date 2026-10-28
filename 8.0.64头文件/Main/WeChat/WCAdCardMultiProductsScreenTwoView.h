@interface WCAdCardMultiProductsScreenTwoView : WCAdCardMultiProductsBaseView
{
    NSArray * _imageUrls; // +0x20
    NSString * _productDesc; // +0x28
    NSMutableArray * _imageViews; // +0x30
    MMUILabel * _productDescView; // +0x38
    NSMutableArray * _imagesOriCenter; // +0x40
    CGPoint _descOriCenter; // +0x48
}
+ (double)calcHeightWithMaxWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1 imageUrls:(id)arg2 productDesc:(id)arg3;
- (void)generateSubviews;
- (void)resizeSubviewsWithSize:(CGSize)arg1;
- (void)generateImageViews;
- (id)generateImageViewWithUrl:(id)arg1;
- (void)adaptImageLayoutInfoWithMaxWidth:(double)arg1 imageWidth:(double *)arg2 imageGap:(double *)arg3;
- (id)productDescView;
- (id)imageViews;
- (id)imagesOriCenter;
- (id)getObjectsToDisappear;
- (id)getObjectsToAppear;
- (id)imageUrls;
- (void)setImageUrls:(id)arg1;
- (id)productDesc;
- (void)setProductDesc:(id)arg1;
- (void)setImageViews:(id)arg1;
- (void)setProductDescView:(id)arg1;
- (void)setImagesOriCenter:(id)arg1;
- (CGPoint)descOriCenter;
- (void)setDescOriCenter:(CGPoint)arg1;
- (void).cxx_destruct;
@end
