@interface GCVcInfoModel : NSObject
{
    BOOL _isGameHostWebVc; // +0x8
    BOOL _isGameVc; // +0x9
    NSString * _vcClassName; // +0x10
    NSString * _vcPtr; // +0x18
    NSString * _webViewUrl; // +0x20
    NSString * _subVcGameHostWebUrl; // +0x28
}
- (BOOL)isGameRelateVc;
- (id)description;
- (id)vcClassName;
- (void)setVcClassName:(id)arg1;
- (id)vcPtr;
- (void)setVcPtr:(id)arg1;
- (id)webViewUrl;
- (void)setWebViewUrl:(id)arg1;
- (BOOL)isGameHostWebVc;
- (void)setIsGameHostWebVc:(BOOL)arg1;
- (BOOL)isGameVc;
- (void)setIsGameVc:(BOOL)arg1;
- (id)subVcGameHostWebUrl;
- (void)setSubVcGameHostWebUrl:(id)arg1;
- (void).cxx_destruct;
@end
