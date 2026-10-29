@interface MpWebViewFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1;
- (void)onPageStartedViewId:(id)arg1 url:(id)arg2 completion:(id /* block */)arg3;
- (void)onPageFinishedViewId:(id)arg1 url:(id)arg2 completion:(id /* block */)arg3;
- (void)onWebResourceErrorViewId:(id)arg1 url:(id)arg2 errorCode:(id)arg3 description:(id)arg4 isMainFrame:(id)arg5 completion:(id /* block */)arg6;
- (void)onJavaScriptMessageViewId:(id)arg1 channel:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)onSchemeRequestViewId:(id)arg1 requestId:(id)arg2 url:(id)arg3 completion:(id /* block */)arg4;
- (void)onWebViewWaitingResourceViewId:(id)arg1 completion:(id /* block */)arg2;
- (void)onEditorResourceLoadFailedViewId:(id)arg1 errorCode:(id)arg2 errorMsg:(id)arg3 preloadHit:(id)arg4 completion:(id /* block */)arg5;
- (void)onEditorResourceReadyViewId:(id)arg1 resourceSource:(id)arg2 preloadHit:(id)arg3 udrVersion:(id)arg4 completion:(id /* block */)arg5;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (void).cxx_destruct;
@end
