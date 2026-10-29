@interface QTileOverlayPayload : NSObject
{
    BOOL _isHighResoultionTile; // +0x8
    int _maxDataLevel; // +0xc
    int _minDataLevel; // +0x10
    int _zIndex; // +0x14
}
- (BOOL)isHighResoultionTile;
- (void)setIsHighResoultionTile:(BOOL)arg1;
- (int)maxDataLevel;
- (void)setMaxDataLevel:(int)arg1;
- (int)minDataLevel;
- (void)setMinDataLevel:(int)arg1;
- (int)zIndex;
- (void)setZIndex:(int)arg1;
@end

