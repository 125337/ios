@interface LOTComposition : NSObject
{
    NSNumber * _startFrame; // +0x8
    NSNumber * _endFrame; // +0x10
    NSNumber * _framerate; // +0x18
    double _timeDuration; // +0x20
    LOTLayerGroup * _layerGroup; // +0x28
    LOTAssetGroup * _assetGroup; // +0x30
    NSString * _rootDirectory; // +0x38
    NSBundle * _assetBundle; // +0x40
    NSString * _cacheKey; // +0x48
    CGRect _compBounds; // +0x50
}
+ (id)animationNamed:(id)arg1;
+ (id)animationNamed:(id)arg1 inBundle:(id)arg2;
+ (id)animationWithFilePath:(id)arg1;
+ (id)animationFromJSON:(id)arg1;
+ (id)animationFromJSON:(id)arg1 inBundle:(id)arg2;
- (id)initWithJSON:(id)arg1 withAssetBundle:(id)arg2;
- (void)_mapFromJSON:(id)arg1 withAssetBundle:(id)arg2;
- (void)setRootDirectory:(id)arg1;
- (CGRect)compBounds;
- (id)startFrame;
- (id)endFrame;
- (id)framerate;
- (double)timeDuration;
- (id)layerGroup;
- (id)assetGroup;
- (id)rootDirectory;
- (id)assetBundle;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (void).cxx_destruct;
@end
