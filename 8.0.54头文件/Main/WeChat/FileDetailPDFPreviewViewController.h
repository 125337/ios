@interface FileDetailPDFPreviewViewController : MMPDFPreviewController <UIGestureRecognizerDelegate>
{
    id <UIGestureRecognizerDelegate> _recognizeDelegate; // +0x68
}
- (id)initWithRecognizeDelegate:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2;
- (BOOL)shouldHandleSingleTapAt:(id)arg1;
- (id)recognizeDelegate;
- (void)setRecognizeDelegate:(id)arg1;
- (void).cxx_destruct;
@end

