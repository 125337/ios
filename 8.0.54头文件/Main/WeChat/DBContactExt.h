@interface DBContactExt : NSObject <WCTTableCoding>
{
    unsigned int _type; // +0x8
    unsigned int _chatStatus; // +0xc
    unsigned int _ConIntRes2; // +0x10
    unsigned int _ConIntRes3; // +0x14
    NSString * _userName; // +0x18
    NSString * _remark; // +0x20
    NSString * _remarkShortPinYin; // +0x28
    NSString * _remarkFullPinYin; // +0x30
    NSString * _QQMBlog; // +0x38
    NSString * _SMBlog; // +0x40
    NSString * _chatRoomMember; // +0x48
    NSString * _domainList; // +0x50
    NSString * _extent; // +0x58
    NSString * _ConStrRes3; // +0x60
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_userName;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_type;
+ (const void *)remark;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_remark;
+ (const void *)remarkShortPinYin;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_remarkShortPinYin;
+ (const void *)remarkFullPinYin;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_remarkFullPinYin;
+ (const void *)QQMBlog;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_QQMBlog;
+ (const void *)SMBlog;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_SMBlog;
+ (const void *)chatRoomMember;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_chatRoomMember;
+ (const void *)chatStatus;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_chatStatus;
+ (const void *)ConIntRes2;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_ConIntRes2;
+ (const void *)ConIntRes3;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (id)swift_ConIntRes3;
+ (const void *)domainList;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_domainList;
+ (const void *)extent;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_extent;
+ (const void *)ConStrRes3;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_ConStrRes3;
+ (void)__wcdb_column_constraint_34:(void *)arg1;
+ (void)__wcdb_column_constraint_35:(void *)arg1;
+ (void)__wcdb_column_constraint_36:(void *)arg1;
+ (void)__wcdb_column_constraint_37:(void *)arg1;
+ (void)__wcdb_column_constraint_38:(void *)arg1;
+ (void)__wcdb_column_constraint_39:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)remark;
- (void)setRemark:(id)arg1;
- (id)remarkShortPinYin;
- (void)setRemarkShortPinYin:(id)arg1;
- (id)remarkFullPinYin;
- (void)setRemarkFullPinYin:(id)arg1;
- (id)QQMBlog;
- (void)setQQMBlog:(id)arg1;
- (id)SMBlog;
- (void)setSMBlog:(id)arg1;
- (id)chatRoomMember;
- (void)setChatRoomMember:(id)arg1;
- (unsigned int)chatStatus;
- (void)setChatStatus:(unsigned int)arg1;
- (id)domainList;
- (void)setDomainList:(id)arg1;
- (id)extent;
- (void)setExtent:(id)arg1;
- (unsigned int)ConIntRes2;
- (void)setConIntRes2:(unsigned int)arg1;
- (unsigned int)ConIntRes3;
- (void)setConIntRes3:(unsigned int)arg1;
- (id)ConStrRes3;
- (void)setConStrRes3:(id)arg1;
- (void).cxx_destruct;
@end

