@interface OMJImageScene : NSObject
{
    OMJImageSession * _imageSession; // +0x8
    NSString * _sceneID; // +0x10
}
- (id)mj_aspectRatio;
- (id)initWithSceneID:(id)arg1 imageSession:(id)arg2;
- (SharedPtr<XISImageEditingModel>)backingEditingModel;
- (SharedPtr<XISImageScene>)backingImageScene;
- (id)addTextLayerWithMaterialID:(id)arg1;
- (id)addEmoticonLayerWithFilePath:(id)arg1 decoderType:(unsigned long long)arg2 timingFillMode:(unsigned long long)arg3;
- (id)addWhenWhereLayerWithMaterialID:(id)arg1;
- (id)imageLayerWithID:(id)arg1;
- (id)imageLayers;
- (BOOL)removeLayerWithID:(id)arg1;
- (id)filterID;
- (void)setFilterID:(id)arg1;
- (BOOL)isFilterEnabled;
- (void)setIsFilterEnabled:(BOOL)arg1;
- (id)filterOptions;
- (void)setFilterOptions:(id)arg1;
- (float)filterIntensity;
- (void)setFilterIntensity:(float)arg1;
- (BOOL)isFilterAdjusted;
- (BOOL)isLivePhoto;
- (unsigned long long)livePhotoUsage;
- (void)setLivePhotoUsage:(unsigned long long)arg1;
- (id)phLocalIdentifier;
- (BOOL)isModified;
- (id)imageCropDesc;
- (BOOL)_updateImageCropDesc:(id)arg1;
- (CGSize)_imagePixelSize;
- (BOOL)updateCropRegion:(CGRect)arg1;
- (BOOL)updateAspectRatio:(id)arg1;
- (CGSize)pointSize;
- (void)saveSnapshotToDirectoryPath:(id)arg1 imageType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (struct)creationTime;
- (struct)modificationTime;
- (id)location;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)imageSession;
- (id)sceneID;
- (void).cxx_destruct;
@end
