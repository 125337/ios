@interface WCFinderPoiRecommendDishesInfo : NSObject <PBCoding, WCTTableCoding>
{
    int _commentScene; // +0x8
    NSString * _poiId; // +0x10
    unsigned long long _cacheTime; // +0x18
    NSString * _title; // +0x20
    WCFinderPoiRecommendDishesArray * _dishesArray; // +0x28
    WCFinderJumpInfo * _footerJumpInfo; // +0x30
}
+ (void)PBArrayAdd_poiId;
+ (void)PBArrayAdd_commentScene;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_dishesArray;
+ (void)PBArrayAdd_footerJumpInfo;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)poiId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_poiId;
+ (const void *)commentScene;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_commentScene;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_title;
+ (const void *)dishesArray;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_dishesArray;
+ (const void *)footerJumpInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_footerJumpInfo;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)description;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)dishesArray;
- (void)setDishesArray:(id)arg1;
- (id)footerJumpInfo;
- (void)setFooterJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
