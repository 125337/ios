@interface MAVTrackCache : NSObject
{
    NSMutableDictionary * _imageCache; // +0x8
    NSMutableDictionary * _resourceCache; // +0x10
    struct _imageDuration; // +0x18
}
+ (id)sharedInstance;
+ (id)allocWithZone:(_NSZone *)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)init:(id)arg1;
- (void)initCache;
- (id)getResource:(id)arg1;
- (void)setResource:(id)arg1 withTrack:(id)arg2;
- (CGImage *)getImageRef:(id)arg1;
- (void)remove:(id)arg1;
- (void)removeAllObjects;
- (CGImage *)createRescaleImage:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (struct)imageDuration;
- (void)setImageDuration:(struct)arg1;
- (id)imageCache;
- (void)setImageCache:(id)arg1;
- (id)resourceCache;
- (void)setResourceCache:(id)arg1;
- (void).cxx_destruct;
@end

