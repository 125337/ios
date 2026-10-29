@interface MBEventHandler_private_openChannelsLive : MBEventHandlerBaseAsync
{
    BOOL _isAdCalled; // +0x8
    MBADConversionContext * _mbAD_ctx; // +0x10
}
- (void)invoke:(id)arg1;
- (void)failBlockHandler:(int)arg1;
- (id)createAdsParamsWithExtraData:(id)arg1;
- (id)apiName;
- (BOOL)isAdCalled;
- (void)setIsAdCalled:(BOOL)arg1;
- (id)mbAD_ctx;
- (void)setMbAD_ctx:(id)arg1;
- (void).cxx_destruct;
@end
