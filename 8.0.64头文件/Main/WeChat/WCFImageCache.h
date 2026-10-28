@interface WCFImageCache : NSObject
{
    BOOL _isHighEnd; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
    NSCache * _memoryCache; // +0x18
}
- (id)init;
- (id)realKey:(id)arg1 size:(CGSize)arg2;
- (id)pathForKey:(id)arg1;
- (void)setCostLimit:(long long)arg1;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (void)clear;
- (void)clearMemory;
- (void)storeImage:(id)arg1 forKey:(id)arg2 size:(CGSize)arg3;
- (id)imageForKey:(id)arg1;
- (id)imageFromMemoryForKey:(id)arg1 size:(CGSize)arg2;
- (id)imageDataFromDiskForKey:(id)arg1;
- (void)removeDiskImageForKey:(id)arg1;
- (void)callCompletion:(id /* block */)arg1 image:(id)arg2 data:(id)arg3 type:(long long)arg4;
- (id)queryImageForKey:(id)arg1 size:(CGSize)arg2 options:(long long)arg3 cacheType:(long long)arg4 completion:(id /* block */)arg5;
- (id)queryImagesExistsByKeys:(id)arg1 options:(long long)arg2 completion:(id /* block */)arg3;
- (BOOL)isHighEnd;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)memoryCache;
- (void)setMemoryCache:(id)arg1;
- (void).cxx_destruct;
@end
