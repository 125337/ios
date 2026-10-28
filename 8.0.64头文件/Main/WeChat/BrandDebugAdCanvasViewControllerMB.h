@interface BrandDebugAdCanvasViewControllerMB : BrandDebugBaseViewControllerMB <UIScrollViewDelegate, BTCanvasItemCellViewModelDelegate, WXCustomWebViewControllerProtocol>
{
    BrandDebugCanvasTmplMsg * _tmpMsg; // +0xb0
    NSMutableArray * _arrItemModel; // +0xb8
    NSMutableArray * _arrItemCell; // +0xc0
}
- (void)viewDidLoad;
- (void)dealloc;
- (void)initItems;
- (void)onInsertCanvas;
- (id)testText;
- (void)setupTextLabelView;
- (void)onShowMemoryUsage;
- (id)memoryUsage;
- (void)setupCanvasContextVC;
- (void)resetCanvasContextVC;
- (void)pauseCanvasView;
- (void)resumeCanvasView;
- (void)onLaunchLogicJsEngine;
- (void)onLaunchRenderJsEngine;
- (void)onInsertFirstAdCard;
- (void)onInsertTemplatelAdMsg;
- (void)__insertTemplateTmplAdMsg:(id)arg1;
- (id)getCurrentWebviewViewController;
- (BOOL)isMsgViewControllerInForground;
- (void)onCanvasHeightChange:(id)arg1;
- (void)onCanvasItemClick:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getInitUrl;
- (id)getCurrentUrl;
- (id)getCurrentAppId;
- (id)extraInfo;
- (unsigned int)getCurrentScene;
- (BOOL)allowScanQRCodeByImage;
- (BOOL)allowShareByImage;
- (BOOL)allowFayByImage;
- (void)enableWebContentImageLongPressingTag;
- (BOOL)allowImagePreview;
- (void)setDisableWebAlertView:(BOOL)arg1;
- (void)doJsApiInitEvent;
- (void)forceShowCloseButton;
- (id)m_extraInfo;
- (id)m_initUrl;
- (id)m_a8KeyLogicImpl;
- (id)m_jsLogicImpl;
- (BOOL)m_bOfflinePage;
- (id)webView;
- (BOOL)m_bIsJsapiUploadVideoUploading;
- (id)m_delegate;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(id /* block */)arg2;
- (unsigned char)getPermissionWithName:(id)arg1;
- (id)getShareUrl;
- (void)setWebViewContentSize:(CGSize)arg1;
- (void)goToURL:(id)arg1;
- (id)tmpMsg;
- (void)setTmpMsg:(id)arg1;
- (id)arrItemModel;
- (void)setArrItemModel:(id)arg1;
- (id)arrItemCell;
- (void)setArrItemCell:(id)arg1;
- (void).cxx_destruct;
@end
