@interface MMFinderLiveShopInfoEcShopProductsView : MMUIView
{
    id /* block */ _clickHandler; // +0x8
    NSMutableArray * _cells; // +0x10
}
+ (double)preferredHeightForContentWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setProducts:(id)arg1;
- (void)layoutSubviews;
- (id /* block */)clickHandler;
- (void)setClickHandler:(id /* block */)arg1;
- (id)cells;
- (void)setCells:(id)arg1;
- (void).cxx_destruct;
@end
