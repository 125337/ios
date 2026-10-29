@interface WCFinderDataItemRecommendConfiguration : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL _favRelateListEnable; // +0x8
    BOOL _favRelateListEnableOnClick; // +0x9
    BOOL _likeRelateListEnable; // +0xa
    unsigned long long _maxUnreadCount; // +0x10
    RecommendConfiguration * _config; // +0x18
}
+ (void)PBArrayAdd_maxUnreadCount;
+ (void)PBArrayAdd_config;
+ (void)PBArrayAdd_favRelateListEnable;
+ (void)PBArrayAdd_favRelateListEnableOnClick;
+ (void)PBArrayAdd_likeRelateListEnable;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (id)configurationWithConfig:(id)arg1 isFeedContainVideo:(BOOL)arg2;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)description;
- (unsigned long long)maxUnreadCount;
- (void)setMaxUnreadCount:(unsigned long long)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)favRelateListEnable;
- (void)setFavRelateListEnable:(BOOL)arg1;
- (BOOL)favRelateListEnableOnClick;
- (void)setFavRelateListEnableOnClick:(BOOL)arg1;
- (BOOL)likeRelateListEnable;
- (void)setLikeRelateListEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
