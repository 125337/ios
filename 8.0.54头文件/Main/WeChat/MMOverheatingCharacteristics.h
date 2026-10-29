@interface MMOverheatingCharacteristics : NSObject
{
    NSDate * _timeThatApplicationBecomedActive; // +0x8
    NSDate * _timeThatApplicationResignedActive; // +0x10
    NSDate * _timeThatApplicationEnteredForeground; // +0x18
    NSDate * _timeThatApplicationEnteredBackground; // +0x20
    NSDate * _timeThatNetworkChangedToUnreachable; // +0x28
}
- (BOOL)mayBeOverheating;
- (double)overheatingDuration;
- (id)timeThatApplicationBecomedActive;
- (void)setTimeThatApplicationBecomedActive:(id)arg1;
- (id)timeThatApplicationResignedActive;
- (void)setTimeThatApplicationResignedActive:(id)arg1;
- (id)timeThatApplicationEnteredForeground;
- (void)setTimeThatApplicationEnteredForeground:(id)arg1;
- (id)timeThatApplicationEnteredBackground;
- (void)setTimeThatApplicationEnteredBackground:(id)arg1;
- (id)timeThatNetworkChangedToUnreachable;
- (void)setTimeThatNetworkChangedToUnreachable:(id)arg1;
- (void).cxx_destruct;
@end

