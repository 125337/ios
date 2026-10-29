@interface ScanAIVideoIntentFlowController : NSObject
{
    BOOL _scanSessionActive; // +0x8
    BOOL _detectionInFlight; // +0x9
    BOOL _invalidated; // +0xa
    id <ScanAIVideoIntentFlowControllerDelegate> _delegate; // +0x10
    ScanAIVideoIntentFacade * _facade; // +0x18
    NSRecursiveLock * _stateLock; // +0x20
    NSMutableSet * _reportedTrackKeys; // +0x28
    unsigned long long _generation; // +0x30
    double _nextEligibleTime; // +0x38
}
+ (id)resultFamilyForIntentType:(long long)arg1;
+ (id)reportedTrackKeyForResult:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (void)startScanSession;
- (void)stopScanSession;
- (BOOL)submitImageBuffer:(__CVBuffer *)arg1 interfaceOrientation:(long long)arg2;
- (void)invalidate;
- (void)handleDetectionResult:(id)arg1 generation:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)facade;
- (void)setFacade:(id)arg1;
- (id)stateLock;
- (void)setStateLock:(id)arg1;
- (id)reportedTrackKeys;
- (void)setReportedTrackKeys:(id)arg1;
- (BOOL)scanSessionActive;
- (void)setScanSessionActive:(BOOL)arg1;
- (BOOL)detectionInFlight;
- (void)setDetectionInFlight:(BOOL)arg1;
- (BOOL)invalidated;
- (void)setInvalidated:(BOOL)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (double)nextEligibleTime;
- (void)setNextEligibleTime:(double)arg1;
- (void).cxx_destruct;
@end
