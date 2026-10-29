@interface WebviewJSEventHandler_openMapNavigateMenu : WebviewJSEventHandlerBase <INavigateLogicControllerExt, NavigateLogicControllerDelegate>
{
    NavigateLogicController * _navigateLogicController; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)showNavigateMenu:(id)arg1 topMapType:(unsigned long long)arg2;
- (BOOL)canShowShareLocationMsgToDevice;
- (void)onPresentViewControlelr:(id)arg1 Animated:(BOOL)arg2;
- (BOOL)isValidCoordinate:(CLLocationCoordinate2D)arg1;
- (void)onMapItemClickOrCancel:(BOOL)arg1;
- (void)delayNotifyOK;
- (void)delayNotifyCancel;
- (void).cxx_destruct;
@end
