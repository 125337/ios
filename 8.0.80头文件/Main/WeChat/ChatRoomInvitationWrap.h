@interface ChatRoomInvitationWrap : NSObject <WCTTableCoding>
{
    BOOL _hasApproved; // +0x8
    unsigned int _createTime; // +0xc
    unsigned int _joinScene; // +0x10
    unsigned int _qrCodeExpiredTime; // +0x14
    unsigned int _qrCodeDisabled; // +0x18
    long long _svrId; // +0x20
    NSString * _inviterUsrName; // +0x28
    NSString * _memberList; // +0x30
    NSString * _allMsgIdList; // +0x38
    ChatRoomInvitationDetail * _invitationDetail; // +0x40
    NSString * _qrCode; // +0x48
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
+ (const void *)joinScene;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_joinScene;
+ (const void *)qrCode;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_qrCode;
+ (const void *)qrCodeExpiredTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_qrCodeExpiredTime;
+ (const void *)qrCodeDisabled;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_qrCodeDisabled;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_index_12:(void *)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
+ (void)__wcdb_index_14:(void *)arg1;
+ (void)__wcdb_index_15:(void *)arg1;
+ (void)__wcdb_column_constraint_16:(void *)arg1;
+ (void)__wcdb_column_constraint_17:(void *)arg1;
- (id)init;
- (void)setInvitationDetail:(id)arg1;
- (id)description;
- (BOOL)isQRCodeEffective;
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
- (unsigned int)joinScene;
- (void)setJoinScene:(unsigned int)arg1;
- (id)qrCode;
- (void)setQrCode:(id)arg1;
- (unsigned int)qrCodeExpiredTime;
- (void)setQrCodeExpiredTime:(unsigned int)arg1;
- (unsigned int)qrCodeDisabled;
- (void)setQrCodeDisabled:(unsigned int)arg1;
- (void).cxx_destruct;
@end
