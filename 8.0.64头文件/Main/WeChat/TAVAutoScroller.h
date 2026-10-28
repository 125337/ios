@interface TAVAutoScroller : NSObject
{
    float _autoScrollSpeed; // +0x8
    TAVDisplayTriggerMachine * _triggerMachine; // +0x10
    long long _autoScrollType; // +0x18
    double _autoScrollInset; // +0x20
    double _earEdgeInset; // +0x28
}
- (id)init;
- (void)cleanUpAutoScrollValues;
- (id)triggerMachine;
- (void)setTriggerMachine:(id)arg1;
- (long long)autoScrollType;
- (void)setAutoScrollType:(long long)arg1;
- (float)autoScrollSpeed;
- (void)setAutoScrollSpeed:(float)arg1;
- (double)autoScrollInset;
- (void)setAutoScrollInset:(double)arg1;
- (double)earEdgeInset;
- (void)setEarEdgeInset:(double)arg1;
- (void).cxx_destruct;
@end
