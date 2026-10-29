@interface MMImageActionCropItem : MMImageActionSheetItem <MMLongImageCropViewControllerDelelgate>
{
    UIImage * _originImage; // +0x8
    MMLongImageCropResult * _croppedResult; // +0x10
}
- (id)init;
- (void)handleWithImage;
- (void)onFinishCropImage:(id)arg1;
- (id)originImage;
- (void)setOriginImage:(id)arg1;
- (id)croppedResult;
- (void)setCroppedResult:(id)arg1;
- (void).cxx_destruct;
@end
