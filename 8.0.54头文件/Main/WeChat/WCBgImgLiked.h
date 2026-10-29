@interface WCBgImgLiked : NSObject <WCTTableCoding>
{
    NSString * _username; // +0x8
    NSString * _bgimg; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_70:(void *)arg1;
+ (id)swift_username;
+ (const void *)bgimg;
+ (const void *)__wcdb_synthesize_71:(void *)arg1;
+ (id)swift_bgimg;
+ (void)__wcdb_column_constraint_72:(void *)arg1;
+ (void)__wcdb_column_constraint_73:(void *)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)bgimg;
- (void)setBgimg:(id)arg1;
- (void).cxx_destruct;
@end

