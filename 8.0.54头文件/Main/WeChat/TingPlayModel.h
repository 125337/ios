@interface TingPlayModel : NSObject
{
    id <TingPlayTaskService> _taskService; // +0x8
    unsigned long long _index; // +0x10
    TingFlowPlayerConfiguration * _configuration; // +0x18
    TingListSourceContext * _listContext; // +0x20
    TingItem * _initialTingItem; // +0x28
    MMListenCategoryItem * _initialCategoryItem; // +0x30
}
+ (id)modelWithTingItem:(id)arg1 scene:(int)arg2;
+ (id)modelWithCategoryItem:(id)arg1 presetItems:(id)arg2 index:(unsigned long long)arg3 scene:(int)arg4;
+ (id)modelWithCategoryItem:(id)arg1 listContext:(id)arg2 index:(unsigned long long)arg3 scene:(int)arg4;
+ (id)modelWithListenIds:(id)arg1 index:(unsigned long long)arg2 scene:(int)arg3;
+ (BOOL)enableDisablePresetItemsFeature;
+ (id)modelWithTaskSnapshot:(id)arg1 scene:(int)arg2;
+ (id)modelWithListSource:(id)arg1 index:(unsigned long long)arg2 scene:(int)arg3;
- (id)taskService;
- (void)setTaskService:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (id)listContext;
- (void)setListContext:(id)arg1;
- (id)initialTingItem;
- (void)setInitialTingItem:(id)arg1;
- (id)initialCategoryItem;
- (void)setInitialCategoryItem:(id)arg1;
- (void).cxx_destruct;
@end

