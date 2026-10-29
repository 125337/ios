@interface ScanAIIntentScanScenePolicy : NSObject <ScanAIIntentSceneRanking>
{
    ScanAIIntentBaseScenePolicy * _basePolicy; // +0x8
}
- (id)initWithEnabledIntentTypes:(id)arg1;
- (id)winnerFromCandidateBatch:(id)arg1;
- (id)basePolicy;
- (void)setBasePolicy:(id)arg1;
- (void).cxx_destruct;
@end
