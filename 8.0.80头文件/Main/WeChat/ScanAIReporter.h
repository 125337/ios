@interface ScanAIReporter : NSObject
{
    BOOL _inRound; // +0x8
    unsigned long long _roundId; // +0x10
    double _startTime; // +0x18
    double _stopTime; // +0x20
    NSMutableArray * _eventOrder; // +0x28
    NSMutableDictionary * _eventFirstTime; // +0x30
    NSMutableArray * _transitions; // +0x38
    NSMutableArray * _timingStages; // +0x40
}
- (id)init;
- (double)now;
- (id)nameOfEvent:(long long)arg1;
- (id)nameOfState:(long long)arg1;
- (void)markRoundStart:(unsigned long long)arg1;
- (void)markRoundStart:(unsigned long long)arg1 interactionTime:(double)arg2;
- (void)markStop;
- (void)recordEvent:(long long)arg1;
- (void)recordStateFrom:(long long)arg1 to:(long long)arg2;
- (void)recordTimingStage:(id)arg1 costMS:(double)arg2 detail:(id)arg3;
- (void)flushReport;
- (unsigned long long)roundId;
- (void)setRoundId:(unsigned long long)arg1;
- (BOOL)inRound;
- (void)setInRound:(BOOL)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)stopTime;
- (void)setStopTime:(double)arg1;
- (id)eventOrder;
- (void)setEventOrder:(id)arg1;
- (id)eventFirstTime;
- (void)setEventFirstTime:(id)arg1;
- (id)transitions;
- (void)setTransitions:(id)arg1;
- (id)timingStages;
- (void)setTimingStages:(id)arg1;
- (void).cxx_destruct;
@end
