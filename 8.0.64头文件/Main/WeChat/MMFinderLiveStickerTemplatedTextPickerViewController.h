@interface MMFinderLiveStickerTemplatedTextPickerViewController : MMCPUIViewController <UITextFieldDelegate, MMFinderLiveStickerContentPicking, MMUIViewControllerOverrideOrientationMaskProtocol>
{
    id <MMFinderLiveStickerContentPickerDelegate> _delegate; // +0x70
    unsigned long long _overrideOrientationMask; // +0x78
    MMFinderLiveTemplatedTextStickerImageProvider * _imageProvider; // +0x80
    MMFinderLiveTextStickerItem * _stickerItem; // +0x88
    double _keyboardHeight; // +0x90
    UIImageView * _previewImageView; // +0x98
    UIView * _bottomBarContainerView; // +0xa0
    MMUITextField * _textField; // +0xa8
    UIButton * _confirmButton; // +0xb0
}
- (id)initWithLowerThirdImageGenerator:(id)arg1 resources:(id)arg2;
- (void)dealloc;
- (void)showWithStickerItem:(id)arg1 inViewController:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onKeyboardShowing:(id)arg1;
- (void)onKeyboardHiding:(id)arg1;
- (void)onTextFieldChanged;
- (void)onConfirmed;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)overrideOrientationMask;
- (void)setOverrideOrientationMask:(unsigned long long)arg1;
- (id)imageProvider;
- (void)setImageProvider:(id)arg1;
- (id)stickerItem;
- (void)setStickerItem:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg1;
- (id)bottomBarContainerView;
- (void)setBottomBarContainerView:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
