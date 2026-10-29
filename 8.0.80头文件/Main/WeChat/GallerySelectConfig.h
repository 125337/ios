@interface GallerySelectConfig : NSObject
{
    BOOL _enableVideo; // +0x8
    BOOL _enablePhoto; // +0x9
    BOOL _enableLivePhoto; // +0xa
    long long _photoLimit; // +0x10
}
+ (id)makeWithEnableVideo:(BOOL)arg1 enablePhoto:(BOOL)arg2 photoLimit:(long long)arg3 enableLivePhoto:(BOOL)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (BOOL)enableVideo;
- (void)setEnableVideo:(BOOL)arg1;
- (BOOL)enablePhoto;
- (void)setEnablePhoto:(BOOL)arg1;
- (long long)photoLimit;
- (void)setPhotoLimit:(long long)arg1;
- (BOOL)enableLivePhoto;
- (void)setEnableLivePhoto:(BOOL)arg1;
@end
