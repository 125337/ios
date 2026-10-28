@interface WCFinderDramaInfo : NSObject <WCTTableCoding>
{
    BOOL _purchased; // +0x8
    NSString * _dramaIDKey; // +0x10
    FinderDramaInfo * _dramaInfo; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)dramaIDKey;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_dramaIDKey;
+ (const void *)dramaInfo;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_dramaInfo;
+ (const void *)purchased;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_purchased;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
+ (id)finderDramaFromDrama:(id)arg1 purchased:(BOOL)arg2;
- (id)description;
- (id)dramaIDKey;
- (void)setDramaIDKey:(id)arg1;
- (id)dramaInfo;
- (void)setDramaInfo:(id)arg1;
- (BOOL)purchased;
- (void)setPurchased:(BOOL)arg1;
- (void).cxx_destruct;
@end
