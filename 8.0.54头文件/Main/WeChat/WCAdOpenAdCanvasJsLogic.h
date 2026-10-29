@interface WCAdOpenAdCanvasJsLogic : NSObject <WCCanvasDynamicDataLoaderDelegate>
{
    int _canvasPageScene; // +0x8
    id <WCAdOpenAdCanvasJsLogicDelegate> _delegate; // +0x10
    WCCanvasDynamicDataLoader * _dataLoader; // +0x18
    WCAdvertiseInfo * _adInfo; // +0x20
    WCAdOpenAdCanvasParamsInfo * _paramsInfo; // +0x28
    long long _jsEnterScene; // +0x30
}
- (void)openAdCanvas:(id)arg1 jsEnterScene:(long long)arg2;
- (id)dataLoader;
- (int)getCanvasPageScene:(long long)arg1 source:(long long)arg2;
- (void)notifyOpenAdCanvasSuccessWithMsg:(id)arg1;
- (void)notifyOpenAdCanvasFailWithMsg:(id)arg1;
- (void)showLoading;
- (void)hideLoading;
- (void)onCanvasServerDataReturn:(id)arg1 errorCode:(int)arg2 forLoadParams:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setDataLoader:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)paramsInfo;
- (void)setParamsInfo:(id)arg1;
- (long long)jsEnterScene;
- (void)setJsEnterScene:(long long)arg1;
- (int)canvasPageScene;
- (void)setCanvasPageScene:(int)arg1;
- (void).cxx_destruct;
@end

