@interface VoIPMPPreviewFileView : NSObject <PDFViewDelegate, FlutterPlatformView>
{
    VoIPMPPreviewContainerView * _containerView; // +0x8
    PDFView * _pdfView; // +0x10
    WKWebView * _webView; // +0x18
    FlutterMethodChannel * _methodChannel; // +0x20
    NSString * _filePath; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4;
- (id)view;
- (void)loadFile:(id)arg1 fileExt:(id)arg2;
- (void)loadPDF:(id)arg1;
- (void)loadWithWebView:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)flipToPage:(long long)arg1;
- (void)requestThumbnail:(long long)arg1;
- (void)closePreview;
- (void)onSingleTap:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)pdfView;
- (void)setPdfView:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)methodChannel;
- (void)setMethodChannel:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void).cxx_destruct;
@end
