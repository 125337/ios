@interface MMFinderLiveKTVMMKScorer : MMFinderLiveKTVBaseScorer <MMKScorerDelegate>
{
    BOOL _scoreBegin; // +0x8
    MMKScorer * _audioScore; // +0x10
}
- (id)initWithParam:(id)arg1;
- (void)initDefaultDatas;
- (BOOL)startScoreWithSong:(id)arg1;
- (BOOL)stopScore;
- (void)process:(id)arg1;
- (void)processScore:(id)arg1;
- (BOOL)finishScore:(id /* block */)arg1;
- (id)parseMusicNotes;
- (void)setKeyShift:(int)arg1;
- (void)initAudioScorer;
- (void)configAudioScorer:(id)arg1;
- (void)stopAudioScorer;
- (void)scorerCallback:(id)arg1 didGetScoreForSentence:(int)arg2 result:(id)arg3;
- (void)scorerCallback:(id)arg1 didFinishWithResult:(id)arg2;
- (void)scorerCallback:(id)arg1 targetHitIn:(double)arg2 duration:(double)arg3 isHit:(BOOL)arg4 noteValue:(int)arg5 noteHeight:(int)arg6;
- (id)audioScore;
- (void)setAudioScore:(id)arg1;
- (BOOL)scoreBegin;
- (void)setScoreBegin:(BOOL)arg1;
- (void).cxx_destruct;
@end

