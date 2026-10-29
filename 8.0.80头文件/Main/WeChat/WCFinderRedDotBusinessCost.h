@interface WCFinderRedDotBusinessCost : NSObject
{
    long long _predict; // +0x8
    long long _genFeature; // +0x10
    long long _predictOnly; // +0x18
}
- (id)init;
- (id)genReportDict;
- (long long)predict;
- (void)setPredict:(long long)arg1;
- (long long)genFeature;
- (void)setGenFeature:(long long)arg1;
- (long long)predictOnly;
- (void)setPredictOnly:(long long)arg1;
@end
