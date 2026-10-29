@interface FavoritesCDNInfo : NSObject <WCTTableCoding>
{
    unsigned int IntRes1; // +0x8
    unsigned int IntRes2; // +0xc
    unsigned int _localItemId; // +0x10
    int _status; // +0x14
    int _isThumb; // +0x18
    int _dataType; // +0x1c
    NSString * StrRes1; // +0x20
    NSString * StrRes2; // +0x28
    NSString * _localDataID; // +0x30
    NSString * _cdnUrl; // +0x38
    unsigned long long _size; // +0x40
    NSString * _cdnKey; // +0x48
    NSString * _md5; // +0x50
    NSString * _head256Md5; // +0x58
    NSString * _streamId; // +0x60
    NSString * _dataFmt; // +0x68
    NSString * _clientMsgID; // +0x70
    NSString * _sourcePath; // +0x78
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localItemId;
+ (const void *)__wcdb_synthesize_49:(void *)arg1;
+ (id)swift_localItemId;
+ (const void *)localDataID;
+ (const void *)__wcdb_synthesize_50:(void *)arg1;
+ (id)swift_localDataID;
+ (const void *)cdnUrl;
+ (const void *)__wcdb_synthesize_51:(void *)arg1;
+ (id)swift_cdnUrl;
+ (const void *)size;
+ (const void *)__wcdb_synthesize_52:(void *)arg1;
+ (id)swift_size;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_53:(void *)arg1;
+ (id)swift_status;
+ (const void *)cdnKey;
+ (const void *)__wcdb_synthesize_54:(void *)arg1;
+ (id)swift_cdnKey;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_55:(void *)arg1;
+ (id)swift_md5;
+ (const void *)head256Md5;
+ (const void *)__wcdb_synthesize_56:(void *)arg1;
+ (id)swift_head256Md5;
+ (const void *)isThumb;
+ (const void *)__wcdb_synthesize_57:(void *)arg1;
+ (id)swift_isThumb;
+ (const void *)dataType;
+ (const void *)__wcdb_synthesize_58:(void *)arg1;
+ (id)swift_dataType;
+ (const void *)streamId;
+ (const void *)__wcdb_synthesize_59:(void *)arg1;
+ (id)swift_streamId;
+ (const void *)dataFmt;
+ (const void *)__wcdb_synthesize_60:(void *)arg1;
+ (id)swift_dataFmt;
+ (const void *)clientMsgID;
+ (const void *)__wcdb_synthesize_61:(void *)arg1;
+ (id)swift_clientMsgID;
+ (const void *)sourcePath;
+ (const void *)__wcdb_synthesize_62:(void *)arg1;
+ (id)swift_sourcePath;
+ (const void *)IntRes1;
+ (const void *)__wcdb_synthesize_63:(void *)arg1;
+ (id)swift_IntRes1;
+ (const void *)IntRes2;
+ (const void *)__wcdb_synthesize_64:(void *)arg1;
+ (id)swift_IntRes2;
+ (const void *)StrRes1;
+ (const void *)__wcdb_synthesize_65:(void *)arg1;
+ (id)swift_StrRes1;
+ (const void *)StrRes2;
+ (const void *)__wcdb_synthesize_66:(void *)arg1;
+ (id)swift_StrRes2;
+ (void)__wcdb_index_67:(void *)arg1;
+ (void)__wcdb_index_68:(void *)arg1;
+ (void)__wcdb_column_constraint_69:(void *)arg1;
+ (void)__wcdb_column_constraint_70:(void *)arg1;
+ (void)__wcdb_column_constraint_71:(void *)arg1;
+ (void)__wcdb_column_constraint_72:(void *)arg1;
+ (void)__wcdb_column_constraint_73:(void *)arg1;
+ (void)__wcdb_column_constraint_74:(void *)arg1;
+ (void)__wcdb_column_constraint_75:(void *)arg1;
- (unsigned int)IntRes1;
- (void)setIntRes1:(unsigned int)arg1;
- (unsigned int)IntRes2;
- (void)setIntRes2:(unsigned int)arg1;
- (id)StrRes1;
- (void)setStrRes1:(id)arg1;
- (id)StrRes2;
- (void)setStrRes2:(id)arg1;
- (unsigned int)localItemId;
- (void)setLocalItemId:(unsigned int)arg1;
- (id)localDataID;
- (void)setLocalDataID:(id)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (int)status;
- (void)setStatus:(int)arg1;
- (id)cdnKey;
- (void)setCdnKey:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)head256Md5;
- (void)setHead256Md5:(id)arg1;
- (int)isThumb;
- (void)setIsThumb:(int)arg1;
- (int)dataType;
- (void)setDataType:(int)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)dataFmt;
- (void)setDataFmt:(id)arg1;
- (id)clientMsgID;
- (void)setClientMsgID:(id)arg1;
- (id)sourcePath;
- (void)setSourcePath:(id)arg1;
- (void).cxx_destruct;
@end

