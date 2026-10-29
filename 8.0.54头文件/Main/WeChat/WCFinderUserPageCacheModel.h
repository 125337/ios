@interface WCFinderUserPageCacheModel : NSObject <WCTTableCoding>
{
    NSString * _finderUsername; // +0x8
    WCFinderFeedInfoSubTidArray * _firstPageTidArray; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)finderUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_finderUsername;
+ (const void *)firstPageTidArray;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_firstPageTidArray;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)firstPageTidArray;
- (void)setFirstPageTidArray:(id)arg1;
- (void).cxx_destruct;
@end

