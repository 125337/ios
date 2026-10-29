@interface ScanAITimingProfile : NSObject
{
    unsigned long long _requestId; // +0x8
    long long _triggerType; // +0x10
    double _interactionTime; // +0x18
    double _snapshotRequestStartTime; // +0x20
    double _snapshotReadyTime; // +0x28
    double _imageReadyTime; // +0x30
}
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (long long)triggerType;
- (void)setTriggerType:(long long)arg1;
- (double)interactionTime;
- (void)setInteractionTime:(double)arg1;
- (double)snapshotRequestStartTime;
- (void)setSnapshotRequestStartTime:(double)arg1;
- (double)snapshotReadyTime;
- (void)setSnapshotReadyTime:(double)arg1;
- (double)imageReadyTime;
- (void)setImageReadyTime:(double)arg1;
@end
