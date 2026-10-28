@interface WCFinderProductShareCellPreloadData : NSObject
{
    BOOL _isInLiving; // +0x8
    FinderWindowProductInfo * _productInfo; // +0x10
}
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (BOOL)isInLiving;
- (void)setIsInLiving:(BOOL)arg1;
- (void).cxx_destruct;
@end
