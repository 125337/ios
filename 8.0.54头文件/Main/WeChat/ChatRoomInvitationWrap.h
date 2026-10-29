@interface ChatRoomInvitationWrap : NSObject <WCTTableCoding>
{
    BOOL _hasApproved; // +0x8
    unsigned int _createTime; // +0xc
    long long _svrId; // +0x10
    NSString * _inviterUsrName; // +0x18
    NSString * _memberList; // +0x20
    NSString * _allMsgIdList; // +0x28
    ChatRoomInvitationDetail * _invitationDetail; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)svrId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_svrId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)hasApproved;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_hasApproved;
+ (const void *)inviterUsrName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_inviterUsrName;
+ (const void *)memberList;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_memberList;
+ (const void *)allMsgIdList;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_allMsgIdList;
+ (const void *)invitationDetail;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_invitationDetail;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
- (id)init;
- (void)setInvitationDetail:(id)arg1;
- (id)description;
- (long long)svrId;
- (void)setSvrId:(long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (BOOL)hasApproved;
- (void)setHasApproved:(BOOL)arg1;
- (id)inviterUsrName;
- (void)setInviterUsrName:(id)arg1;
- (id)memberList;
- (void)setMemberList:(id)arg1;
- (id)allMsgIdList;
- (void)setAllMsgIdList:(id)arg1;
- (id)invitationDetail;
- (void).cxx_destruct;
@end

