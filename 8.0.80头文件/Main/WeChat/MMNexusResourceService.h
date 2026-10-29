@interface MMNexusResourceService : NSObject
+ (id)unzipQueue;
+ (BOOL)onUnzipQueue;
+ (void)runExclusivelyOnUnzipQueue:(id /* block */)arg1;
+ (id)localEntryForMetadata:(id)arg1;
+ (id)warmupInFlightSet;
+ (void)_warmUpResourceInBackgroundForMeta:(id)arg1;
+ (id)localEntryEnsuringUnzippedForMetadata:(id)arg1;
+ (BOOL)syncUDRResourceAtInstall:(id)arg1;
+ (BOOL)isNexusManagedResourceName:(id)arg1;
+ (void)ensureReadyForMetadata:(id)arg1 timeout:(double)arg2 callback:(id /* block */)arg3;
+ (void)_ensureUDRUnzippedForMetadata:(id)arg1 resName:(id)arg2 timeout:(double)arg3 callback:(id /* block */)arg4;
+ (void)_unzipAsyncForMetadata:(id)arg1 res:(id)arg2 timeout:(double)arg3 callback:(id /* block */)arg4;
+ (void)prefetchMetadata:(id)arg1;
+ (long long)versionForMetadata:(id)arg1;
+ (id)_persistedEntryInVersionDir:(id)arg1 meta:(id)arg2;
+ (id)_udrEntryFor:(id)arg1;
+ (BOOL)_syncUDRResourceToLiveBaseDirIfNeeded:(id)arg1;
+ (BOOL)_syncUDRResourceToLiveBaseDirIfNeeded:(id)arg1 meta:(id)arg2;
+ (void)_reportNexusError:(int)arg1 errorMsg:(id)arg2 meta:(id)arg3 version:(unsigned long long)arg4 extraTags:(id)arg5;
+ (id)_hexPrefixOfData:(id)arg1 length:(unsigned long long)arg2;
+ (id)_debugDirContents:(id)arg1;
+ (id)_liveResourceDirForResName:(id)arg1;
+ (id)_liveRootDirForVersion:(unsigned long long)arg1 resName:(id)arg2;
+ (void)_cleanupOldVersionDirsExceptVersion:(unsigned long long)arg1 resName:(id)arg2;
+ (void)_triggerUDRCheck:(id)arg1;
@end
