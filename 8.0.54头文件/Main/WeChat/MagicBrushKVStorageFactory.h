@interface MagicBrushKVStorageFactory : MMUserService <MMServiceProtocol>
{
    NSMapTable * _mMBKVMap; // +0x8
    NSMapTable * _mPublicServiceOtherBizStorageMap; // +0x10
    NSString * _uin; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)getOrCreateBizStorage:(id)arg1 otherBizName:(id)arg2;
- (id)privateGetOrCreateBizStorage:(id)arg1 uin:(id)arg2;
- (long long)getBizStorageSize:(id)arg1;
- (long long)getBizStorageQuota:(id)arg1;
- (void)clearBizStorage;
- (void)addPublicServiceOtherBizStorage:(id)arg1 bizNameList:(id)arg2;
- (id)getPublicServiceOtherBizStorageList:(id)arg1;
- (id)mMBKVMap;
- (void)setMMBKVMap:(id)arg1;
- (id)mPublicServiceOtherBizStorageMap;
- (void)setMPublicServiceOtherBizStorageMap:(id)arg1;
- (id)uin;
- (void)setUin:(id)arg1;
- (void).cxx_destruct;
@end

