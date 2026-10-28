@interface CommonReliableSyncHelper : NSObject
- (BOOL)checkIsNeedRespContinue:(id)arg1;
- (BOOL)checkNeedAutoauthSyncActionWithCommBizIdBit:(id)arg1;
- (id)getSelectorWithSyncAction:(id)arg1;
- (void)replaceSelectorInSyncAction:(id)arg1 arrNewSelector:(id)arg2;
- (id)syncKeyBuffInStorageWithcommBizIdBit:(unsigned int)arg1;
- (void)setSyncKey:(id)arg1 commBizIdBit:(unsigned int)arg2 oSyncKeyBuff:(id)arg3;
- (id)mergeBufferInfo:(id)arg1 fileBufferInfo:(id)arg2;
- (id)getSyncBuffFilePathWithCommBizIdBit:(unsigned int)arg1;
- (id)getMMKVIdWithCommBizIdBit:(unsigned int)arg1;
@end
