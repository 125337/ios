@interface TAVPixelBufferCache : NSObject
{
    NSMutableDictionary * _pixelBufferCache; // +0x8
}
- (void)dealloc;
- (id)init;
- (void)cachePixelBuffer:(__CVBuffer *)arg1 withKey:(id)arg2;
- (__CVBuffer *)cachedPixelBufferWithKey:(id)arg1;
- (void)cleanCache;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)pixelBufferCache;
- (void)setPixelBufferCache:(id)arg1;
- (void).cxx_destruct;
@end
