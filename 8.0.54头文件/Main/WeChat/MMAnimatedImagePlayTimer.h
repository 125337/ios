@interface MMAnimatedImagePlayTimer : NSObject
{
    NSTimer * m_timer; // +0x8
    NSMutableSet * m_playingTasks; // +0x10
    NSString * _runloopMode; // +0x18
}
+ (unsigned long long)getTickCount;
- (id)init;
- (void)startUpdateTasks;
- (void)stopUpdateTasks;
- (void)updateTasks;
- (id)playingTasks;
- (void)setPlayingTasks:(id)arg1;
- (id)runloopMode;
- (void)setRunloopMode:(id)arg1;
- (void).cxx_destruct;
@end

