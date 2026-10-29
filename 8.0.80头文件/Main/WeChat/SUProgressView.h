@interface SUProgressView : UIProgressView
{
    float _currentPhaseTotalLength; // +0x8
    float _currentPhaseDoneLength; // +0xc
    float _currentPhasePercentage; // +0x10
    float _currentPhaseBaseProgress; // +0x14
}
- (void)newPhaseWithTotalLength:(float)arg1 progressPercentage:(float)arg2;
- (void)accumulateDoneLength:(float)arg1;
@end
