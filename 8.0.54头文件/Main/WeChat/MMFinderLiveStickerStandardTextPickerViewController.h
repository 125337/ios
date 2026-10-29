@interface MMFinderLiveStickerStandardTextPickerViewController : MMCPUIViewController <EditImageTextInputDelegate, MMFinderLiveStickerContentPicking, MMUIViewControllerOverrideOrientationMaskProtocol>
{
    id <MMFinderLiveStickerContentPickerDelegate> _delegate; // +0x68
    unsigned long long _overrideOrientationMask; // +0x70
    MMFinderLiveTextStickerItem * _stickerItem; // +0x78
    double _keyboardHeight; // +0x80
    UIView * _inputContainerView; // +0x88
    EditImageTextInputView * _inputView; // +0x90
}
- (id)init;
- (void)dealloc;
- (void)showWithStickerItem:(id)arg1 inViewController:(id)arg2;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (void)cancelEditText:(id)arg1;
- (void)onKeyboardShowing:(id)arg1;
- (void)onKeyboardHiding:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)overrideOrientationMask;
- (void)setOverrideOrientationMask:(unsigned long long)arg1;
- (id)stickerItem;
- (void)setStickerItem:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)inputContainerView;
- (void)setInputContainerView:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (void).cxx_destruct;
@end

