@interface CommonPlayer : NSObject
{
    id <CommonPlayerDelegate> m_delegate; // +0x8
}
- (void)updatePath:(id)arg1;
- (void)updateData:(id)arg1;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)start;
- (void)setVolume:(float)arg1;
- (BOOL)isPlaying;
- (double)duration;
- (void)setNumberOfLoops:(long long)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
