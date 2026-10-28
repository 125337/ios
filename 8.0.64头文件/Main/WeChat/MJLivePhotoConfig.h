@interface MJLivePhotoConfig : NSObject
{
    BOOL _isLivePhoto; // +0x8
    BOOL _useAsVideo; // +0x9
}
- (id)init;
- (id)description;
- (BOOL)isLivePhoto;
- (void)setIsLivePhoto:(BOOL)arg1;
- (BOOL)useAsVideo;
- (void)setUseAsVideo:(BOOL)arg1;
@end
