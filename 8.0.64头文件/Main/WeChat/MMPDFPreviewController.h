@interface MMPDFPreviewController : MMUIViewController <FileDetailCustomizedPreviewController, PDFViewDelegate>
{
    PDFDocument * _pdfDocument; // +0x70
    PDFView * _pdfView; // +0x78
    UIColor * _pdfViewBackgroundColor; // +0x80
    NSURL * _pdfFileURL; // +0x88
}
- (void)loadFileURL:(id)arg1;
- (BOOL)shouldHandleSingleTapAt:(id)arg1;
- (void)viewDidLoad;
- (void)loadPDFWithFileURL:(id)arg1;
- (void)fixContentInset;
- (id)getMainScrollView;
- (id)pdfDocument;
- (void)setPdfDocument:(id)arg1;
- (id)pdfView;
- (void)setPdfView:(id)arg1;
- (id)pdfViewBackgroundColor;
- (void)setPdfViewBackgroundColor:(id)arg1;
- (id)pdfFileURL;
- (void)setPdfFileURL:(id)arg1;
- (void).cxx_destruct;
@end
