@interface OMJImageSession : NSObject
{
    optional<std::string> _windowName; // +0x8
    OMJImageMaskStyle * _imageMaskStyle; // +0x28
    BOOL _isHandleBoxEnabled; // +0x30
    id <OMJImageSessionDelegate> _delegate; // +0x38
    id /* block */ _handleBoxSettingsDidChangeFunc; // +0x40
    UIImage * _currentImageFrame; // +0x48
    SharedPtr<XISImageSessionLite> _backingSession; // +0x50
    SharedPtr<XISImageEditingModel> _backingImageEditingModel; // +0x58
    SharedPtr<XMJMaterialManager> _materialManager; // +0x60
    SharedPtr<XMJCamTemplateResourceManager> _templateManager; // +0x68
    SharedPtr<XISImageWindowCon> _windowCon; // +0x70
    UIView * _renderView; // +0x78
}
- (id)mj_layerWithID:(id)arg1;
- (id)mj_currentAspectRatio;
- (id)initWithBackingSession:(const void *)arg1 materialManager:(const void *)arg2 templateManager:(const void *)arg3;
- (void)registerNotification;
- (void)dealloc;
- (void)registerCurrentImageFrameDidChangeFunc;
- (void)registerHandleBoxSettingsDidChangeNotification;
- (BOOL)bindRenderView:(id)arg1 error:(id *)arg2;
- (void)unbindRenderView;
- (void)destroyWindowCon;
- (void)startupWithRenderView:(id)arg1 assetInfos:(id)arg2 imageMaskStyle:(id)arg3 settings:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_prepareAssetInfos:(id)arg1 completionHandler:(id /* block */)arg2;
- (XOptional<XISAssetInfo>)_convertISAssetInfoFromAKAsset:(const void *)arg1 videoAssetPath:(const void *)arg2 livePhotoUsage:(int)arg3 phLocalIdentifier:(const void *)arg4 isLivePhoto:(BOOL)arg5 identifier:(id)arg6;
- (void)_startupWithRenderView:(id)arg1 backingAssetInfos:(const void *)arg2 imageMaskStyle:(id)arg3 settings:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)teardownWithCompletionHandler:(id /* block */)arg1;
- (void)commitUpdateWithCompletionHandler:(id /* block */)arg1;
- (void)commitUpdateWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)isTemplateLoadedWithMetaData:(id)arg1;
- (void)loadTemplateWithMetaData:(id)arg1 loadPriority:(long long)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)applyTemplateWithID:(id)arg1;
- (BOOL)clearTemplate;
- (id)getCurrentTemplateID;
- (CGPoint)renderPointSize;
- (CGPoint)calcNormalizedViewPointForViewPoint:(CGPoint)arg1;
- (CGPoint)calcNormalizedRenderPointForNormalizedViewPoint:(CGPoint)arg1;
- (CGPoint)calcRenderPointForViewPoint:(CGPoint)arg1;
- (CGPoint)calcViewPointForNormalizedViewPoint:(CGPoint)arg1;
- (CGPoint)calcNormalizedViewPointForNormalizedRenderPoint:(CGPoint)arg1;
- (CGPoint)calcViewPointForRenderPoint:(CGPoint)arg1;
- (CGPoint)calcViewPointForHandleBoxPoint:(CGPoint)arg1;
- (id)layerIDAtLocation:(CGPoint)arg1;
- (id)layerIDAtLocation:(CGPoint)arg1 hitTestInsets:(UIEdgeInsets)arg2;
- (void)enableHandleBox;
- (void)disableHandleBox;
- (void)updateHandleBoxEnabled:(BOOL)arg1;
- (void)showHandleBoxForLayer:(id)arg1 items:(id)arg2 titles:(id)arg3 edgeInsets:(UIEdgeInsets)arg4 borderStyle:(id)arg5;
- (void)addHandleBoxTitleWithCorner:(int)arg1 textOverlayDesc:(id)arg2;
- (void)addHandleBoxButtonWithCorner:(int)arg1 buttonImage:(const void *)arg2 buttonImageSize:(const void *)arg3;
- (void)removeHandleBox;
- (void)removeAllHandleBoxButtons;
- (void)removeAllHandleBoxTitles;
- (void)configHandleBoxWithRenderNodeID:(const void *)arg1 enabledRectCornerBits:(unsigned int)arg2 edgeInsets:(const void *)arg3 isHandleBoxEnabled:(BOOL)arg4 borderStyleDesc:(const void *)arg5;
- (SharedPtr<XISImageEditingModel>)backingEditingModel;
- (id)imageSceneWithID:(id)arg1;
- (id)imageScenes;
- (id)currentScene;
- (BOOL)switchSceneWithID:(id)arg1;
- (void)addScenesWithAssetInfos:(id)arg1 switchToSceneWithAsset:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getBackingAssetInfoLocalIdArray;
- (BOOL)removeSceneWithID:(id)arg1 switchToSceneWithID:(id)arg2;
- (void)handleThumbnailDidLoad:(XISLiteThumbnailInfo)arg1;
- (BOOL)moveSceneWithID:(id)arg1 beforeSceneWithID:(id)arg2;
- (void)startPlayingWithAudioEnabled:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)stopPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)startExportingWithOutputDirectoryPath:(id)arg1 imageExportSettings:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isHandleBoxEnabled;
- (void)setIsHandleBoxEnabled:(BOOL)arg1;
- (id /* block */)handleBoxSettingsDidChangeFunc;
- (void)setHandleBoxSettingsDidChangeFunc:(id /* block */)arg1;
- (id)currentImageFrame;
- (void)setCurrentImageFrame:(id)arg1;
- (SharedPtr<XISImageSessionLite>)backingSession;
- (SharedPtr<XISImageEditingModel>)backingImageEditingModel;
- (SharedPtr<XMJMaterialManager>)materialManager;
- (void)setMaterialManager:(SharedPtr<XMJMaterialManager>)arg1;
- (SharedPtr<XMJCamTemplateResourceManager>)templateManager;
- (void)setTemplateManager:(SharedPtr<XMJCamTemplateResourceManager>)arg1;
- (SharedPtr<XISImageWindowCon>)windowCon;
- (void)setWindowCon:(SharedPtr<XISImageWindowCon>)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
