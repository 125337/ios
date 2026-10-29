@interface WCFinderPostModelResourceManager : NSObject
{
    NSObject<OS_dispatch_queue> * _resourceQueue; // +0x8
    unsigned long long _generation; // +0x10
    BOOL _inflight; // +0x18
    id /* block */ _pendingResourceDataProvider; // +0x20
    NSString * _resourceReason; // +0x28
    WCFinderPostModelSnapshot * _loadedSnapshot; // +0x30
    id /* block */ _cachePathProvider; // +0x38
    id /* block */ _enabledProvider; // +0x40
    id /* block */ _eventBlock; // +0x48
}
+ (void)prepareFromUDRResource;
+ (id)readPlainUDRResource:(id)arg1 reason:(id *)arg2 resourceInfo:(id)arg3;
+ (id)readUDRResourceWithReason:(id *)arg1 resourceInfo:(id *)arg2;
+ (id)sharedManager;
+ (void)prepareForMovieComposing;
- (id)initWithCachePathProvider:(id /* block */)arg1 enabledProvider:(id /* block */)arg2 eventBlock:(id /* block */)arg3;
- (id)activeSnapshot;
- (id)predictionUnavailableReason;
- (id)statusInfo;
- (void)recordReason:(id)arg1 startedAt:(double)arg2;
- (void)recordReason:(id)arg1 startedAt:(double)arg2 resourceInfo:(id)arg3 diagnostics:(id)arg4;
- (unsigned long long)beginWorkWithPendingProvider:(id /* block */)arg1 replacingCurrent:(BOOL)arg2;
- (BOOL)isCurrentGeneration:(unsigned long long)arg1;
- (void)finishGeneration:(unsigned long long)arg1;
- (id)diagnosticsForPath:(id)arg1 stage:(id)arg2 error:(id)arg3;
- (BOOL)isMissingFileError:(id)arg1;
- (id)readModelAtPath:(id)arg1 reason:(id *)arg2 diagnostics:(id *)arg3;
- (id)snapshotForData:(id)arg1 reason:(id *)arg2;
- (id)restoreAtDirectory:(id)arg1 generation:(unsigned long long)arg2 diagnostics:(id *)arg3;
- (id)commitCandidateData:(id)arg1 directory:(id)arg2 generation:(unsigned long long)arg3 diagnostics:(id *)arg4;
- (BOOL)prepareDirectory:(id)arg1 diagnostics:(id *)arg2;
- (id)prepareDirectoryForGeneration:(unsigned long long)arg1 startedAt:(double)arg2 ignoreLocalImport:(BOOL)arg3;
- (void)enqueueResourceDataProvider:(id /* block */)arg1 generation:(unsigned long long)arg2;
- (void)prepareWithResourceDataProvider:(id /* block */)arg1;
- (id)resourceReason;
- (void)setResourceReason:(id)arg1;
- (id)loadedSnapshot;
- (void)setLoadedSnapshot:(id)arg1;
- (id /* block */)cachePathProvider;
- (void)setCachePathProvider:(id /* block */)arg1;
- (id /* block */)enabledProvider;
- (void)setEnabledProvider:(id /* block */)arg1;
- (id /* block */)eventBlock;
- (void)setEventBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
