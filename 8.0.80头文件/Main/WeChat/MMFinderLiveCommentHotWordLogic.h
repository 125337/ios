@interface MMFinderLiveCommentHotWordLogic : NSObject <WCFinderLiveExt>
{
    id <MMFinderLiveCommentHotWordLogicDelegate> _delegate; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    UIView * _hotWordContainerView; // +0x18
    MMFinderLiveCommentHotWordsView * _hotWordView; // +0x20
    FinderLiveAppMsg * _curHotWordAppMsg; // +0x28
    long long _curHotWordPostTime; // +0x30
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)updateContainerView:(id)arg1;
- (void)showHotWord:(id)arg1 prevCount:(long long)arg2 currentCount:(long long)arg3;
- (void)hideHotWords;
- (id)finderLiveTask;
- (void)onGetFinderLiveHotWordAppMsgWithTaskId:(id)arg1 hotwordAppMsg:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)hotWordContainerView;
- (void)setHotWordContainerView:(id)arg1;
- (id)hotWordView;
- (void)setHotWordView:(id)arg1;
- (id)curHotWordAppMsg;
- (void)setCurHotWordAppMsg:(id)arg1;
- (long long)curHotWordPostTime;
- (void)setCurHotWordPostTime:(long long)arg1;
- (void).cxx_destruct;
@end
