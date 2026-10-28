@interface WCFinderCategoryInfo : NSObject <WCTTableCoding, PBCoding>
{
    NSString * _categoryName; // +0x8
}
+ (void)PBArrayAdd_categoryName;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)categoryName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_categoryName;
+ (id)finderCategoryInfo:(id)arg1;
- (id)getPBPropertyTable;
- (id)genCategoryInfo;
- (id)categoryName;
- (void)setCategoryName:(id)arg1;
- (void).cxx_destruct;
@end
