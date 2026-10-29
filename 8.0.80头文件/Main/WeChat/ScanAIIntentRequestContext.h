@interface ScanAIIntentRequestContext : NSObject
{
    BOOL _ffeBranchFinished; // +0x8
    BOOL _faceBranchFinished; // +0x9
    BOOL _textFilterBranchFinished; // +0xa
    BOOL _batchDelivered; // +0xb
    BOOL _finished; // +0xc
    ScanAIIntentRequestInput * _input; // +0x10
    ScanAIIntentCanonicalFrame * _canonicalFrame; // +0x18
    ScanAIIntentQualityContext * _qualityContext; // +0x20
    unsigned long long _generation; // +0x28
    id /* block */ _completion; // +0x30
    NSMutableArray * _candidates; // +0x38
    ScanAIIntentSourceStatus * _ffeStatus; // +0x40
    ScanAIIntentSourceStatus * _faceStatus; // +0x48
    ScanAIIntentSourceStatus * _textFilterStatus; // +0x50
}
- (id)init;
- (id)input;
- (void)setInput:(id)arg1;
- (id)canonicalFrame;
- (void)setCanonicalFrame:(id)arg1;
- (id)qualityContext;
- (void)setQualityContext:(id)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)candidates;
- (void)setCandidates:(id)arg1;
- (id)ffeStatus;
- (void)setFfeStatus:(id)arg1;
- (id)faceStatus;
- (void)setFaceStatus:(id)arg1;
- (id)textFilterStatus;
- (void)setTextFilterStatus:(id)arg1;
- (BOOL)ffeBranchFinished;
- (void)setFfeBranchFinished:(BOOL)arg1;
- (BOOL)faceBranchFinished;
- (void)setFaceBranchFinished:(BOOL)arg1;
- (BOOL)textFilterBranchFinished;
- (void)setTextFilterBranchFinished:(BOOL)arg1;
- (BOOL)batchDelivered;
- (void)setBatchDelivered:(BOOL)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
