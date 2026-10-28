@interface MMFinderLiveDoubleClickLikeGuideLogic : NSObject
{
    BOOL _doubleClickLikeTriggered; // +0x8
    BOOL _keyboardVisible; // +0x9
    id <MMFinderLiveDoubleClickLikeGuideLogicDelegate> _guideDelegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
}
+ (unsigned int)defaultSecondsShowGuideAfterJoinLive;
- (id)initWithTaskId:(id)arg1;
- (void)onEnterLive;
- (void)innerShowDoubleClickLikeGuide;
- (void)innerDismissShowDoubleClickLikeGuide;
- (BOOL)enableShowDoubleClickLikeGuide;
- (id)finderLiveTask;
- (id)eduParam;
- (BOOL)enableDoubleClickLike;
- (BOOL)enableShowGuide;
- (void)onDoubleClickedLikeTriggered;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (id)guideDelegate;
- (void)setGuideDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)doubleClickLikeTriggered;
- (void)setDoubleClickLikeTriggered:(BOOL)arg1;
- (BOOL)keyboardVisible;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end
