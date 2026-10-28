@interface QVisLayerPayload : NSObject
{
    BOOL _hidden; // +0x8
    BOOL _isAnimated; // +0x9
    BOOL _enable3D; // +0xa
    int _minZoomLevel; // +0xc
    int _maxZoomLevel; // +0x10
    int _zIndex; // +0x14
    NSString * _layerID; // +0x18
    NSString * _originalLayerId; // +0x20
    double _opacity; // +0x28
    long long _displayLevel; // +0x30
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)layerID;
- (void)setLayerID:(id)arg1;
- (id)originalLayerId;
- (void)setOriginalLayerId:(id)arg1;
- (BOOL)hidden;
- (void)setHidden:(BOOL)arg1;
- (double)opacity;
- (void)setOpacity:(double)arg1;
- (int)minZoomLevel;
- (void)setMinZoomLevel:(int)arg1;
- (int)maxZoomLevel;
- (void)setMaxZoomLevel:(int)arg1;
- (long long)displayLevel;
- (void)setDisplayLevel:(long long)arg1;
- (int)zIndex;
- (void)setZIndex:(int)arg1;
- (BOOL)isAnimated;
- (void)setIsAnimated:(BOOL)arg1;
- (BOOL)enable3D;
- (void)setEnable3D:(BOOL)arg1;
- (void).cxx_destruct;
@end
