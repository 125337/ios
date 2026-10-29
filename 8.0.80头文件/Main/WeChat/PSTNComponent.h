@interface PSTNComponent : NSObject
{
    PSTNChannelAdapter * mChannelAdapter; // +0x8
    PSTNNetNotifier * mNetNotifier; // +0x10
    ITransportChannel * mTransChannel; // +0x18
    IMVQQEngine * mMVEngine; // +0x20
    int mEngineChid; // +0x28
}
- (id)init;
- (void)dealloc;
- (PSTNChannelAdapter *)mChannelAdapter;
- (void)setMChannelAdapter:(PSTNChannelAdapter *)arg1;
- (PSTNNetNotifier *)mNetNotifier;
- (void)setMNetNotifier:(PSTNNetNotifier *)arg1;
- (ITransportChannel *)mTransChannel;
- (void)setMTransChannel:(ITransportChannel *)arg1;
- (IMVQQEngine *)mMVEngine;
- (void)setMMVEngine:(IMVQQEngine *)arg1;
- (int)mEngineChid;
- (void)setMEngineChid:(int)arg1;
@end
