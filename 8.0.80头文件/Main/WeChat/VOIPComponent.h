@interface VOIPComponent : NSObject
{
    int mEngineChid; // +0x8
    VOIPChannelAdapter * mChannelAdapter; // +0x10
    VOIPNetNotifier * mNetNotifier; // +0x18
    ITransportChannel * mTransChannel; // +0x20
    IMVQQEngine * mMVEngine; // +0x28
}
- (id)init;
- (void)dealloc;
- (VOIPChannelAdapter *)mChannelAdapter;
- (void)setMChannelAdapter:(VOIPChannelAdapter *)arg1;
- (VOIPNetNotifier *)mNetNotifier;
- (void)setMNetNotifier:(VOIPNetNotifier *)arg1;
- (ITransportChannel *)mTransChannel;
- (void)setMTransChannel:(ITransportChannel *)arg1;
- (IMVQQEngine *)mMVEngine;
- (void)setMMVEngine:(IMVQQEngine *)arg1;
- (int)mEngineChid;
- (void)setMEngineChid:(int)arg1;
@end
