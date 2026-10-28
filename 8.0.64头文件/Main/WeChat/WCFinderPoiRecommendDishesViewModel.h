@interface WCFinderPoiRecommendDishesViewModel : NSObject
{
    id <WCFinderPoiRecommendDishesViewModelDelegte> _delegate; // +0x8
    FinderPoiBasicInfoResponse_RecommendDishesComponent * _recommendDishesComponent; // +0x10
    WCFinderPoiRecommendDishesInfo * _dishesInfo; // +0x18
}
- (id)initWithRecommendDishesComponent:(id)arg1;
- (void)requestPoiRecommendDishesDetail;
- (id)dishDetailAtIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recommendDishesComponent;
- (void)setRecommendDishesComponent:(id)arg1;
- (id)dishesInfo;
- (void)setDishesInfo:(id)arg1;
- (void).cxx_destruct;
@end
