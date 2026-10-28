@interface MMFinderLiveStickerImagePicker : NSObject <MMFinderLiveStickerContentPicking>
{
    id <MMFinderLiveStickerContentPickerDelegate> _delegate; // +0x8
    MMFinderLiveImageStickerItem * _stickerItem; // +0x10
    UIViewController * _hostingVc; // +0x18
    double _targetDimension; // +0x20
}
- (id)initWithTargetDimension:(double)arg1;
- (void)showWithStickerItem:(id)arg1 inViewController:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (id)imageResizedToTargetDimension:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)stickerItem;
- (void)setStickerItem:(id)arg1;
- (id)hostingVc;
- (void)setHostingVc:(id)arg1;
- (double)targetDimension;
- (void)setTargetDimension:(double)arg1;
- (void).cxx_destruct;
@end
