@interface WAJSEventHandler_openChannelsLive : WAJSEventHandler_BaseEvent
{
    MBADConversionContext * _mbAD_ctx; // +0x8
    BOOL _isCallByAds; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)failBlockHandler:(int)arg1;
- (id)createLivePermissionVerifyInfWithExtraData:(id)arg1;
- (id)createAdsParamsWithExtraData:(id)arg1;
- (BOOL)endOnOpen;
- (void)popOpenSDKTransferMMWebviewVC:(id)arg1;
- (BOOL)isCallByAds;
- (void)setIsCallByAds:(BOOL)arg1;
- (void).cxx_destruct;
@end
