@interface SnsV3AlbumGalleryAnimationController : SnsV3GalleryAnimationController
{
    BOOL _dismissingGallery; // +0x18
    id /* block */ _releaseActionBarPreservation; // +0x20
}
- (id)animationControllerForDismissedController:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)dealloc;
- (id /* block */)releaseActionBarPreservation;
- (void)setReleaseActionBarPreservation:(id /* block */)arg1;
- (BOOL)dismissingGallery;
- (void)setDismissingGallery:(BOOL)arg1;
- (void).cxx_destruct;
@end
