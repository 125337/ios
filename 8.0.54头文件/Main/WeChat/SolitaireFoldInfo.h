@interface SolitaireFoldInfo : NSObject
{
    unsigned int _localId; // +0x8
    unsigned int _createTime; // +0xc
    unsigned int _showCount; // +0x10
    unsigned int _hiddenCount; // +0x14
    NSString * _nsChatName; // +0x18
    NSString * _nsFrontContent; // +0x20
    NSString * _nsBehindContent; // +0x28
    long long _firstSvrId; // +0x30
    NSString * _nsIdentifier; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)nsChatName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_nsChatName;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_localId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)nsFrontContent;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_nsFrontContent;
+ (const void *)nsBehindContent;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_nsBehindContent;
+ (const void *)showCount;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_showCount;
+ (const void *)hiddenCount;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_hiddenCount;
+ (const void *)firstSvrId;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_firstSvrId;
+ (const void *)nsIdentifier;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_nsIdentifier;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
+ (void)__wcdb_table_constraint_11:(void *)arg1;
- (id)getFoldContent;
- (id)getPureText;
- (id)description;
- (id)nsChatName;
- (void)setNsChatName:(id)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)nsFrontContent;
- (void)setNsFrontContent:(id)arg1;
- (id)nsBehindContent;
- (void)setNsBehindContent:(id)arg1;
- (unsigned int)showCount;
- (void)setShowCount:(unsigned int)arg1;
- (unsigned int)hiddenCount;
- (void)setHiddenCount:(unsigned int)arg1;
- (long long)firstSvrId;
- (void)setFirstSvrId:(long long)arg1;
- (id)nsIdentifier;
- (void)setNsIdentifier:(id)arg1;
- (void).cxx_destruct;
@end

