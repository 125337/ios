@interface WCFinderProfileStoreProductCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>
{
    ECProductCardViewModel * _viewDataModel; // +0x8
    NSMutableDictionary * _viewMap; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
+ (id)elementsForCardVM:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (void)reloadData;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)viewDataModel;
- (id)viewMap;
- (void)setViewMap:(id)arg1;
- (void).cxx_destruct;
@end
