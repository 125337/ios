@interface CEmoticonIPSetInfo : NSObject <WCTTableCoding>
{
    NSString * setKey; // +0x8
    NSString * title; // +0x10
    NSString * desc; // +0x18
    NSString * iconUrl; // +0x20
    NSString * panelUrl; // +0x28
    NSMutableArray * _pageWarpList; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)setKey;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_setKey;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_title;
+ (const void *)desc;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_desc;
+ (const void *)iconUrl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_iconUrl;
+ (const void *)panelUrl;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_panelUrl;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
+ (void)additionalObjectRelationalMapping:(void *)arg1;
- (id)description;
- (id)init;
- (id)setKey;
- (void)setSetKey:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)panelUrl;
- (void)setPanelUrl:(id)arg1;
- (id)pageWarpList;
- (void)setPageWarpList:(id)arg1;
- (void).cxx_destruct;
@end
