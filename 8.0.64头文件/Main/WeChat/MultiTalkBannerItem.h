@interface MultiTalkBannerItem : MMObject <WCTTableCoding>
{
    unsigned int routeid; // +0x8
    unsigned int createtime; // +0xc
    unsigned int multiTalkStatus; // +0x10
    unsigned int bannerSDKMode; // +0x14
    NSString * wxGroupId; // +0x18
    NSString * wxMultiTalkGroupId; // +0x20
    unsigned long long roomid; // +0x28
    unsigned long long roomkey; // +0x30
    NSString * wxMultiTalkUserList; // +0x38
    NSString * wxMultiTalkInviteNick; // +0x40
    unsigned long long bannerItemSeq; // +0x48
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)wxGroupId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_wxGroupId;
+ (const void *)wxMultiTalkGroupId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_wxMultiTalkGroupId;
+ (const void *)roomid;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_roomid;
+ (const void *)roomkey;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_roomkey;
+ (const void *)routeid;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_routeid;
+ (const void *)createtime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_createtime;
+ (const void *)wxMultiTalkUserList;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_wxMultiTalkUserList;
+ (const void *)wxMultiTalkInviteNick;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_wxMultiTalkInviteNick;
+ (const void *)multiTalkStatus;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_multiTalkStatus;
+ (const void *)bannerItemSeq;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_bannerItemSeq;
+ (const void *)bannerSDKMode;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_bannerSDKMode;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
- (BOOL)isBannerItemValid;
- (id)description;
- (id)wxGroupId;
- (void)setWxGroupId:(id)arg1;
- (id)wxMultiTalkGroupId;
- (void)setWxMultiTalkGroupId:(id)arg1;
- (unsigned long long)roomid;
- (void)setRoomid:(unsigned long long)arg1;
- (unsigned long long)roomkey;
- (void)setRoomkey:(unsigned long long)arg1;
- (unsigned int)routeid;
- (void)setRouteid:(unsigned int)arg1;
- (unsigned int)createtime;
- (void)setCreatetime:(unsigned int)arg1;
- (id)wxMultiTalkUserList;
- (void)setWxMultiTalkUserList:(id)arg1;
- (id)wxMultiTalkInviteNick;
- (void)setWxMultiTalkInviteNick:(id)arg1;
- (unsigned int)multiTalkStatus;
- (void)setMultiTalkStatus:(unsigned int)arg1;
- (unsigned long long)bannerItemSeq;
- (void)setBannerItemSeq:(unsigned long long)arg1;
- (unsigned int)bannerSDKMode;
- (void)setBannerSDKMode:(unsigned int)arg1;
- (void).cxx_destruct;
@end
