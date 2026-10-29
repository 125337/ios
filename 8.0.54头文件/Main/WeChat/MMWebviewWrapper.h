@interface MMWebviewWrapper : NSObject
{
    BOOL _isRequesting; // +0x8
    WKWebView * _weakWebview; // +0x10
}
- (id)weakWebview;
- (void)setWeakWebview:(id)arg1;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (void).cxx_destruct;
@end

