@interface MMLiveBeautyExclusiveGroup : MMLiveBeautyOption
{
    NSArray * _items; // +0x8
    MMLiveBeautyItem * _defaultItem; // +0x10
    MMLiveBeautyBadgeItem * _badge; // +0x18
    MMLiveBeautyBadgeCollection * _itemBadges; // +0x20
    MMLiveBeautyItem * _activeItem; // +0x28
}
+ (id)optionInJsonDictionary:(id)arg1 suiteId:(id)arg2 suiteResourcePath:(id)arg3 itemGroups:(id)arg4 badges:(id)arg5 capabilities:(id)arg6;
- (unsigned long long)type;
- (id)items;
- (void)setItems:(id)arg1;
- (id)defaultItem;
- (void)setDefaultItem:(id)arg1;
- (id)badge;
- (void)setBadge:(id)arg1;
- (id)itemBadges;
- (void)setItemBadges:(id)arg1;
- (id)activeItem;
- (void)setActiveItem:(id)arg1;
- (void).cxx_destruct;
@end
