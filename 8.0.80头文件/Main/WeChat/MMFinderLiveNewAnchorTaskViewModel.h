@interface MMFinderLiveNewAnchorTaskViewModel : NSObject
{
    BOOL _shouldShowCompletePageAnchorNotice; // +0x8
    unsigned int _scene; // +0xc
    NSMutableArray * _taskArray; // +0x10
    long long _showCardIndex; // +0x18
    id <MMFinderLiveNewAnchorTaskViewModelDelegate> _delegate; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    NSMutableDictionary * _targetProgressDic; // +0x30
    NSMutableArray * _needGuideTargetTypes; // +0x38
}
- (id)initWithTaskId:(id)arg1 scene:(unsigned int)arg2;
- (void)dealloc;
- (void)getTasks:(id /* block */)arg1;
- (unsigned int)getTaskStatus:(id)arg1;
- (unsigned int)getTargetType:(id)arg1;
- (id)getTargetTitle:(id)arg1 needDot:(BOOL)arg2;
- (id)getTargetWording:(id)arg1 withScene:(unsigned int)arg2;
- (unsigned int)getTargetStatus:(id)arg1;
- (unsigned int)getTargetStatusOnStart:(id)arg1;
- (unsigned int)getTargetStatusOnLive:(id)arg1;
- (unsigned long long)getTargetProgress:(id)arg1;
- (BOOL)shouldShowBonusBtn:(id)arg1;
- (id)getBonusStringWithTask:(id)arg1;
- (id)getBonusStringWithStage:(id)arg1;
- (id)getRewardStr:(id)arg1;
- (void)processTaskArray;
- (id)getTargetKey:(id)arg1;
- (id)highLightBrandAttrString:(id)arg1;
- (id)getAnchorTaskDesc:(id)arg1;
- (void)onNewAnchorQuestUpdated:(id)arg1 taskId:(id)arg2;
- (long long)showCardIndex;
- (id)liveTask;
- (id)targetProgressDic;
- (id)taskArray;
- (void)setTaskArray:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (void)setShowCardIndex:(long long)arg1;
- (BOOL)shouldShowCompletePageAnchorNotice;
- (void)setShouldShowCompletePageAnchorNotice:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setTargetProgressDic:(id)arg1;
- (id)needGuideTargetTypes;
- (void)setNeedGuideTargetTypes:(id)arg1;
- (void).cxx_destruct;
@end
