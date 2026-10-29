@interface TAVRenderReportData : NSObject
{
    long long _renderTime; // +0x8
    double _renderCostTime; // +0x10
    long long _decodeTime; // +0x18
    double _decodeCostTime; // +0x20
    long long _decodeSuccessTime; // +0x28
    CGSize _renderSize; // +0x30
}
- (CGSize)renderSize;
- (void)setRenderSize:(CGSize)arg1;
- (long long)renderTime;
- (void)setRenderTime:(long long)arg1;
- (double)renderCostTime;
- (void)setRenderCostTime:(double)arg1;
- (long long)decodeTime;
- (void)setDecodeTime:(long long)arg1;
- (double)decodeCostTime;
- (void)setDecodeCostTime:(double)arg1;
- (long long)decodeSuccessTime;
- (void)setDecodeSuccessTime:(long long)arg1;
@end
