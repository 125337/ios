@interface WASplashAdRootView : MMUIView <WAJSContextPlugin_NativeViewsRootViewProtocol>
{
    WAJSContextPlugin_NativeViewsComponent * _component; // +0x8
}
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (id)getChildView:(unsigned int)arg1;
- (BOOL)removeChildView:(unsigned int)arg1;
- (id)getChildViewsByClass:(Class)arg1;
- (CGRect)rootViewFrame;
- (id)rootView;
- (id)component;
- (void)setComponent:(id)arg1;
- (void).cxx_destruct;
@end
