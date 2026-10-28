@interface CgiReportDataModel : MMObject <PBCoding>
{
    unsigned int _businessId; // +0x8
    unsigned int _reqCount; // +0xc
    NSMutableArray * _itemDataList; // +0x10
    NSString * _collectKey; // +0x18
    unsigned long long _collectStartTimeMs; // +0x20
    NSString * _dataUUID; // +0x28
    unsigned long long _firstReqTimeMs; // +0x30
    unsigned long long _lastReqTimeMs; // +0x38
}
+ (void)PBArrayAdd_businessId;
+ (void)PBArrayAdd_itemDataList;
+ (void)PBArrayAdd_collectKey;
+ (void)PBArrayAdd_collectStartTimeMs;
+ (void)PBArrayAdd_dataUUID;
+ (void)PBArrayAdd_firstReqTimeMs;
+ (void)PBArrayAdd_lastReqTimeMs;
+ (void)PBArrayAdd_reqCount;
+ (void)initialize;
+ (id)createItemData:(unsigned int)arg1 andItemType:(unsigned int)arg2 andItemId:(id)arg3 andCurrPage:(id)arg4 andSourcePage:(id)arg5 andRefPage:(id)arg6 andSdkSessionId:(id)arg7 andEventId:(id)arg8 andCliTimeMs:(unsigned long long)arg9 andData:(id)arg10;
+ (id)simpleLogForData:(id)arg1;
- (id)getPBPropertyTable;
- (id)initWithBusinessId:(unsigned int)arg1;
- (id)simpleLog;
- (id)dataUUID;
- (void)noteStartReq;
- (void)noteReqFail;
- (long long)compare:(id)arg1;
- (BOOL)canSend:(unsigned long long)arg1;
- (unsigned long long)calcPenaltyTimeMs;
- (unsigned int)businessId;
- (void)setBusinessId:(unsigned int)arg1;
- (id)itemDataList;
- (void)setItemDataList:(id)arg1;
- (id)collectKey;
- (void)setCollectKey:(id)arg1;
- (unsigned long long)collectStartTimeMs;
- (void)setCollectStartTimeMs:(unsigned long long)arg1;
- (void)setDataUUID:(id)arg1;
- (unsigned long long)firstReqTimeMs;
- (void)setFirstReqTimeMs:(unsigned long long)arg1;
- (unsigned long long)lastReqTimeMs;
- (void)setLastReqTimeMs:(unsigned long long)arg1;
- (unsigned int)reqCount;
- (void)setReqCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
