@interface WCFinderPoiBasicInfo : NSObject <PBCoding, WCTTableCoding>
{
    int _scene; // +0x8
    int _fromScene; // +0xc
    NSString * _poiId; // +0x10
    unsigned long long _cacheTime; // +0x18
    NSString * _poiName; // +0x20
    WCFinderPoiLineComponetArray * _lineComponentList; // +0x28
    NSString * _poiAddress; // +0x30
    FinderPoiBasicInfoResponse_RecommendDishesComponent * _recommendDishesComponent; // +0x38
    NSString * _groupBuyTitle; // +0x40
    NSArray * _groupBuyArray; // +0x48
    NSString * _groupFooterTitle; // +0x50
}
+ (void)PBArrayAdd_poiId;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_fromScene;
+ (void)PBArrayAdd_poiName;
+ (void)PBArrayAdd_lineComponentList;
+ (void)PBArrayAdd_poiAddress;
+ (void)PBArrayAdd_recommendDishesComponent;
+ (void)PBArrayAdd_groupBuyTitle;
+ (void)PBArrayAdd_groupBuyArray;
+ (void)PBArrayAdd_groupFooterTitle;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)poiId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_poiId;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_scene;
+ (const void *)fromScene;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_fromScene;
+ (const void *)poiName;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_poiName;
+ (const void *)lineComponentList;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_lineComponentList;
+ (const void *)poiAddress;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_poiAddress;
+ (const void *)recommendDishesComponent;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_recommendDishesComponent;
+ (const void *)groupBuyTitle;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_groupBuyTitle;
+ (const void *)groupBuyArray;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_groupBuyArray;
+ (const void *)groupFooterTitle;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_groupFooterTitle;
+ (void)__wcdb_table_constraint_11:(void *)arg1;
+ (void)__wcdb_table_constraint_12:(void *)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)description;
- (id)toPBPoiBasicInfo;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (id)poiName;
- (void)setPoiName:(id)arg1;
- (id)lineComponentList;
- (void)setLineComponentList:(id)arg1;
- (id)poiAddress;
- (void)setPoiAddress:(id)arg1;
- (id)recommendDishesComponent;
- (void)setRecommendDishesComponent:(id)arg1;
- (id)groupBuyTitle;
- (void)setGroupBuyTitle:(id)arg1;
- (id)groupBuyArray;
- (void)setGroupBuyArray:(id)arg1;
- (id)groupFooterTitle;
- (void)setGroupFooterTitle:(id)arg1;
- (void).cxx_destruct;
@end

