@interface MMLiveMakeupDataItem : NSObject
{
    BOOL _applyBlurring; // +0x8
    NSString * _makeupId; // +0x10
    NSString * _title; // +0x18
    NSString * _coverColorString; // +0x20
    NSString * _effectMaterialsFolderPath; // +0x28
    NSArray * _makeupDetailItems; // +0x30
    MMLiveBeautyBadgeItem * _badge; // +0x38
    MMLiveBeautyBadgeCollection * _itemBadges; // +0x40
    unsigned long long _order; // +0x48
}
+ (id)defaultNoopItem;
- (id)init;
- (BOOL)effective;
- (id)makeupValueSaveKey;
- (id)filterValueSaveKey;
- (void)setDetailValueDefault;
- (id)makeupId;
- (void)setMakeupId:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)applyBlurring;
- (void)setApplyBlurring:(BOOL)arg1;
- (id)coverColorString;
- (void)setCoverColorString:(id)arg1;
- (id)effectMaterialsFolderPath;
- (void)setEffectMaterialsFolderPath:(id)arg1;
- (id)makeupDetailItems;
- (void)setMakeupDetailItems:(id)arg1;
- (id)badge;
- (void)setBadge:(id)arg1;
- (id)itemBadges;
- (void)setItemBadges:(id)arg1;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
