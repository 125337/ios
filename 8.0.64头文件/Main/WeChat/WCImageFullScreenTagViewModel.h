@interface WCImageFullScreenTagViewModel : NSObject
{
    BOOL _isLivePhoto; // +0x8
    BOOL _showsLivePhotoPlayStyle; // +0x9
    BOOL _showsImageSearching; // +0xa
}
- (BOOL)isLivePhoto;
- (void)setIsLivePhoto:(BOOL)arg1;
- (BOOL)showsLivePhotoPlayStyle;
- (void)setShowsLivePhotoPlayStyle:(BOOL)arg1;
- (BOOL)showsImageSearching;
- (void)setShowsImageSearching:(BOOL)arg1;
@end
