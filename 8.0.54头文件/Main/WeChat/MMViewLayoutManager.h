@interface MMViewLayoutManager : NSObject
{
    NSMutableDictionary * _viewToItemMap; // +0x8
    NSMutableDictionary * _typeToItemArrayMap; // +0x10
    NSMutableDictionary * _typeToItemListenerArrayMap; // +0x18
    NSMutableSet * _topLevelItems; // +0x20
    NSMutableSet * _dirtyItems; // +0x28
    NSMutableSet * _parentsForDirtyItems; // +0x30
    UIView * _topLevelView; // +0x38
}
- (id)initWithTopLevelView:(id)arg1;
- (void)dealloc;
- (void)registerView:(id)arg1 withType:(long long)arg2;
- (void)registerLayoutDependencyForView:(id)arg1 dependentType:(long long)arg2 initCallback:(id /* block */)arg3;
- (void)registerLayoutDependencyForView:(id)arg1 dependentTypes:(id)arg2 initCallback:(id /* block */)arg3;
- (void)registerLayoutDependencyForView:(id)arg1 dependentType:(long long)arg2;
- (void)registerLayoutDependencyCallback:(id /* block */)arg1 dependentView:(id)arg2;
- (void)registerLayoutDependencyForView:(id)arg1 dependentTypes:(id)arg2;
- (void)registerLayoutDependencyForView:(id)arg1 dependentView:(id)arg2;
- (void)layoutAllViews;
- (void)layoutAllDirtyViews;
- (void)notifyLayoutChanges:(id)arg1;
- (void)setNeedsNotifyLayoutChanges:(id)arg1;
- (void)setNeedsLayout:(id)arg1;
- (void)notifyRelayoutForItems:(id)arg1 startPriority:(unsigned int)arg2 forceLayout:(BOOL)arg3;
- (void)notifyRelayoutForItems:(id)arg1 currentUpdatedItems:(id)arg2 startPriority:(unsigned int)arg3 forceLayout:(BOOL)arg4;
- (void)unregisterView:(id)arg1;
- (id)getOrCreateItemFromView:(id)arg1 type:(long long)arg2;
- (id)viewToItemMap;
- (void)setViewToItemMap:(id)arg1;
- (id)typeToItemArrayMap;
- (void)setTypeToItemArrayMap:(id)arg1;
- (id)typeToItemListenerArrayMap;
- (void)setTypeToItemListenerArrayMap:(id)arg1;
- (id)topLevelItems;
- (void)setTopLevelItems:(id)arg1;
- (id)dirtyItems;
- (void)setDirtyItems:(id)arg1;
- (id)parentsForDirtyItems;
- (void)setParentsForDirtyItems:(id)arg1;
- (id)topLevelView;
- (void)setTopLevelView:(id)arg1;
- (void).cxx_destruct;
@end

