@interface QVectorHeatAggregationUnit : NSObject
{
    float _intensity; // +0x8
    NSArray * _nodeIndices; // +0x10
    CLLocationCoordinate2D _center; // +0x18
}
- (CLLocationCoordinate2D)center;
- (void)setCenter:(CLLocationCoordinate2D)arg1;
- (float)intensity;
- (void)setIntensity:(float)arg1;
- (id)nodeIndices;
- (void)setNodeIndices:(id)arg1;
- (void).cxx_destruct;
@end
