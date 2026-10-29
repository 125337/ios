@interface MJMovieTextSuggestionSnapshotGenerator : NSObject
{
    id <MJMovieTextSuggestionSnapshotGeneratorDelegate> _delegate; // +0x8
    MJPlaybackViewModel * _playbackVM; // +0x10
    NSString * _sessionID; // +0x18
    MMLRUCache * _cache; // +0x20
    NSMutableDictionary * _runningTasks; // +0x28
    MJOCRProcessor * _ocrProcessor; // +0x30
}
+ (void)uploadSnapshotToCDN:(id)arg1;
+ (id)cacheKeyFromTime:(struct)arg1;
+ (id)cacheKeyForSnapshot:(id)arg1;
+ (id)genSessionID;
- (id)initWithPlaybackVM:(id)arg1;
- (void)reset;
- (void)notifyUserInputSessionBegin;
- (void)notifyUserInputSessionEnd;
- (id)fetchSnapshotFromCacheAtTime:(struct)arg1;
- (void)asyncGenerateSnapshotAtTime:(struct)arg1;
- (id)ocrProcessor;
- (BOOL)isValidSnapshot:(id)arg1;
- (void)processSnapshotImage:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)markAllSnapshotsInRunningAsPrefetched;
- (id)cache;
- (id)fetchSnapshotAtTimeFromCache:(struct)arg1;
- (void)addSnapshotToCache:(id)arg1;
- (id)runningTasks;
- (id)fetchSnapshotInRunningAtTime:(struct)arg1;
- (void)addSnapshotToRunningTasks:(id)arg1;
- (void)removeSnapshotFromRunningTasks:(id)arg1;
- (id)sessionID;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playbackVM;
- (void)setSessionID:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setRunningTasks:(id)arg1;
- (void)setOcrProcessor:(id)arg1;
- (void).cxx_destruct;
@end
