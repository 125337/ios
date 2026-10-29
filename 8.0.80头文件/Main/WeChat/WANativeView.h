@interface WANativeView : UIView <WANativeViewTextureInterface>
{
    BOOL _nativeViewUseTexture; // +0x8
    unsigned int _viewId; // +0xc
    unsigned int _webviewID; // +0x10
    WANativeViewTexture * _nativeViewTexture; // +0x18
    NSString * _data; // +0x20
    NSString * _appId; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)handleCommonParam:(id)arg1;
- (id)onInsertWithParam:(id)arg1;
- (id)onUpdateWithParam:(id)arg1;
- (id)onRemoveWithParam:(id)arg1;
- (void)sendEventToJs:(id)arg1 param:(id)arg2;
- (BOOL)nativeViewUseTexture;
- (void)setNativeViewUseTexture:(BOOL)arg1;
- (id)nativeViewTexture;
- (void)setNativeViewTexture:(id)arg1;
- (unsigned int)viewId;
- (void)setViewId:(unsigned int)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)webviewID;
- (void)setWebviewID:(unsigned int)arg1;
- (void).cxx_destruct;
@end
