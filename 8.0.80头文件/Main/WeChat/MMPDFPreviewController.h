@interface MMPDFPreviewController : MMUIViewController <FileDetailCustomizedPreviewController, PDFViewDelegate>
{
    BOOL _scaleChangedByUser; // +0x70
    BOOL _hasAnchor; // +0x71
    BOOL _pendingAlignToDocumentTop; // +0x72
    BOOL _hasObservedScroll; // +0x73
    PDFDocument * _pdfDocument; // +0x78
    PDFView * _pdfView; // +0x80
    UIColor * _pdfViewBackgroundColor; // +0x88
    NSURL * _pdfFileURL; // +0x90
    double _actualWidth; // +0x98
    double _actualScaleFactor; // +0xa0
    PDFPage * _anchorPage; // +0xa8
    CGPoint _anchorPointInPage; // +0xb0
}
- (void)loadFileURL:(id)arg1;
- (BOOL)shouldHandleSingleTapAt:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (id)getMainScrollView;
- (double)contentWidth;
- (id)scrollView;
- (void)registerScaleNotification;
- (void)unregisterScaleNotification;
- (void)onPDFViewScaleChangedNotification:(id)arg1;
- (void)observeScrollView;
- (void)unobserveScrollView;
- (void)onUserPinch:(id)arg1;
- (void)onUserPan:(id)arg1;
- (void)onUserDoubleTap:(id)arg1;
- (CGPoint)visibleCenterInPDFView;
- (CGSize)visibleSizeInPDFView;
- (void)captureAnchorFromVisibleCenter;
- (void)restoreAnchorToVisibleCenter;
- (void)alignToDocumentTopIfNeeded;
- (void)fixLayout;
- (void)loadPDFWithFileURL:(id)arg1;
- (void)updatePageInsets:(UIEdgeInsets)arg1;
- (id)pdfDocument;
- (void)setPdfDocument:(id)arg1;
- (id)pdfView;
- (void)setPdfView:(id)arg1;
- (id)pdfViewBackgroundColor;
- (void)setPdfViewBackgroundColor:(id)arg1;
- (id)pdfFileURL;
- (void)setPdfFileURL:(id)arg1;
- (double)actualWidth;
- (void)setActualWidth:(double)arg1;
- (double)actualScaleFactor;
- (void)setActualScaleFactor:(double)arg1;
- (BOOL)scaleChangedByUser;
- (void)setScaleChangedByUser:(BOOL)arg1;
- (id)anchorPage;
- (void)setAnchorPage:(id)arg1;
- (CGPoint)anchorPointInPage;
- (void)setAnchorPointInPage:(CGPoint)arg1;
- (BOOL)hasAnchor;
- (void)setHasAnchor:(BOOL)arg1;
- (BOOL)pendingAlignToDocumentTop;
- (void)setPendingAlignToDocumentTop:(BOOL)arg1;
- (BOOL)hasObservedScroll;
- (void)setHasObservedScroll:(BOOL)arg1;
- (void).cxx_destruct;
@end
