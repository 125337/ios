@interface WAJSEventHandler_openChannelsRewardedVideoAd : WAJSEventHandler_BaseEvent
{
    MBADConversionContext * _mbAD_ctx; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onSuccessWithFeedBackInfo:(id)arg1 rewardedDuration:(unsigned int)arg2;
- (void).cxx_destruct;
@end
