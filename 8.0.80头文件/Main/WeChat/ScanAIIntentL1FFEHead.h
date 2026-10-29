@interface ScanAIIntentL1FFEHead : NSObject
{
    NSString * _classificationLayer; // +0x8
    NSString * _distanceLayer; // +0x10
    NSString * _featureLayer; // +0x18
    long long _stride; // +0x20
}
- (id)classificationLayer;
- (void)setClassificationLayer:(id)arg1;
- (id)distanceLayer;
- (void)setDistanceLayer:(id)arg1;
- (id)featureLayer;
- (void)setFeatureLayer:(id)arg1;
- (long long)stride;
- (void)setStride:(long long)arg1;
- (void).cxx_destruct;
@end
