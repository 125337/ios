@interface CameraScanGoodsImageSnapshotResult : NSObject
{
    BOOL _hasCodeInDetection; // +0x8
    UIImage * _image; // +0x10
    CGPoint _normalizeTouchPoint; // +0x18
}
- (id)image;
- (void)setImage:(id)arg1;
- (BOOL)hasCodeInDetection;
- (void)setHasCodeInDetection:(BOOL)arg1;
- (CGPoint)normalizeTouchPoint;
- (void)setNormalizeTouchPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end
