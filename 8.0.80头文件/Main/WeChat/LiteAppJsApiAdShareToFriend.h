@interface LiteAppJsApiAdShareToFriend : LiteAppJsApiAdBase <WCCanvasImageLoaderObserver>
{
    NSString * _shareTitle; // +0x20
    NSString * _shareDesc; // +0x28
    NSString * _shareThumbUrl; // +0x30
    NSString * _shareWebUrl; // +0x38
    NSString * _canvasDynamicExtInfo; // +0x40
    NSString * _canvasDynamicLoadExtInfo; // +0x48
}
- (void)doAdInvokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)onDownloadImageTimeout;
- (BOOL)forbidShareUseThumbData;
- (void)dealloc;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)shareTitle;
- (void)setShareTitle:(id)arg1;
- (id)shareDesc;
- (void)setShareDesc:(id)arg1;
- (id)shareThumbUrl;
- (void)setShareThumbUrl:(id)arg1;
- (id)shareWebUrl;
- (void)setShareWebUrl:(id)arg1;
- (id)canvasDynamicExtInfo;
- (void)setCanvasDynamicExtInfo:(id)arg1;
- (id)canvasDynamicLoadExtInfo;
- (void)setCanvasDynamicLoadExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
