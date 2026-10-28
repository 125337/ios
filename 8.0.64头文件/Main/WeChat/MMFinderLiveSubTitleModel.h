@interface MMFinderLiveSubTitleModel : NSObject <MMFinderLiveSubTitleSynchronizeExt>
{
    id /* block */ _updateBlock; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    NSString * _currChnSession; // +0x18
    NSString * _currEngSession; // +0x20
    long long _lastChnIndex; // +0x28
    long long _lastEngIndex; // +0x30
}
- (id)init;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onSynchronizedFinderLiveSubTitle:(id)arg1 taskId:(id)arg2;
- (id /* block */)updateBlock;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)currChnSession;
- (void)setCurrChnSession:(id)arg1;
- (id)currEngSession;
- (void)setCurrEngSession:(id)arg1;
- (long long)lastChnIndex;
- (void)setLastChnIndex:(long long)arg1;
- (long long)lastEngIndex;
- (void)setLastEngIndex:(long long)arg1;
- (void).cxx_destruct;
@end
