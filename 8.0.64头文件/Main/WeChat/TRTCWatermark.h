@interface TRTCWatermark : NSObject <NSCopying>
{
    int _zOrder; // +0x8
    NSString * _watermarkUrl; // +0x10
    CGRect _rect; // +0x18
}
- (WaterMark)convertToCppParams;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)watermarkUrl;
- (void)setWatermarkUrl:(id)arg1;
- (CGRect)rect;
- (void)setRect:(CGRect)arg1;
- (int)zOrder;
- (void)setZOrder:(int)arg1;
- (void).cxx_destruct;
@end
