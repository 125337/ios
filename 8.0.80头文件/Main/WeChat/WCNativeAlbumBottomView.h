@interface WCNativeAlbumBottomView : WCPhotoMutipleImageBottomView
{
    UIEdgeInsets _galleryContentInsets; // +0x8
}
- (void)setGalleryContentInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)safeAreaInsets;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (UIEdgeInsets)galleryContentInsets;
@end
