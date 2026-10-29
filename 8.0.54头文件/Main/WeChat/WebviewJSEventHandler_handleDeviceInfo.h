@interface WebviewJSEventHandler_handleDeviceInfo : WebviewJSEventHandlerBase
{
    UISlider * m_volumeViewSlider; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)enableFullScreen:(id)arg1 errMsg:(id *)arg2;
- (void)setDisableInteractivePop:(id)arg1 errMsg:(id *)arg2;
- (void)setOrientation:(id)arg1 errMsg:(id *)arg2;
- (void)setVolume:(id)arg1 errMsg:(id *)arg2;
- (id)getVolume:(id)arg1 errMsg:(id *)arg2;
- (void)setScreenBrightness:(id)arg1 errMsg:(id *)arg2;
- (id)getScreenBrightness:(id)arg1 errMsg:(id *)arg2;
- (id)getUIParams:(id)arg1 errMsg:(id *)arg2;
- (id)volumeViewSlider;
- (void)setKeepScreenOn:(id)arg1 errMsg:(id *)arg2;
- (void)setFullScreenLayout:(id)arg1 errMsg:(id *)arg2;
- (BOOL)needPassPramsWithAction:(id)arg1;
- (void).cxx_destruct;
@end

