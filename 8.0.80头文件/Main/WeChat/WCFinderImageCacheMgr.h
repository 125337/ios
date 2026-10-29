@interface WCFinderImageCacheMgr : MMUserService <MMServiceProtocol>
{
    NSCache * _imageCache; // +0x8
    NSObject<OS_dispatch_queue> * _ioQueue; // +0x10
    NSCache * _playerThumbCache; // +0x18
    NSCache * _headerImgCache; // +0x20
}
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (id)imageFromCacheForKey:(id)arg1;
- (id)imageFromMemoryForKey:(id)arg1;
- (id)imageFromDiskForPath:(id)arg1;
- (void)asyncGetImageFromDiskForPath:(id)arg1 complection:(id /* block */)arg2;
- (id)thumbForTid:(id)arg1;
- (void)setThumb:(id)arg1 forTid:(id)arg2;
- (void)removeThumbForTid:(id)arg1;
- (void)storeHeaderImage:(id)arg1 forKey:(id)arg2;
- (void)asyncGetHeaderImageFromCacheForKey:(id)arg1 complection:(id /* block */)arg2;
- (id)cachedFileNameForKey:(id)arg1;
- (id)imageCache;
- (void)setImageCache:(id)arg1;
- (id)ioQueue;
- (void)setIoQueue:(id)arg1;
- (id)playerThumbCache;
- (void)setPlayerThumbCache:(id)arg1;
- (id)headerImgCache;
- (void)setHeaderImgCache:(id)arg1;
- (void).cxx_destruct;
@end
