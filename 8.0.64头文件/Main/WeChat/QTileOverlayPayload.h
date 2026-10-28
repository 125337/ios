@interface QTileOverlayPayload : NSObject
{
    BOOL _isHighResoultionTile; // +0x8
    BOOL _toSetVisibleLevel; // +0x9
    int _maxDataLevel; // +0xc
    int _minDataLevel; // +0x10
    int _zIndex; // +0x14
    int _minVisibleLevel; // +0x18
    int _maxVisibleLevel; // +0x1c
}
- (BOOL)isHighResoultionTile;
- (void)setIsHighResoultionTile:(BOOL)arg1;
- (int)maxDataLevel;
- (void)setMaxDataLevel:(int)arg1;
- (int)minDataLevel;
- (void)setMinDataLevel:(int)arg1;
- (int)zIndex;
- (void)setZIndex:(int)arg1;
- (int)minVisibleLevel;
- (void)setMinVisibleLevel:(int)arg1;
- (int)maxVisibleLevel;
- (void)setMaxVisibleLevel:(int)arg1;
- (BOOL)toSetVisibleLevel;
- (void)setToSetVisibleLevel:(BOOL)arg1;
@end
