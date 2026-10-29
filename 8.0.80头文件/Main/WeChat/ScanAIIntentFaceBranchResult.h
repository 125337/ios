@interface ScanAIIntentFaceBranchResult : NSObject
{
    NSArray * _faceCandidates; // +0x8
    ScanAIIntentSourceStatus * _sourceStatus; // +0x10
}
- (id)faceCandidates;
- (void)setFaceCandidates:(id)arg1;
- (id)sourceStatus;
- (void)setSourceStatus:(id)arg1;
- (void).cxx_destruct;
@end
