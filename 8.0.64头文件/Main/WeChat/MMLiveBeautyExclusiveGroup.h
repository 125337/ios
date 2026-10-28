@interface MMLiveBeautyExclusiveGroup : NSObject
{
    NSString * _groupId; // +0x8
    MMLiveBeautyItem * _activeItem; // +0x10
    NSDictionary * _exclusiveItems; // +0x18
}
+ (id)exclusiveGroupInJsonDictionary:(id)arg1 suiteId:(id)arg2 suiteItems:(id)arg3;
- (id)items;
- (BOOL)containsItemWithId:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)activeItem;
- (void)setActiveItem:(id)arg1;
- (id)exclusiveItems;
- (void)setExclusiveItems:(id)arg1;
- (void).cxx_destruct;
@end
