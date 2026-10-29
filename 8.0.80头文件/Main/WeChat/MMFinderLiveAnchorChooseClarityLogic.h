@interface MMFinderLiveAnchorChooseClarityLogic : NSObject <MMFinderLiveChooseClarityDelegate>
{
    id <MMFinderLiveAnchorChooseClarityLogicDelegate> _delegate; // +0x8
    unsigned long long _claritySource; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMFinderLiveChooseClarityView * _clarityView; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (void)onClarityChooseEntranceSelect:(unsigned long long)arg1;
- (void)clarityMethodSelect:(id)arg1 indexPath:(id)arg2;
- (id)clarityView;
- (id)liveTask;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)claritySource;
- (void)setClaritySource:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setClarityView:(id)arg1;
- (void).cxx_destruct;
@end
