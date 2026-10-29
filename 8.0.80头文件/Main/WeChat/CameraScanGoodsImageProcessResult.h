@interface CameraScanGoodsImageProcessResult : NSObject
{
    BOOL _hasCodeInDetection; // +0x8
    long long _shadowFilterReason; // +0x10
    Mat _oriImage; // +0x18
}
- (Mat)oriImage;
- (void)setOriImage:(Mat)arg1;
- (BOOL)hasCodeInDetection;
- (void)setHasCodeInDetection:(BOOL)arg1;
- (long long)shadowFilterReason;
- (void)setShadowFilterReason:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
