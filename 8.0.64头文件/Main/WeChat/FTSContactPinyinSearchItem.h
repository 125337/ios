@interface FTSContactPinyinSearchItem : NSObject <WCTTableCoding>
{
    NSString * _pinyinContent; // +0x8
    NSString * _reservedText; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)pinyinContent;
+ (const void *)__wcdb_synthesize_95:(void *)arg1;
+ (id)swift_pinyinContent;
+ (const void *)reservedText;
+ (const void *)__wcdb_synthesize_96:(void *)arg1;
+ (id)swift_reservedText;
+ (void)__wcdb_virtual_table_97:(void *)arg1;
+ (void)__wcdb_virtual_table_98:(void *)arg1;
- (id)pinyinContent;
- (void)setPinyinContent:(id)arg1;
- (id)reservedText;
- (void)setReservedText:(id)arg1;
- (void).cxx_destruct;
@end
