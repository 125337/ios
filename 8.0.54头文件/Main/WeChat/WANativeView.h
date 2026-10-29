@interface WANativeView : UIView
{
    unsigned int _viewId; // +0x8
    unsigned int _webviewID; // +0xc
    NSString * _data; // +0x10
    NSString * _appId; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)handleCommonParam:(id)arg1;
- (id)onInsertWithParam:(id)arg1;
- (id)onUpdateWithParam:(id)arg1;
- (id)onRemoveWithParam:(id)arg1;
- (void)sendEventToJs:(id)arg1 param:(id)arg2;
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

