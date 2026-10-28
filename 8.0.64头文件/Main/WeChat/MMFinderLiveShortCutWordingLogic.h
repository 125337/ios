@interface MMFinderLiveShortCutWordingLogic : NSObject
{
    BOOL _isAutoLooping; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    NSMutableArray * _shortCutWordingList; // +0x18
    FinderLiveShortcutWordingConfig * _shortCutWordingConfig; // +0x20
    MMFinderLiveQuickReplyModel * _currShortCutModel; // +0x28
    unsigned long long _nextTargetIndex; // +0x30
}
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultDatas;
- (void)onQuickReplyWordingInfoUpdated:(id)arg1;
- (void)onJoinLive:(id)arg1;
- (void)forceStopAutoLoopingAndClear;
- (void)delayGetShortcutWording;
- (void)invokeGetShortcutWording;
- (void)updateQuickReplyWordingList:(id)arg1;
- (void)startAutoLoopingIfNeed;
- (void)stopAutoLooping;
- (void)updateNextShortCutWording;
- (void)increaseNextTargetIndex;
- (unsigned long long)shortCutWordingCount;
- (unsigned int)autoLoopUpdateInterval;
- (id)currExposeShortCutModel;
- (unsigned int)getShortcutWordingDelayTime;
- (BOOL)enableGetShortcutWording;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)shortCutWordingList;
- (void)setShortCutWordingList:(id)arg1;
- (id)shortCutWordingConfig;
- (void)setShortCutWordingConfig:(id)arg1;
- (id)currShortCutModel;
- (void)setCurrShortCutModel:(id)arg1;
- (unsigned long long)nextTargetIndex;
- (void)setNextTargetIndex:(unsigned long long)arg1;
- (BOOL)isAutoLooping;
- (void)setIsAutoLooping:(BOOL)arg1;
- (void).cxx_destruct;
@end
