@interface WCFinderMinimizeAnimationTask : NSObject
{
    MinimizeTaskData * _taskData; // +0x8
    CGRect _startFrame; // +0x10
}
- (CGRect)startFrame;
- (void)setStartFrame:(CGRect)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (void).cxx_destruct;
@end
