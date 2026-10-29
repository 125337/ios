@interface WCMicroMerchantInteraction : NSObject <WCTTableCoding>
{
    BOOL _isFoldInteraction; // +0x8
    NSString * _tid; // +0x10
    NSString * _username; // +0x18
    unsigned long long _interactionTime; // +0x20
    unsigned long long _interactionType; // +0x28
    unsigned long long _scene; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_109:(void *)arg1;
+ (id)swift_tid;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_110:(void *)arg1;
+ (id)swift_username;
+ (const void *)interactionTime;
+ (const void *)__wcdb_synthesize_111:(void *)arg1;
+ (id)swift_interactionTime;
+ (const void *)isFoldInteraction;
+ (const void *)__wcdb_synthesize_112:(void *)arg1;
+ (id)swift_isFoldInteraction;
+ (const void *)interactionType;
+ (const void *)__wcdb_synthesize_113:(void *)arg1;
+ (id)swift_interactionType;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_114:(void *)arg1;
+ (id)swift_scene;
+ (void)__wcdb_column_constraint_115:(void *)arg1;
+ (void)__wcdb_column_constraint_116:(void *)arg1;
+ (void)__wcdb_column_constraint_117:(void *)arg1;
+ (void)__wcdb_column_constraint_118:(void *)arg1;
+ (void)__wcdb_column_constraint_119:(void *)arg1;
+ (void)__wcdb_index_120:(void *)arg1;
+ (void)__wcdb_index_121:(void *)arg1;
+ (void)__wcdb_index_122:(void *)arg1;
+ (void)__wcdb_index_123:(void *)arg1;
+ (void)__wcdb_index_124:(void *)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)interactionTime;
- (void)setInteractionTime:(unsigned long long)arg1;
- (BOOL)isFoldInteraction;
- (void)setIsFoldInteraction:(BOOL)arg1;
- (unsigned long long)interactionType;
- (void)setInteractionType:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

