@interface WCFinderClubChatroomMapInfo : NSObject <PBCoding, WCTTableCoding, WCTColumnCoding>
{
    BOOL _isChatroomOwner; // +0x8
    unsigned int _queryInterval; // +0xc
    NSString * _chatroomId; // +0x10
    NSString * _finderUsername; // +0x18
    unsigned long long _permissionFlag; // +0x20
    unsigned long long _cacheTime; // +0x28
    ChatroomBindInfo * _accountBindInfo; // +0x30
    BindFinderClubInfo * _bindFinderClubInfo; // +0x38
    PrepareFinder * _finderPrepare; // +0x40
}
+ (void)PBArrayAdd_chatroomId;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_queryInterval;
+ (void)PBArrayAdd_permissionFlag;
+ (void)PBArrayAdd_accountBindInfo;
+ (void)PBArrayAdd_bindFinderClubInfo;
+ (void)PBArrayAdd_isChatroomOwner;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)chatroomId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_chatroomId;
+ (const void *)finderUsername;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_finderUsername;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)queryInterval;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_queryInterval;
+ (const void *)permissionFlag;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_permissionFlag;
+ (const void *)accountBindInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_accountBindInfo;
+ (const void *)bindFinderClubInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_bindFinderClubInfo;
+ (const void *)isChatroomOwner;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_isChatroomOwner;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
- (id)getPBPropertyTable;
- (id)initWithChatroomId:(id)arg1 finderUsername:(id)arg2 permissionFlag:(unsigned long long)arg3 queryInterval:(unsigned int)arg4 accountBindInfo:(id)arg5;
- (id)finderPrepare;
- (unsigned long long)nextCheckTime;
- (BOOL)shouldShowClubEntrance;
- (BOOL)hasClubContact;
- (id)chatroomId;
- (void)setChatroomId:(id)arg1;
- (BOOL)isChatroomOwner;
- (void)setIsChatroomOwner:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned long long)permissionFlag;
- (void)setPermissionFlag:(unsigned long long)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (unsigned int)queryInterval;
- (void)setQueryInterval:(unsigned int)arg1;
- (id)accountBindInfo;
- (void)setAccountBindInfo:(id)arg1;
- (id)bindFinderClubInfo;
- (void)setBindFinderClubInfo:(id)arg1;
- (void)setFinderPrepare:(id)arg1;
- (void).cxx_destruct;
@end
