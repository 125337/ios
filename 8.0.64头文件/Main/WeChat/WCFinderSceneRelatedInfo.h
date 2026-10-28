@interface WCFinderSceneRelatedInfo : NSObject <WCTTableCoding>
{
    NSString * _tid; // +0x8
    unsigned long long _scene; // +0x10
    FinderEnhanceTypeList * _enhanceConfiguration; // +0x18
    FinderSeeLaterInfo * _seeLaterInfo; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_scene;
+ (const void *)enhanceConfiguration;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_enhanceConfiguration;
+ (const void *)seeLaterInfo;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_seeLaterInfo;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (id)sceneRelatedInfoFromDataItem:(id)arg1 commentScene:(int)arg2;
- (void)mergeIntoDataItem:(id)arg1;
- (id)description;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)enhanceConfiguration;
- (void)setEnhanceConfiguration:(id)arg1;
- (id)seeLaterInfo;
- (void)setSeeLaterInfo:(id)arg1;
- (void).cxx_destruct;
@end
