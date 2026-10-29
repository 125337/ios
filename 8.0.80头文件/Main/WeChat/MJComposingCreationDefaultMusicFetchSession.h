@interface MJComposingCreationDefaultMusicFetchSession : NSObject
{
    BOOL _finished; // +0x8
    MJComposingCreationDefaultMusicFetchSession * _retainedSelf; // +0x10
    id /* block */ _resolveBlock; // +0x18
    id /* block */ _completionBlock; // +0x20
}
+ (id)startWithParams:(id)arg1 resolveBlock:(id /* block */)arg2;
+ (id)startWithParams:(id)arg1 completion:(id /* block */)arg2;
- (id)initInternal;
- (void)dealloc;
- (void)startFetchWithParams:(id)arg1;
- (void)fetchDefaultMusicWithParams:(id)arg1 effectLocalPaths:(id)arg2;
- (void)finishWithMusicInfo:(id)arg1 error:(id)arg2;
- (BOOL)isFinished;
- (void)setFinished:(BOOL)arg1;
- (id)retainedSelf;
- (void)setRetainedSelf:(id)arg1;
- (id /* block */)resolveBlock;
- (void)setResolveBlock:(id /* block */)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
