@interface MMFinderLiveImagePickerParams : NSObject
{
    BOOL _showPreviewButton; // +0x8
    unsigned long long _pickerScene; // +0x10
    NSString * _previewBulletinTitle; // +0x18
    id /* block */ _createCoverEnhanceTaskBlock; // +0x20
    CGSize _cropImageRatio; // +0x28
}
- (unsigned long long)pickerScene;
- (void)setPickerScene:(unsigned long long)arg1;
- (CGSize)cropImageRatio;
- (void)setCropImageRatio:(CGSize)arg1;
- (BOOL)showPreviewButton;
- (void)setShowPreviewButton:(BOOL)arg1;
- (id)previewBulletinTitle;
- (void)setPreviewBulletinTitle:(id)arg1;
- (id /* block */)createCoverEnhanceTaskBlock;
- (void)setCreateCoverEnhanceTaskBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
