@interface MJStickerPickerViewModel : NSObject <MJMaterialLoadingStatusViewModel>
{
    MJSegmentViewModel * _entranceSegmentVM; // +0x8
    NSIndexPath * _entranceIndexPath; // +0x10
    OMJMaterialManager * _manager; // +0x18
    unsigned long long _scene; // +0x20
    NSArray * _materialItems; // +0x28
    NSMutableDictionary * _downloadStatus; // +0x30
}
- (id)initWithMaterailManager:(id)arg1 scene:(unsigned long long)arg2;
- (id)entranceMaterialId;
- (void)fetchDatas:(id /* block */)arg1;
- (long long)numberOfItems;
- (id)itemAtIndex:(unsigned long long)arg1;
- (BOOL)isReplaceMode;
- (BOOL)needFilterMaterial;
- (BOOL)isValidMaterial:(id)arg1;
- (void)loadMaterail:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (unsigned long long)mj_loadingStatusWithID:(id)arg1;
- (float)mj_loadingProgressWithID:(id)arg1;
- (void)mj_loadMaterialWithID:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)downloadStatus;
- (void)loadingStatusForID:(id)arg1 threadSafetyHandler:(id /* block */)arg2;
- (id)entranceSegmentVM;
- (void)setEntranceSegmentVM:(id)arg1;
- (id)entranceIndexPath;
- (void)setEntranceIndexPath:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)materialItems;
- (void)setMaterialItems:(id)arg1;
- (void)setDownloadStatus:(id)arg1;
- (void).cxx_destruct;
@end

