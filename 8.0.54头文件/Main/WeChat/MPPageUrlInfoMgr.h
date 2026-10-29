@interface MPPageUrlInfoMgr : MMRootService <MMServiceProtocol>
{
    WCEliminatedSlotMMKV * _slotMMKV; // +0x8
    NSRecursiveLock * _dataLock; // +0x10
}
+ (id)parseMPPageIdentityWithMPPageFullUrl:(id)arg1;
+ (id)identityWithBizStr:(id)arg1 midStr:(id)arg2 indexStr:(id)arg3;
+ (id)MPPageCommonIdentityWithUrl:(id)arg1;
+ (id)MPPageCommonIdentityWithUrl:(id)arg1 itemShowType:(unsigned int)arg2;
+ (id)MPPageCommonIdentityWithbizId:(id)arg1 msgId:(id)arg2 itemIdx:(id)arg3 itemShowType:(unsigned int)arg4;
- (id)init;
- (void)prepareSlotKv;
- (id)MPPageIdentityWithUrlAsDefault:(id)arg1;
- (id)MPPageIdentityWithUrlAndReturnNilIfNotHave:(id)arg1;
- (void)updateUrlMappingWithOriginalUrl:(id)arg1 fullUrl:(id)arg2;
- (void)updateUrlMappingWithOriginalUrl:(id)arg1 bizUin:(unsigned int)arg2 msgId:(unsigned int)arg3 itemIdx:(unsigned int)arg4;
- (id)slotMMKV;
- (void)setSlotMMKV:(id)arg1;
- (id)dataLock;
- (void)setDataLock:(id)arg1;
- (void).cxx_destruct;
@end

