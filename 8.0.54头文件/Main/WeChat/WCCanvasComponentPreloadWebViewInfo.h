@interface WCCanvasComponentPreloadWebViewInfo : MMObject <NSCoding>
{
    NSString * _webviewUrl; // +0x8
    double _webviewWidth; // +0x10
    double _webviewHeight; // +0x18
    double _screenHeightOff; // +0x20
    CGSize _webviewDynamicSize; // +0x28
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)webviewUrl;
- (void)setWebviewUrl:(id)arg1;
- (double)webviewWidth;
- (void)setWebviewWidth:(double)arg1;
- (double)webviewHeight;
- (void)setWebviewHeight:(double)arg1;
- (double)screenHeightOff;
- (void)setScreenHeightOff:(double)arg1;
- (CGSize)webviewDynamicSize;
- (void)setWebviewDynamicSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

