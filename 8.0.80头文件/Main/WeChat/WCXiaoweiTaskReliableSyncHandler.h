@interface WCXiaoweiTaskReliableSyncHandler : CommonReliableSyncHandler
- (BOOL)handleReliableSyncCmds:(id)arg1 commBizIdBit:(unsigned int)arg2;
- (id)parseTaskInfoFromCmdBuf:(id)arg1;
- (id)convertToTaskInfo:(id)arg1;
@end
