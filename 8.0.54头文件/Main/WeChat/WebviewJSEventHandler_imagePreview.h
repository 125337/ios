@interface WebviewJSEventHandler_imagePreview : WebviewJSEventHandlerBase <PhotoViewControllerDelegate>
{
    PhotoViewController * m_photoViewController; // +0x8
    long long _webViewInterfaceOrientation; // +0x10
    unsigned int _currentIndex; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)uninitImageViewer;
- (void)showImageWithUrls:(id)arg1 allCaches:(id)arg2 current:(id)arg3 currentImage:(id)arg4 currentPos:(CGRect)arg5 isForbidForward:(BOOL)arg6 isShowMenu:(BOOL)arg7 config:(id)arg8;
- (void)dealloc;
- (void)photoVCWillBePoped;
- (void)photoVCDidBePoped;
- (void)photoVCDidScrollToIndex:(unsigned int)arg1;
- (void)sendImagePreviewIndexChangeEvent;
- (unsigned int)currentIndex;
- (void)setCurrentIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end

