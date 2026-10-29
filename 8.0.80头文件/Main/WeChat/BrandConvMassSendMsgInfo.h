@interface BrandConvMassSendMsgInfo : NSObject <WCTTableCoding>
{
    BOOL _isMassSend; // +0x8
    unsigned int _localId; // +0xc
    unsigned int _createTime; // +0x10
    unsigned int _sceneType; // +0x14
    unsigned int _massSendType; // +0x18
    long long _serverId; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_localId;
+ (const void *)serverId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_serverId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)isMassSend;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_isMassSend;
+ (const void *)sceneType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_sceneType;
+ (const void *)massSendType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_massSendType;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_index_10:(void *)arg1;
- (id)initWithMsg:(id)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (long long)serverId;
- (void)setServerId:(long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (BOOL)isMassSend;
- (void)setIsMassSend:(BOOL)arg1;
- (unsigned int)sceneType;
- (void)setSceneType:(unsigned int)arg1;
- (unsigned int)massSendType;
- (void)setMassSendType:(unsigned int)arg1;
@end
