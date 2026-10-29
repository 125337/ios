@interface MagicWeAppAttachProfile : NSObject
{
    BOOL _reused; // +0x8
    BOOL _wxConfigCompleted; // +0x9
    BOOL _frozen; // +0xa
    NSLock * _lock; // +0x10
    NSMutableDictionary * _starts; // +0x18
    NSMutableDictionary * _durations; // +0x20
    double _startTime; // +0x28
    double _finishTime; // +0x30
    NSString * _launchId; // +0x38
    NSString * _preload; // +0x40
}
- (id)init;
- (void)markLaunchStarted:(unsigned long long)arg1;
- (void)startStage:(id)arg1;
- (void)finishStage:(id)arg1;
- (void)startResourceBranches;
- (void)recordConsumeState:(unsigned int)arg1;
- (void)markReused;
- (void)markWxConfigCompleted;
- (void)finish;
- (id)stagesForNames:(id)arg1 durations:(id)arg2 includingDescendants:(BOOL)arg3 remainingStageCount:(unsigned long long *)arg4 truncated:(BOOL *)arg5;
- (id)snapshotIncludingDescendants:(BOOL)arg1 maximumStageCount:(unsigned long long)arg2;
- (id)snapshot;
- (id)snapshotWithMaximumStageCount:(unsigned long long)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)starts;
- (void)setStarts:(id)arg1;
- (id)durations;
- (void)setDurations:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)finishTime;
- (void)setFinishTime:(double)arg1;
- (id)launchId;
- (void)setLaunchId:(id)arg1;
- (id)preload;
- (void)setPreload:(id)arg1;
- (BOOL)reused;
- (void)setReused:(BOOL)arg1;
- (BOOL)wxConfigCompleted;
- (void)setWxConfigCompleted:(BOOL)arg1;
- (BOOL)frozen;
- (void)setFrozen:(BOOL)arg1;
- (void).cxx_destruct;
@end
