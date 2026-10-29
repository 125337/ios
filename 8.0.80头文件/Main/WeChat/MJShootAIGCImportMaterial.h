@interface MJShootAIGCImportMaterial : NSObject
{
    NSString * _directory; // +0x8
    OMJAIGCExplicitInputAsset * _inputAsset; // +0x10
    OMJAssetInfo * _previewAssetInfo; // +0x18
}
- (id)init;
- (void)retainForTimeline:(id)arg1;
- (void)dealloc;
- (void)prepareAsset:(id)arg1 useLivePhoto:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)prepareLivePhoto:(id)arg1 completion:(id /* block */)arg2;
- (id)directory;
- (void)setDirectory:(id)arg1;
- (id)inputAsset;
- (void)setInputAsset:(id)arg1;
- (id)previewAssetInfo;
- (void)setPreviewAssetInfo:(id)arg1;
- (void).cxx_destruct;
@end
