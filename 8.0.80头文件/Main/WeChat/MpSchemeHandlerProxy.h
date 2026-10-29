@interface MpSchemeHandlerProxy : NSObject <WKURLSchemeHandler>
{
    id <WKURLSchemeHandler> _target; // +0x8
}
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (id)target;
- (void)setTarget:(id)arg1;
- (void).cxx_destruct;
@end
