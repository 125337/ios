@interface TAVFrameCache : NSObject
{
    NSMutableDictionary * _cache; // +0x8
    NSObject<OS_dispatch_semaphore> * _dataUpdateSemaphore; // +0x10
}
+ (id)shared;
- (void)dealloc;
- (id)init;
- (__CVBuffer *)makePixelBufferWithSize:(CGSize)arg1;
- (__CVPixelBufferPool *)pixelBufferPoolWithSize:(CGSize)arg1;
- (void)savePixelBufferPool:(__CVPixelBufferPool *)arg1 forKey:(id)arg2;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)cacheKeyForSize:(CGSize)arg1;
- (void)cleanCache;
- (id)cache;
- (void)setCache:(id)arg1;
- (id)dataUpdateSemaphore;
- (void)setDataUpdateSemaphore:(id)arg1;
- (void).cxx_destruct;
@end
