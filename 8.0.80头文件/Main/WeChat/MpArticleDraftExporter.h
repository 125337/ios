@interface MpArticleDraftExporter : NSObject
+ (void)readLatestAsWeappJsonWithBiz:(id)arg1 completion:(id /* block */)arg2;
+ (id)_readLatestSyncWithCachePath:(id)arg1 biz:(id)arg2;
+ (id)_mapDraftToWeappJson:(id)arg1 cachePath:(id)arg2;
+ (id)_rewriteLocalImagesToWxfile:(id)arg1 cachePath:(id)arg2;
+ (id)_batchExportAbsPaths:(id)arg1;
+ (id)_exportCoverLocalsToWxfile:(id)arg1 cachePath:(id)arg2;
+ (id)_relocateByCurrentSandbox:(id)arg1 cachePath:(id)arg2;
+ (id)_clearLocalPathsAtIndices:(id)arg1 in:(id)arg2;
+ (id)_pickCdn:(id)arg1;
+ (id)_stripHtmlTags:(id)arg1;
@end
