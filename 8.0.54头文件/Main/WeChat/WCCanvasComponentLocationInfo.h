@interface WCCanvasComponentLocationInfo : NSObject
{
    POIInfo * _poiInfo; // +0x8
    double _topLineSize; // +0x10
    double _bottomLineSize; // +0x18
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (double)topLineSize;
- (void)setTopLineSize:(double)arg1;
- (double)bottomLineSize;
- (void)setBottomLineSize:(double)arg1;
- (void).cxx_destruct;
@end

