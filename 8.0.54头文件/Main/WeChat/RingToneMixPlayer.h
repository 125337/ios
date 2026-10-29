@interface RingToneMixPlayer : NSObject <RingTonePlayerExt, RingTonePlayer>
{
    BOOL _customVibrateEnabled; // +0x8
    BOOL _shouldPlayForcibly; // +0x9
    unsigned long long _scene; // +0x10
    NSString * _identifier; // +0x18
    NSObject<RingTonePlayer> * _curPlayer; // +0x20
    RingToneFinderPlayerView * _finderPlayerView; // +0x28
    RingToneAvPlayer * _avPlayer; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)playDefaultRing;
- (void)setCustomVibrateEnabled:(BOOL)arg1;
- (void)playRing:(id)arg1;
- (void)__playRing:(id)arg1 isUsingFinderPlayer:(BOOL)arg2;
- (void)stopPlay;
- (id)finderPlayerView;
- (id)avPlayer;
- (id)curPlayer;
- (void)stopAllPlay;
- (double)currentPlayTime;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (BOOL)customVibrateEnabled;
- (BOOL)shouldPlayForcibly;
- (void)setShouldPlayForcibly:(BOOL)arg1;
- (void)setCurPlayer:(id)arg1;
- (void)setFinderPlayerView:(id)arg1;
- (void)setAvPlayer:(id)arg1;
- (void).cxx_destruct;
@end

