@interface QHeatTileCreationData : NSObject
{
    struct _bounds; // +0x8
    unsigned long long _decayRadius; // +0x28
    unsigned long long _minimumZoomIntensity; // +0x30
    unsigned long long _maximumZoomIntensity; // +0x38
    NSArray * _colorMap; // +0x40
    NSArray * _maxIntensities; // +0x48
    NSArray * _kernel; // +0x50
    QQuadTree * _quadTree; // +0x58
}
- (void).cxx_destruct;
@end

