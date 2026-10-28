@interface WAAppTaskSystemCoverView : MMObject <WAJSContextPlugin_NativeViewsRootViewProtocol>
{
    WASystemCoverView * _view; // +0x8
    WAJSContextPlugin_NativeViewsComponent * _component; // +0x10
}
- (id)view;
- (void)insertView:(id)arg1 atZIndex:(long long)arg2;
- (id)getRootBaseView;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (id)getChildView:(unsigned int)arg1;
- (BOOL)removeChildView:(unsigned int)arg1;
- (id)getChildViewsByClass:(Class)arg1;
- (id)component;
- (void)setView:(id)arg1;
- (void)setComponent:(id)arg1;
- (void).cxx_destruct;
@end
