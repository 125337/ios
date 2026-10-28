@interface WCVideoProducerMusicPlayingOperation : WCVideoProducerBaseOperation
{
    OMJMusicInfo * _omjMusicInfo; // +0x8
    long long _musicOrder; // +0x10
}
- (id)initWithMusic:(id)arg1 order:(long long)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)omjMusicInfo;
- (void)setOmjMusicInfo:(id)arg1;
- (long long)musicOrder;
- (void)setMusicOrder:(long long)arg1;
- (void).cxx_destruct;
@end
