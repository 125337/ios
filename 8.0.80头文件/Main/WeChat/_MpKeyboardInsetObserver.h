@interface _MpKeyboardInsetObserver : NSObject
{
    MpWKWebView * _webView; // +0x8
}
- (void)startObserving;
- (void)stopObserving;
- (void)_onKeyboardWillChangeFrame:(id)arg1;
- (void)dealloc;
- (id)webView;
- (void)setWebView:(id)arg1;
- (void).cxx_destruct;
@end
