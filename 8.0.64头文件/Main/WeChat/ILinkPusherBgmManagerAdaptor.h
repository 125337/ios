@interface ILinkPusherBgmManagerAdaptor : NSObject
{
    TXAudioEffectManager * _audioEffectManager; // +0x8
}
+ (id)sharedInstance;
+ (void)destroySharedIntance;
- (id)initInternal;
- (void)dealloc;
- (id)getAudioEffectManager;
- (id)audioEffectManager;
- (void)setAudioEffectManager:(id)arg1;
- (void).cxx_destruct;
@end
