@interface MMLiveCacheMgr : MMUserService <MMServiceProtocol>
{
    NSCache * _imageCache; // +0x8
    NSObject<OS_dispatch_queue> * _imageIOQueue; // +0x10
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)imageFromCacheForKey:(id)arg1;
- (void)cacheImage:(id)arg1 forKey:(id)arg2;
- (void)removeImageCacheForKey:(id)arg1;
- (void)precacheImageForKey:(id)arg1 path:(id)arg2;
- (void)precacheImageForKey:(id)arg1 path:(id)arg2 complection:(id /* block */)arg3;
- (void)asyncLoadImageFromDiskForPath:(id)arg1 complection:(id /* block */)arg2;
- (void)precacheImageAsyncWithLiveTask:(id)arg1;
- (id)imageCache;
- (void)setImageCache:(id)arg1;
- (id)imageIOQueue;
- (void)setImageIOQueue:(id)arg1;
- (void).cxx_destruct;
@end

