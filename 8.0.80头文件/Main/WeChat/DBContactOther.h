@interface DBContactOther : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _deleteFlag; // +0x8
    unsigned int _friendScene; // +0xc
    unsigned int _addCreateTime; // +0x10
    NSString * _antispamTicket; // +0x18
    NSString * _sourceExtInfo; // +0x20
    NSString * _groupMemberTicket; // +0x28
    unsigned long long _localBitFlag; // +0x30
    NSString * _contactVersionJson; // +0x38
}
+ (void)PBArrayAdd_deleteFlag;
+ (void)PBArrayAdd_friendScene;
+ (void)PBArrayAdd_antispamTicket;
+ (void)PBArrayAdd_sourceExtInfo;
+ (void)PBArrayAdd_groupMemberTicket;
+ (void)PBArrayAdd_localBitFlag;
+ (void)PBArrayAdd_addCreateTime;
+ (void)PBArrayAdd_contactVersionJson;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (unsigned int)deleteFlag;
- (void)setDeleteFlag:(unsigned int)arg1;
- (unsigned int)friendScene;
- (void)setFriendScene:(unsigned int)arg1;
- (id)antispamTicket;
- (void)setAntispamTicket:(id)arg1;
- (id)sourceExtInfo;
- (void)setSourceExtInfo:(id)arg1;
- (id)groupMemberTicket;
- (void)setGroupMemberTicket:(id)arg1;
- (unsigned long long)localBitFlag;
- (void)setLocalBitFlag:(unsigned long long)arg1;
- (unsigned int)addCreateTime;
- (void)setAddCreateTime:(unsigned int)arg1;
- (id)contactVersionJson;
- (void)setContactVersionJson:(id)arg1;
- (void).cxx_destruct;
@end
