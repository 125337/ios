@interface ScanAIIntentFFEBranchResult : NSObject
{
    NSArray * _objectCandidates; // +0x8
    ScanAIIntentTextProposal * _textProposal; // +0x10
    ScanAIIntentSourceStatus * _sourceStatus; // +0x18
}
- (id)objectCandidates;
- (void)setObjectCandidates:(id)arg1;
- (id)textProposal;
- (void)setTextProposal:(id)arg1;
- (id)sourceStatus;
- (void)setSourceStatus:(id)arg1;
- (void).cxx_destruct;
@end
