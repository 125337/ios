@interface MJStickerPickerViewModel : NSObject <MJMaterialCacheDelegate, MJMaterialLoadingStatusViewModel>
{
    id <MJStickerPickerViewModelDelegate> _delegate; // +0x8
    MJSegmentViewModel * _entranceSegmentVM; // +0x10
    NSIndexPath * _entranceIndexPath; // +0x18
    OMJMaterialManager * _manager; // +0x20
    unsigned long long _scene; // +0x28
    NSArray * _materialItems; // +0x30
    NSArray * _recentItems; // +0x38
    MJMaterialCache * _materialCache; // +0x40
    NSMutableDictionary * _downloadStatus; // +0x48
}
- (id)initWithMaterailManager:(id)arg1 scene:(unsigned long long)arg2;
- (id)initWithMaterailManager:(id)arg1 scene:(unsigned long long)arg2 materialCache:(id)arg3;
- (id)entranceMaterialId;
- (void)fetchDatas:(id /* block */)arg1;
- (BOOL)shouldShowSectionHeader;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (long long)adjustSectionIndexIfNeeded:(long long)arg1;
- (BOOL)isReplaceMode;
- (BOOL)needFilterMaterial;
- (BOOL)isValidMaterial:(id)arg1;
- (void)loadMaterail:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)setMaterialItems:(id)arg1;
- (void)materialCacheDidUpdate:(id)arg1 withCacheKey:(id)arg2;
- (void)updateRecentItems;
- (unsigned long long)mj_loadingStatusWithID:(id)arg1;
- (float)mj_loadingProgressWithID:(id)arg1;
- (void)mj_loadMaterialWithID:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)downloadStatus;
- (void)loadingStatusForID:(id)arg1 threadSafetyHandler:(id /* block */)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)entranceSegmentVM;
- (void)setEntranceSegmentVM:(id)arg1;
- (id)entranceIndexPath;
- (void)setEntranceIndexPath:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)materialItems;
- (id)recentItems;
- (void)setRecentItems:(id)arg1;
- (id)materialCache;
- (void)setMaterialCache:(id)arg1;
- (void)setDownloadStatus:(id)arg1;
- (void).cxx_destruct;
@end
