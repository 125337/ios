@interface MVPlayerPluginMusicInitalSeek : MVPlayerBasePlugin
{
    BOOL _autoPlayAfterSeek; // +0x8
    double _initalTime; // +0x10
    double _pendingInitalTime; // +0x18
}
- (id)initWithInitialTime:(double)arg1;
- (void)executeWithEvent:(unsigned long long)arg1;
- (BOOL)autoPlayAfterSeek;
- (void)setAutoPlayAfterSeek:(BOOL)arg1;
- (double)initalTime;
- (void)setInitalTime:(double)arg1;
- (double)pendingInitalTime;
- (void)setPendingInitalTime:(double)arg1;
@end

