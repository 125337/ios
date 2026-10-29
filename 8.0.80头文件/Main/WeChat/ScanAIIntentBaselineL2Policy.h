@interface ScanAIIntentBaselineL2Policy : NSObject <ScanAIIntentL2Policy>
- (id)textProposalWithNormalizedRect:(CGRect)arg1 trackId:(id)arg2 ffeClassId:(long long)arg3 detectionIndex:(unsigned long long)arg4 modelProb:(double)arg5;
- (id)primaryTextProposalFromProposals:(id)arg1;
- (id)decisionForFilterResult:(id)arg1 proposal:(id)arg2 mode:(long long)arg3;
- (id)loggedDecision:(id)arg1 filterResult:(id)arg2 proposal:(id)arg3 mode:(long long)arg4;
- (BOOL)textProposal:(id)arg1 ranksBeforeProposal:(id)arg2;
- (BOOL)resolveTextIntentType:(long long *)arg1 filterResult:(id)arg2;
@end
