@interface WeChatBroadcastSampleHandler : RPBroadcastSampleHandler <MMFinderRecordLiveHanderProtocol>
{
    MMFinderRecordLiveHander * _recordLiveHander; // +0x8
}
- (void)broadcastStartedWithSetupInfo:(id)arg1;
- (void)broadcastPaused;
- (void)broadcastResumed;
- (void)broadcastFinished;
- (void)processSampleBuffer:(opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;
- (void)stopRecord;
- (id)recordLiveHander;
- (void)setRecordLiveHander:(id)arg1;
- (void).cxx_destruct;
@end

