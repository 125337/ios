@interface OMJOverlayDesc : NSObject
{
    int _zIndex; // +0x8
    OMJSpatialInfo * _spatialInfo; // +0x10
}
- (id)initWithSpatialInfo:(id)arg1;
- (id)initWithSpatialInfo:(id)arg1 zIndex:(int)arg2;
- (id)description;
- (id)spatialInfo;
- (void)setSpatialInfo:(id)arg1;
- (int)zIndex;
- (void)setZIndex:(int)arg1;
- (void).cxx_destruct;
@end
