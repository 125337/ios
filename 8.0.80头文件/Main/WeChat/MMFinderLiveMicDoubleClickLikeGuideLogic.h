@interface MMFinderLiveMicDoubleClickLikeGuideLogic : NSObject
{
    BOOL _guideShowing; // +0x8
    id <MMFinderLiveMicDoubleClickLikeGuideLogicDelegate> _delegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)onConnectMicLikeEnabled;
- (void)onMicDoubleClickLikeTriggered;
- (void)invalidate;
- (void)tryShowGuide;
- (BOOL)shouldShowGuide;
- (BOOL)isLiveInGoodState;
- (void)recordGuideShown;
- (id)todayDateString;
- (id)finderLiveTask;
- (id)eduParam;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)guideShowing;
- (void)setGuideShowing:(BOOL)arg1;
- (void).cxx_destruct;
@end
