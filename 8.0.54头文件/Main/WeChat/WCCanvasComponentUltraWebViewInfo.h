@interface WCCanvasComponentUltraWebViewInfo : MMObject <NSCoding>
{
    BOOL _hideWebViewProgress; // +0x8
    NSString * _webViewUrl; // +0x10
    double _webViewWidth; // +0x18
    double _webViewHeight; // +0x20
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)webViewUrl;
- (void)setWebViewUrl:(id)arg1;
- (double)webViewWidth;
- (void)setWebViewWidth:(double)arg1;
- (double)webViewHeight;
- (void)setWebViewHeight:(double)arg1;
- (BOOL)hideWebViewProgress;
- (void)setHideWebViewProgress:(BOOL)arg1;
- (void).cxx_destruct;
@end

