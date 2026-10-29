@interface LOTLayer : NSObject
{
    NSString * _layerName; // +0x8
    NSString * _referenceID; // +0x10
    NSNumber * _layerID; // +0x18
    long long _layerType; // +0x20
    NSNumber * _parentID; // +0x28
    NSNumber * _startFrame; // +0x30
    NSNumber * _inFrame; // +0x38
    NSNumber * _outFrame; // +0x40
    NSNumber * _timeStretch; // +0x48
    NSArray * _shapes; // +0x50
    NSArray * _masks; // +0x58
    NSNumber * _layerWidth; // +0x60
    NSNumber * _layerHeight; // +0x68
    UIColor * _solidColor; // +0x70
    LOTAsset * _imageAsset; // +0x78
    LOTKeyframeGroup * _opacity; // +0x80
    LOTKeyframeGroup * _timeRemapping; // +0x88
    LOTKeyframeGroup * _rotation; // +0x90
    LOTKeyframeGroup * _position; // +0x98
    LOTKeyframeGroup * _positionX; // +0xa0
    LOTKeyframeGroup * _positionY; // +0xa8
    LOTKeyframeGroup * _anchor; // +0xb0
    LOTKeyframeGroup * _scale; // +0xb8
    long long _matteType; // +0xc0
    CGRect _layerBounds; // +0xc8
}
- (id)initWithJSON:(id)arg1 withAssetGroup:(id)arg2 withFramerate:(id)arg3;
- (void)_mapFromJSON:(id)arg1 withAssetGroup:(id)arg2 withFramerate:(id)arg3;
- (id)description;
- (id)layerName;
- (id)referenceID;
- (id)layerID;
- (long long)layerType;
- (id)parentID;
- (id)startFrame;
- (id)inFrame;
- (id)outFrame;
- (id)timeStretch;
- (CGRect)layerBounds;
- (id)shapes;
- (id)masks;
- (id)layerWidth;
- (id)layerHeight;
- (id)solidColor;
- (id)imageAsset;
- (id)opacity;
- (id)timeRemapping;
- (id)rotation;
- (id)position;
- (id)positionX;
- (id)positionY;
- (id)anchor;
- (id)scale;
- (long long)matteType;
- (void).cxx_destruct;
@end

