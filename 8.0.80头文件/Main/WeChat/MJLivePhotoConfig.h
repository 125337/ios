@interface MJLivePhotoConfig : NSObject
{
    BOOL _isLivePhoto; // +0x8
    BOOL _useAsVideo; // +0x9
    BOOL _isSelectStyle; // +0xa
}
- (id)init;
- (id)description;
- (BOOL)isLivePhoto;
- (void)setIsLivePhoto:(BOOL)arg1;
- (BOOL)useAsVideo;
- (void)setUseAsVideo:(BOOL)arg1;
- (BOOL)isSelectStyle;
- (void)setIsSelectStyle:(BOOL)arg1;
@end
