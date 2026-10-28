@interface VOIPComponent : NSObject
{
    int mEngineChid; // +0x8
    VOIPChannelAdapter * mChannelAdapter; // +0x10
    VoipCSChannelAdapter * mCSChannelAdapter; // +0x18
    VOIPNetNotifier * mNetNotifier; // +0x20
    VOIPCSNetNotifier * mCSNetNotifier; // +0x28
    ITransportChannel * mTransChannel; // +0x30
    IMVQQEngine * mMVEngine; // +0x38
}
- (id)init;
- (id)initForCustomerService;
- (void)dealloc;
- (VOIPChannelAdapter *)mChannelAdapter;
- (void)setMChannelAdapter:(VOIPChannelAdapter *)arg1;
- (VoipCSChannelAdapter *)mCSChannelAdapter;
- (void)setMCSChannelAdapter:(VoipCSChannelAdapter *)arg1;
- (VOIPNetNotifier *)mNetNotifier;
- (void)setMNetNotifier:(VOIPNetNotifier *)arg1;
- (VOIPCSNetNotifier *)mCSNetNotifier;
- (void)setMCSNetNotifier:(VOIPCSNetNotifier *)arg1;
- (ITransportChannel *)mTransChannel;
- (void)setMTransChannel:(ITransportChannel *)arg1;
- (IMVQQEngine *)mMVEngine;
- (void)setMMVEngine:(IMVQQEngine *)arg1;
- (int)mEngineChid;
- (void)setMEngineChid:(int)arg1;
@end
