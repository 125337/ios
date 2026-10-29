@interface WCAudioModuleProxy : NSObject <WCAudioModuleDelegate>
{
    BOOL _allowsExternalPlayback; // +0x8
    int _audioModuleScene; // +0xc
    NSString * _audioModuleIdentifier; // +0x10
    id <WCAudioModuleProxyDelegate> _delegate; // +0x18
}
- (id)initWithScene:(int)arg1 identifier:(id)arg2;
- (id)description;
- (void)updateAudioSession;
- (void)activeAudioModule;
- (void)deactiveAudioModule;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (int)audioModuleScene;
- (id)audioModuleIdentifier;
- (BOOL)allowsExternalPlayback;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
