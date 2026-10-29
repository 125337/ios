@interface OMJImageSession : NSObject
{
    OMJImageMaskStyle * _imageMaskStyle; // +0x8
    id <OMJImageSessionDelegate> _delegate; // +0x10
    id /* block */ _handleBoxSettingsDidChangeFunc; // +0x18
    UIImage * _currentImageFrame; // +0x20
    SharedPtr<XMJImageSession> _xmjSession; // +0x28
    UIView * _renderView; // +0x30
}
- (id)mj_layerWithID:(id)arg1;
- (id)mj_currentAspectRatio;
- (id)initWithBackingSession:(const void *)arg1 materialManager:(const void *)arg2 templateManager:(const void *)arg3;
- (void)dealloc;
- (void)setupCallbacksFromXMJSession;
- (BOOL)bindRenderView:(id)arg1 error:(id *)arg2;
- (void)unbindRenderView;
- (void)startupWithRenderView:(id)arg1 assetInfos:(id)arg2 imageMaskStyle:(id)arg3 settings:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_prepareAssetInfos:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_startupWithRenderView:(id)arg1 backingAssetInfos:(const void *)arg2 imageMaskStyle:(id)arg3 settings:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)startupWithRenderView:(id)arg1 draftData:(id)arg2 editingItemIDs:(id)arg3 selectedEditingItemID:(id)arg4 imageMaskStyle:(id)arg5 settings:(id)arg6 completionHandler:(id /* block */)arg7;
- (SharedPtr<XISImageEditingModel>)backingImageEditingModel;
- (void)teardownWithCompletionHandler:(id /* block */)arg1;
- (void)commitUpdateWithCompletionHandler:(id /* block */)arg1;
- (void)commitUpdateWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)isTemplateLoadedWithMetaData:(id)arg1;
- (void)loadTemplateWithMetaData:(id)arg1 loadPriority:(long long)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)applyTemplateWithID:(id)arg1;
- (BOOL)clearTemplate;
- (id)getCurrentTemplateID;
- (CGPoint)calcRenderPointForViewPoint:(CGPoint)arg1;
- (CGPoint)calcViewPointForRenderPoint:(CGPoint)arg1;
- (CGPoint)calcViewPointForHandleBoxPoint:(CGPoint)arg1;
- (id)layerIDAtLocation:(CGPoint)arg1;
- (id)layerIDAtLocation:(CGPoint)arg1 hitTestInsets:(UIEdgeInsets)arg2;
- (void)showHandleBoxForLayer:(id)arg1 items:(id)arg2 titles:(id)arg3 edgeInsets:(UIEdgeInsets)arg4 borderStyle:(id)arg5;
- (void)removeHandleBox;
- (BOOL)isHandleBoxEnabled;
- (id)imageSceneWithID:(id)arg1;
- (id)imageScenes;
- (id)currentScene;
- (BOOL)switchSceneWithID:(id)arg1;
- (void)addScenesWithAssetInfos:(id)arg1 switchToSceneWithAsset:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getBackingAssetInfoLocalIdArray;
- (BOOL)removeSceneWithID:(id)arg1 switchToSceneWithID:(id)arg2;
- (BOOL)moveSceneWithID:(id)arg1 beforeSceneWithID:(id)arg2;
- (void)startPlayingWithAudioEnabled:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)startPlayingWithAudioEnabled:(BOOL)arg1 previewLoopCount:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)stopPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)stopPlayingWithShouldSkipTriggerRefresh:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)startExportingWithOutputDirectoryPath:(id)arg1 imageExportSettings:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)generateFilterThumbnailWithEditingItemID:(id)arg1 filterID:(id)arg2 filterIntensity:(float)arg3 isFilterEnabled:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (void)saveDraftWithCompletionHandler:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)handleBoxSettingsDidChangeFunc;
- (void)setHandleBoxSettingsDidChangeFunc:(id /* block */)arg1;
- (id)currentImageFrame;
- (void)setCurrentImageFrame:(id)arg1;
- (SharedPtr<XMJImageSession>)xmjSession;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
