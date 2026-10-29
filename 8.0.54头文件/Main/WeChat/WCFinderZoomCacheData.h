@interface WCFinderZoomCacheData : NSObject
{
    UIView * _snapView; // +0x8
    double _snapCornerRadius; // +0x10
    CGRect _snapOriginFrame; // +0x18
}
- (id)snapView;
- (void)setSnapView:(id)arg1;
- (CGRect)snapOriginFrame;
- (void)setSnapOriginFrame:(CGRect)arg1;
- (double)snapCornerRadius;
- (void)setSnapCornerRadius:(double)arg1;
- (void).cxx_destruct;
@end

