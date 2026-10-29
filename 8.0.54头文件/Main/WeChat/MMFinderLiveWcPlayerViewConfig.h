@interface MMFinderLiveWcPlayerViewConfig : NSObject
{
    BOOL _autoPlay; // +0x8
    BOOL _forceUseSystemPlayer; // +0x9
    BOOL _configPlayerBlackBackground; // +0xa
    unsigned int _initialPlayTime; // +0xc
    unsigned long long _loopMode; // +0x10
}
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg1;
- (unsigned long long)loopMode;
- (void)setLoopMode:(unsigned long long)arg1;
- (unsigned int)initialPlayTime;
- (void)setInitialPlayTime:(unsigned int)arg1;
- (BOOL)forceUseSystemPlayer;
- (void)setForceUseSystemPlayer:(BOOL)arg1;
- (BOOL)configPlayerBlackBackground;
- (void)setConfigPlayerBlackBackground:(BOOL)arg1;
@end

