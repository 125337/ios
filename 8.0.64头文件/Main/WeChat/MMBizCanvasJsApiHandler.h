@interface MMBizCanvasJsApiHandler : NSObject <PBMessageObserverDelegate>
{
    MMWebCanvasItemData * _canvasItemData; // +0x8
    id <MMBizCanvasJsApiHandlerDelegate> _delegate; // +0x10
    id /* block */ _callbackBlock; // +0x18
}
- (void)dealloc;
- (void)setupApiWithJSContext:(id)arg1;
- (void)addApi_getInfo:(id)arg1;
- (void)addApi_getData:(id)arg1;
- (void)addApi_deleteCanvasCard:(id)arg1;
- (void)addApi_onItemClick:(id)arg1;
- (void)addApi_preloadImage:(id)arg1;
- (void)addApi_adRequest:(id)arg1;
- (void)onResponseAdRequestCgi:(id)arg1;
- (void)addApi_canvasRequest:(id)arg1;
- (void)onResponseCanvasRequestCgi:(id)arg1;
- (void)callbackWithId:(id)arg1 params:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)canvasItemData;
- (void)setCanvasItemData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)callbackBlock;
- (void)setCallbackBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
