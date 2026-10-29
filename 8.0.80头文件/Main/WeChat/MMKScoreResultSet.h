@interface MMKScoreResultSet : NSObject
{
    int _totalScore; // +0x8
    int _avgScore; // +0xc
    int _lastScore; // +0x10
    int _curIndex; // +0x14
    NSArray * _allScores; // +0x18
}
- (int)totalScore;
- (void)setTotalScore:(int)arg1;
- (int)avgScore;
- (void)setAvgScore:(int)arg1;
- (id)allScores;
- (void)setAllScores:(id)arg1;
- (int)lastScore;
- (void)setLastScore:(int)arg1;
- (int)curIndex;
- (void)setCurIndex:(int)arg1;
- (void).cxx_destruct;
@end
