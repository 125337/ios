@interface MMFinderLiveFullScreenSlideExitLogic : NSObject
{
    id <MMFinderLiveFullScreenSlideExitLogicGuideDelegate> _guideDelegate; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (void)onEnterLive;
- (void)innerShowFullScreenSlideExitGuide;
- (void)innerDismissFullScreenSlideExitGuide;
- (BOOL)enableShowFullScreenSlideExitGuide;
- (id)finderLiveTask;
- (id)eduParam;
- (BOOL)enableFullScreenSlideExit;
- (id)guideDelegate;
- (void)setGuideDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
