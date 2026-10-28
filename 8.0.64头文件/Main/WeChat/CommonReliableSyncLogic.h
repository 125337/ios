@interface CommonReliableSyncLogic : MMObject
{
    BOOL _isSyncing; // +0x8
    NSMutableDictionary * _dicCommonReliableSync; // +0x10
    NSMutableDictionary * _dicSyncKeyInfo; // +0x18
    NSMutableOrderedSet * _queueSync; // +0x20
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x28
    CommonReliableSyncHelper * _syncHelper; // +0x30
}
- (id)init;
- (void)initData;
- (id)getRorkerQueueName;
- (void)doConfig;
- (void)syncWithActionNotifyData:(id)arg1 commBizIdBit:(unsigned int)arg2;
- (void)checkQueue;
- (void)handleCommonReliable:(id)arg1;
- (void)handleCommonReliableResponse:(id)arg1 syncAction:(id)arg2;
- (void)asyncHandleCommonReliableResponse:(id)arg1 syncAction:(id)arg2 handleResultSuccess:(BOOL)arg3;
- (void)asyncHandleCommonReliableResponseCore:(id)arg1 syncAction:(id)arg2 handleResultSuccess:(BOOL)arg3;
- (unsigned int)getCgiNumberWithCommBizIdBit:(unsigned int)arg1;
- (id)getCgiNumberNameWithCommBizIdBit:(unsigned int)arg1;
- (void)addAutoauthSyncActionWithCommBizIdBit:(unsigned int)arg1 syncScene:(unsigned int)arg2;
- (id)getMigrateSyncKeyBuffWithCommBizIdBit:(unsigned int)arg1;
- (id)syncKeyBuffWithcommBizIdBit:(unsigned int)arg1;
- (void)setSyncKey:(id)arg1 commBizIdBit:(unsigned int)arg2;
- (void)serviceHandleAuthOk;
- (void)serviceHandleInitContactOk;
- (id)dicCommonReliableSync;
- (void)setDicCommonReliableSync:(id)arg1;
- (id)dicSyncKeyInfo;
- (void)setDicSyncKeyInfo:(id)arg1;
- (BOOL)isSyncing;
- (void)setIsSyncing:(BOOL)arg1;
- (id)queueSync;
- (void)setQueueSync:(id)arg1;
- (id)workerQueue;
- (void)setWorkerQueue:(id)arg1;
- (id)syncHelper;
- (void)setSyncHelper:(id)arg1;
- (void).cxx_destruct;
@end
