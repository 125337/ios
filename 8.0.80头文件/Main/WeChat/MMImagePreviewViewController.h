@interface MMImagePreviewViewController : MMUIViewController <MMImageActionSheetDelegate, MMImagePreviewActionSheet_PreviewViewDelegate>
{
    BOOL _isPresented; // +0x70
    UIView * _backgroundView; // +0x78
    MMImagePreviewActionSheet_PreviewView * _previewView; // +0x80
    MMImageActionSheet * _imageActionSheet; // +0x88
    MMImagePreviewInfo * _info; // +0x90
    unsigned long long _supportedOrientationMask; // +0x98
}
- (id)initWithImagePreviewInfo:(id)arg1;
- (void)showFromViewController:(id)arg1;
- (BOOL)forceVerticalLayout;
- (BOOL)shouldShowImagePreview;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)layoutUI;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)imageActionSheetRelayout:(id)arg1;
- (BOOL)imageActionSheet:(id)arg1 shouldShowItem:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemWillClicked:(id)arg2;
- (BOOL)imageActionSheet:(id)arg1 itemDidCustomEvent:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemDidFinish:(id)arg2;
- (void)imageActionSheet:(id)arg1 didForwardMsgWraps:(id)arg2 contacts:(id)arg3;
- (void)imageActionSheetInShowAnimation:(id)arg1;
- (void)imageActionSheetInDismissAnimation:(id)arg1;
- (void)imageActionSheetDidDismiss:(id)arg1;
- (void)imageActionSheet:(id)arg1 willForward:(id)arg2;
- (void)imageActionSheet:(id)arg1 updateCropImage:(id)arg2;
- (void)onUpdateImage:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (id)imageActionSheet;
- (void)setImageActionSheet:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)isPresented;
- (void)setIsPresented:(BOOL)arg1;
- (unsigned long long)supportedOrientationMask;
- (void)setSupportedOrientationMask:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
