@interface WebRecordInfoData : MMObject <WCTTableCoding>
{
    unsigned int _visittime; // +0x8
    NSString * _link; // +0x10
    NSString * _name; // +0x18
    NSString * _title; // +0x20
    NSString * _iconurl; // +0x28
    NSString * _imgurl; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)link;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_link;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_name;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_title;
+ (const void *)iconurl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_iconurl;
+ (const void *)imgurl;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_imgurl;
+ (const void *)visittime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_visittime;
+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
- (id)description;
- (id)link;
- (void)setLink:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconurl;
- (void)setIconurl:(id)arg1;
- (id)imgurl;
- (void)setImgurl:(id)arg1;
- (unsigned int)visittime;
- (void)setVisittime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
