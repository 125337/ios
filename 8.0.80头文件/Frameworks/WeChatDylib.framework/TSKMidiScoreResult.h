@interface TSKMidiScoreResult : TSKBaseModel <NSCopying>
{
    NSMutableArray * _allScores; // +0x8
    int _totalScore; // +0x10
    int _lastScore; // +0x14
    int _curIndex; // +0x18
}
- (id)init;
- (id)allScores;
- (void)setAllScores:(id)arg1;
- (void)updateScore:(int)arg1 atIndex:(int)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (int)totalScore;
- (void)setTotalScore:(int)arg1;
- (int)lastScore;
- (void)setLastScore:(int)arg1;
- (int)curIndex;
- (void)setCurIndex:(int)arg1;
- (void).cxx_destruct;
@end
