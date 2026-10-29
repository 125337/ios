@interface TSKMidiScoreCalculatorMix : NSObject <TSKMidiScoreCalculator>
{
    TSKMidiScoreResult * _scoreResult; // +0x8
}
- (id)init;
- (BOOL)updateWithResultSet:(id)arg1 index:(int)arg2;
- (BOOL)resetWithResultSet:(id)arg1;
- (id)scoreResult;
- (void)setScoreResult:(id)arg1;
- (void).cxx_destruct;
@end
