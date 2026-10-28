@interface MMXNetImageApplication : MMRootService <MMServiceProtocol>
{
    NSRecursiveLock * _modelLock; // +0x8
    NSThread * _thread; // +0x10
    shared_ptr<wevision::XImageFeat> _model; // +0x18
}
- (id)init;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void)addThreadToRunLoop;
- (id)featureWithImage:(id)arg1;
- (void)requestFeatureWithImage:(id)arg1;
- (id)getThreadName;
- (id)modelFiles;
- (id)modelPath;
- (id)modelLock;
- (void)setModelLock:(id)arg1;
- (shared_ptr<wevision::XImageFeat>)model;
- (void)setModel:(shared_ptr<wevision::XImageFeat>)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
