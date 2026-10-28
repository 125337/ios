@interface MMLiveBeautySuite : NSObject
{
    BOOL _applyBlurring; // +0x8
    NSString * _suiteId; // +0x10
    NSString * _displayName; // +0x18
    NSString * _colorHexString; // +0x20
    MMLiveBeautyBadgeItem * _badge; // +0x28
    NSArray * _itemGroups; // +0x30
    NSArray * _items; // +0x38
    NSArray * _exclusiveGroups; // +0x40
    MMLiveBeautyBadgeCollection * _itemBadges; // +0x48
    NSString * _resourcesPath; // +0x50
    unsigned long long _order; // +0x58
}
+ (id)suiteInJsonDictionary:(id)arg1 fromLocalDirectory:(id)arg2 badges:(id)arg3 isLowSpecDevice:(BOOL)arg4;
+ (id)equivalentSuiteIdForLegacyType:(unsigned long long)arg1;
- (BOOL)effective;
- (id)legacySaveKey;
- (id)suiteId;
- (void)setSuiteId:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)colorHexString;
- (void)setColorHexString:(id)arg1;
- (BOOL)applyBlurring;
- (void)setApplyBlurring:(BOOL)arg1;
- (id)badge;
- (void)setBadge:(id)arg1;
- (id)itemGroups;
- (void)setItemGroups:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)exclusiveGroups;
- (void)setExclusiveGroups:(id)arg1;
- (id)itemBadges;
- (void)setItemBadges:(id)arg1;
- (id)resourcesPath;
- (void)setResourcesPath:(id)arg1;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
