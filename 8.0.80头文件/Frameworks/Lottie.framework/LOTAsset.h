@interface LOTAsset : NSObject
{
    NSString * _referenceID; // +0x8
    NSNumber * _assetWidth; // +0x10
    NSNumber * _assetHeight; // +0x18
    NSString * _imageName; // +0x20
    NSString * _imageDirectory; // +0x28
    LOTLayerGroup * _layerGroup; // +0x30
    NSString * _rootDirectory; // +0x38
    NSBundle * _assetBundle; // +0x40
}
- (id)initWithJSON:(id)arg1 withAssetGroup:(id)arg2 withAssetBundle:(id)arg3 withFramerate:(id)arg4;
- (void)_mapFromJSON:(id)arg1 withAssetGroup:(id)arg2 withFramerate:(id)arg3;
- (id)referenceID;
- (id)assetWidth;
- (id)assetHeight;
- (id)imageName;
- (id)imageDirectory;
- (id)layerGroup;
- (id)rootDirectory;
- (void)setRootDirectory:(id)arg1;
- (id)assetBundle;
- (void).cxx_destruct;
@end
