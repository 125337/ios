@interface MMFinderLiveKTVTSKScorer : MMFinderLiveKTVBaseScorer <TSKScorerDelegate>
{
    int _lastScoreSenIndex; // +0x8
    TSKScorer * _audioScore; // +0x10
    id <TSKMidiScoreCalculator> _calculator; // +0x18
    double _lastScoreRatio; // +0x20
    unsigned long long _scoreSenCnt; // +0x28
}
- (id)initWithParam:(id)arg1;
- (void)initDefaultDatas;
- (BOOL)startScoreWithSong:(id)arg1;
- (BOOL)stopScore;
- (void)process:(id)arg1;
- (BOOL)finishScore:(id /* block */)arg1;
- (id)parseMusicNotes;
- (void)enableRatioReduce:(BOOL)arg1;
- (void)initAudioScorer;
- (void)stopAudioScorer;
- (void)setReduceRatio:(double)arg1;
- (void)setKeyShift:(int)arg1;
- (void)scorer:(id)arg1 didGetScoreForSentence:(int)arg2 result:(id)arg3;
- (void)scorer:(id)arg1 didFinishWithResult:(id)arg2;
- (void)scorer:(id)arg1 targetHitIn:(double)arg2 duration:(double)arg3 isHit:(BOOL)arg4 noteValue:(int)arg5;
- (id)audioScore;
- (void)setAudioScore:(id)arg1;
- (id)calculator;
- (void)setCalculator:(id)arg1;
- (double)lastScoreRatio;
- (void)setLastScoreRatio:(double)arg1;
- (unsigned long long)scoreSenCnt;
- (void)setScoreSenCnt:(unsigned long long)arg1;
- (int)lastScoreSenIndex;
- (void)setLastScoreSenIndex:(int)arg1;
- (void).cxx_destruct;
@end
