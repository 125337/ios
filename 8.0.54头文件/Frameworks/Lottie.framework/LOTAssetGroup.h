@interface LOTAssetGroup : NSObject
{
    NSMutableDictionary * _assetMap; // +0x8
    NSDictionary * _assetJSONMap; // +0x10
    NSString * _rootDirectory; // +0x18
    NSBundle * _assetBundle; // +0x20
}
- (id)initWithJSON:(id)arg1 withAssetBundle:(id)arg2 withFramerate:(id)arg3;
- (void)buildAssetNamed:(id)arg1 withFramerate:(id)arg2;
- (void)finalizeInitializationWithFramerate:(id)arg1;
- (id)assetModelForID:(id)arg1;
- (void)setRootDirectory:(id)arg1;
- (id)rootDirectory;
- (id)assetBundle;
- (void).cxx_destruct;
@end

