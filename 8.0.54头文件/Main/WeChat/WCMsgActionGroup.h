@interface WCMsgActionGroup : NSObject <PBCoding>
{
    unsigned int _objectCreateTime; // +0x8
    unsigned int _delStatus; // +0xc
    unsigned long long _id; // +0x10
    unsigned long long _parentId; // +0x18
    SnsAction * _currentAction; // +0x20
    SnsAction * _referAction; // +0x28
    NSString * _clientId; // +0x30
}
+ (void)PBArrayAdd_id;
+ (void)PBArrayAdd_parentId;
+ (void)PBArrayAdd_currentAction;
+ (void)PBArrayAdd_referAction;
+ (void)PBArrayAdd_clientId;
+ (void)PBArrayAdd_objectCreateTime;
+ (void)PBArrayAdd_delStatus;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)id;
- (void)setId:(unsigned long long)arg1;
- (unsigned long long)parentId;
- (void)setParentId:(unsigned long long)arg1;
- (id)currentAction;
- (void)setCurrentAction:(id)arg1;
- (id)referAction;
- (void)setReferAction:(id)arg1;
- (id)clientId;
- (void)setClientId:(id)arg1;
- (unsigned int)objectCreateTime;
- (void)setObjectCreateTime:(unsigned int)arg1;
- (unsigned int)delStatus;
- (void)setDelStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end

