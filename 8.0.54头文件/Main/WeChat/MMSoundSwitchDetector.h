@interface MMSoundSwitchDetector : MMObject
{
    unsigned int _soundId; // +0x8
    NSMutableArray * _completeHandlers; // +0x10
    double _beginTime; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (void)checkSoundSwitchStatus:(id /* block */)arg1;
- (void)dealloc;
- (void)complete;
- (unsigned int)soundId;
- (void)setSoundId:(unsigned int)arg1;
- (id)completeHandlers;
- (void)setCompleteHandlers:(id)arg1;
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (void).cxx_destruct;
@end

