@interface WCFinderRedPacketVideoEditCropRectModel : NSObject
{
    double _topPercent; // +0x8
    double _leftPercent; // +0x10
    double _widthPercent; // +0x18
    double _heightPercent; // +0x20
}
- (id)init;
- (id)description;
- (double)topPercent;
- (void)setTopPercent:(double)arg1;
- (double)leftPercent;
- (void)setLeftPercent:(double)arg1;
- (double)widthPercent;
- (void)setWidthPercent:(double)arg1;
- (double)heightPercent;
- (void)setHeightPercent:(double)arg1;
@end
