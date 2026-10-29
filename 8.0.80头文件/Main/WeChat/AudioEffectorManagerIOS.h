@interface AudioEffectorManagerIOS : NSObject
{
    WXAudioEffectManager * _audioEffectManager; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (id)getAudioEffectManager;
- (id)audioEffectManager;
- (void)setAudioEffectManager:(id)arg1;
- (void).cxx_destruct;
@end
