@interface VerifyRecordSyncHandler : CommonReliableSyncHandler
- (void)clearObsoleteLocalHelloForRecord:(id)arg1;
- (BOOL)handleReliableSyncCmds:(id)arg1 commBizIdBit:(unsigned int)arg2;
@end
