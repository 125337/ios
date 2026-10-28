@interface MJImageComposingViewModel : NSObject <OMJImageSessionDelegate, WCFinderCacheDelegate>
{
    BOOL _isLivePhotoEnabled; // +0x8
    BOOL _isAutoPlayActive; // +0x9
    BOOL _shouldRepeatPlayingLivePhoto; // +0xa
    MJImageSession * _session; // +0x10
    NSArray * _templateItems; // +0x18
    MJImageTemplateItem * _currentTemplateItem; // +0x20
    OMJImageScene * _currentScene; // +0x28
    NSArray * _scenes; // +0x30
    id /* block */ _thumbnailDidUpdateHandler; // +0x38
    id /* block */ _snapshotDidUpdateHandler; // +0x40
    UBArraySignal * _sceneDidAddSignal; // +0x48
    UBDictionarySignal * _sceneDidRemoveSignal; // +0x50
    UBDictionarySignal * _sceneDidMoveSignal; // +0x58
    UBStringSignal * _sceneDidSwitchSignal; // +0x60
    MJImageLayerViewModel * _focusLayer; // +0x68
    MJHandleBoxContext * _handleBoxContext; // +0x70
    id /* block */ _handleBoxSettingsDidChangeFunc; // +0x78
    MJMovieComposingAssetsClassifyHelper * _assetClassifyHelper; // +0x80
    NSData * _assetClassifyResult; // +0x88
    OMJPublisherSessionMetrics * _publisherSessionMetrics; // +0x90
    MJPublisherContext * _publisherContext; // +0x98
    MMBGMSelectedMusicResult * _appliedMusicInfo; // +0xa0
    FinderMusicReportInfo * _editMusicReportInfo; // +0xa8
    RecommendedMusicInfo * _patMusicInfo; // +0xb0
    OMJMaterialManager * _materialManager; // +0xb8
    NSString * _lastTemplateID; // +0xc0
    NSMapTable * _initialScaleFactorsByLayerID; // +0xc8
    NSMapTable * _thumbnailsByID; // +0xd0
    NSMapTable * _snapshotFilePathsByID; // +0xd8
    WCFinderLRUCache * _snapshotsByID; // +0xe0
    NSMutableDictionary * _livePhotoConfigsByID; // +0xe8
    NSString * _lastLoadingMaterialID; // +0xf0
    NSMapTable * _locationItemsByID; // +0xf8
    MJLocationItem * _userLocationItem; // +0x100
    NSArray * _originalAssetInfos; // +0x108
    unsigned long long _exportImageType; // +0x110
    NSString * _exportDirectoryPath; // +0x118
    MJImageRequestContext _templateRequestContext; // +0x120
    map<MJMaterialScene, std::shared_ptr<MJImageRequestContext>, std::less<MJMaterialScene>, std::allocator<std::pair<const MJMaterialScene, std::shared_ptr<MJImageRequestContext>>>> _materialRequestContextsByScene; // +0x130
    map<MJMaterialScene, NSArray<MJImageMaterialItem *> *, std::less<MJMaterialScene>, std::allocator<std::pair<const MJMaterialScene, NSArray<MJImageMaterialItem *> *>>> _materialItemsByScene; // +0x148
}
- (void)startExportingWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithSession:(id)arg1 assetInfos:(id)arg2;
- (void)startupWithRenderView:(id)arg1 maskStyle:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)commitUpdate;
- (void)commitUpdateAndSkipTriggerRefresh;
- (void)commitUpdateAndThumbnail;
- (void)forceUpdateThumbnail;
- (void)imageSession:(id)arg1 didUpdateThumbnail:(id)arg2 forScene:(id)arg3;
- (BOOL)switchToScene:(id)arg1;
- (BOOL)_switchToScene:(id)arg1;
- (id)thumbnailForSceneWithID:(id)arg1;
- (void)addScenesWithAssetInfos:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addScenesWithAssetInfos:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)moveSceneAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)_moveSceneAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)sceneWithID:(id)arg1;
- (BOOL)removeSceneWithID:(id)arg1 switchToSceneWithID:(id)arg2;
- (id)snapshotForSceneWithID:(id)arg1;
- (void)updateSnapshot:(id)arg1 forSceneWithID:(id)arg2;
- (void)_loadNeighbouringSnapshots;
- (void)_handleSnapshotCompletionWithSceneID:(id)arg1 path:(id)arg2 error:(id)arg3;
- (void)requestTemplateItemsWithCompletionHandler:(id /* block */)arg1;
- (void)_handleFetchTemplatesFinishWithError:(id)arg1;
- (void)switchToTemplateWithID:(id)arg1 progressHandler:(id /* block */)arg2;
- (void)setCurrentTemplateItem:(id)arg1;
- (BOOL)isEditingText;
- (void)requestTextItemsWithCompletionHandler:(id /* block */)arg1;
- (void)addTextLayerWithItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateFocusLayerWithItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestWhenWhereItemsWithCompletionHandler:(id /* block */)arg1;
- (void)addWhenWhereLayerWithItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)addEmoticonLayerWithFilePath:(id)arg1 size:(CGSize)arg2 decoderType:(unsigned long long)arg3 timingFillMode:(unsigned long long)arg4;
- (void)focusOnLayer:(id)arg1;
- (void)focusOnLayer:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)resignFocus;
- (BOOL)removeLayerWithID:(id)arg1;
- (double)initialScaleFactorForLayerWithID:(id)arg1;
- (id)layerVMWithID:(id)arg1;
- (void)requestMaterialWithID:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)requestItemsWithMaterialScene:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleRequestFinishWithMaterialScene:(unsigned long long)arg1 categories:(id)arg2 error:(id)arg3;
- (void)_loadAndApplyMaterialWithItem:(id)arg1 operation:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)locationItemForScene:(id)arg1;
- (void)requestLocationItemForScene:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setHandleBoxSettingsDidChangeFunc:(id /* block */)arg1;
- (BOOL)isHandleBoxEnabled;
- (CGPoint)calcViewPointForHandleBoxPoint:(CGPoint)arg1;
- (id)layerIDAtLocation:(CGPoint)arg1 hitTestInsets:(UIEdgeInsets)arg2;
- (void)showHandleBoxForLayer:(id)arg1 items:(id)arg2 titles:(id)arg3 edgeInsets:(UIEdgeInsets)arg4 borderStyle:(id)arg5;
- (void)removeHandleBox;
- (id)templateItemWithID:(id)arg1;
- (void)toggleLivePhotoForScene:(id)arg1;
- (id)livePhotoConfigForScene:(id)arg1;
- (void)_playLivePhotoIfNeeded;
- (void)startPlaying;
- (void)stopPlaying;
- (void)stopPlayingWithCompletionHandler:(id /* block */)arg1;
- (BOOL)isCurrentSceneIsUsingAsLivePhoto;
- (void)stopPlayingLivePhoto;
- (void)setAutoPlayActive:(BOOL)arg1;
- (BOOL)isAutoPlayActive;
- (void)cache:(id)arg1 didEvictObject:(id)arg2;
- (id)backingSession;
- (id)currentSceneAspectRatio;
- (id)textItems;
- (id)whenWhereItems;
- (id)itemsWithMaterialScene:(unsigned long long)arg1;
- (shared_ptr<MJImageRequestContext>)requestContextWithMaterialScene:(unsigned long long)arg1;
- (id)editMusicReportInfo;
- (id)currentImageFrame;
- (id)filterSameAssetInfo:(id)arg1;
- (id)mjAssetInfoWithMM:(id)arg1;
- (id)genReportDict;
- (id)session;
- (id)templateItems;
- (void)setTemplateItems:(id)arg1;
- (id)currentTemplateItem;
- (id)currentScene;
- (void)setCurrentScene:(id)arg1;
- (id)scenes;
- (void)setScenes:(id)arg1;
- (id /* block */)thumbnailDidUpdateHandler;
- (void)setThumbnailDidUpdateHandler:(id /* block */)arg1;
- (id /* block */)snapshotDidUpdateHandler;
- (void)setSnapshotDidUpdateHandler:(id /* block */)arg1;
- (id)sceneDidAddSignal;
- (id)sceneDidRemoveSignal;
- (id)sceneDidMoveSignal;
- (id)sceneDidSwitchSignal;
- (id)focusLayer;
- (void)setFocusLayer:(id)arg1;
- (id)handleBoxContext;
- (void)setHandleBoxContext:(id)arg1;
- (id /* block */)handleBoxSettingsDidChangeFunc;
- (id)assetClassifyHelper;
- (void)setAssetClassifyHelper:(id)arg1;
- (id)assetClassifyResult;
- (void)setAssetClassifyResult:(id)arg1;
- (id)publisherSessionMetrics;
- (void)setPublisherSessionMetrics:(id)arg1;
- (id)publisherContext;
- (void)setPublisherContext:(id)arg1;
- (id)appliedMusicInfo;
- (void)setAppliedMusicInfo:(id)arg1;
- (void)setEditMusicReportInfo:(id)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (id)materialManager;
- (void)setMaterialManager:(id)arg1;
- (id)lastTemplateID;
- (void)setLastTemplateID:(id)arg1;
- (id)initialScaleFactorsByLayerID;
- (void)setInitialScaleFactorsByLayerID:(id)arg1;
- (id)thumbnailsByID;
- (void)setThumbnailsByID:(id)arg1;
- (id)snapshotFilePathsByID;
- (void)setSnapshotFilePathsByID:(id)arg1;
- (id)snapshotsByID;
- (void)setSnapshotsByID:(id)arg1;
- (id)livePhotoConfigsByID;
- (void)setLivePhotoConfigsByID:(id)arg1;
- (BOOL)isLivePhotoEnabled;
- (id)lastLoadingMaterialID;
- (void)setLastLoadingMaterialID:(id)arg1;
- (MJImageRequestContext)templateRequestContext;
- (void)setTemplateRequestContext:(MJImageRequestContext)arg1;
- (map<MJMaterialScene, std::shared_ptr<MJImageRequestContext>, std::less<MJMaterialScene>, std::allocator<std::pair<const MJMaterialScene, std::shared_ptr<MJImageRequestContext>>>>)materialRequestContextsByScene;
- (void)setMaterialRequestContextsByScene:(map<MJMaterialScene, std::shared_ptr<MJImageRequestContext>, std::less<MJMaterialScene>, std::allocator<std::pair<const MJMaterialScene, std::shared_ptr<MJImageRequestContext>>>>)arg1;
- (map<MJMaterialScene, NSArray<MJImageMaterialItem *> *, std::less<MJMaterialScene>, std::allocator<std::pair<const MJMaterialScene, NSArray<MJImageMaterialItem *> *>>>)materialItemsByScene;
- (void)setMaterialItemsByScene:(map<MJMaterialScene, NSArray<MJImageMaterialItem *> *, std::less<MJMaterialScene>, std::allocator<std::pair<const MJMaterialScene, NSArray<MJImageMaterialItem *> *>>>)arg1;
- (id)locationItemsByID;
- (void)setLocationItemsByID:(id)arg1;
- (id)userLocationItem;
- (void)setUserLocationItem:(id)arg1;
- (id)originalAssetInfos;
- (unsigned long long)exportImageType;
- (id)exportDirectoryPath;
- (void)setIsAutoPlayActive:(BOOL)arg1;
- (BOOL)shouldRepeatPlayingLivePhoto;
- (void)setShouldRepeatPlayingLivePhoto:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
