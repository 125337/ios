@interface MMFinderLiveKTVConnectMicGuideLogic : NSObject
{
    id <MMLiveUniqueTaskId> _taskId; // +0x8
}
- (id)initWithTaskId:(id)arg1;
- (id)finderTaskId;
- (id)finderLiveTask;
- (id)queryAutoGuideExptInfo;
- (void)tryAutoGuideConnectMicIfNeeded;
- (void)autoShowRequestSongPanel;
- (void)autoShowConnectMicSignPanel;
- (void)autoFinishConnectMicSign;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
