@interface QMCMarkerImageCache : NSObject
{
    NSCache * _cache; // +0x8
    NSMutableDictionary * _pendingCallbacks; // +0x10
    NSObject<OS_dispatch_queue> * _serialQueue; // +0x18
}
+ (id)shared;
- (id)init;
- (id)cachedImageForURL:(id)arg1;
- (void)fetchImageForURL:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyCallbacksForURL:(id)arg1 image:(id)arg2;
- (id)cache;
- (void)setCache:(id)arg1;
- (id)pendingCallbacks;
- (void)setPendingCallbacks:(id)arg1;
- (id)serialQueue;
- (void)setSerialQueue:(id)arg1;
- (void).cxx_destruct;
@end
