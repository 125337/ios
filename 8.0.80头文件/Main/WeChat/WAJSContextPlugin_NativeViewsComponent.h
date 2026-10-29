@interface WAJSContextPlugin_NativeViewsComponent : NSObject <WAJSContextPlugin_NativeViewsRootViewProtocol>
{
    UIView * _rootChildView; // +0x8
    UIView * _rootView; // +0x10
    NSMutableDictionary * _nativeViews; // +0x18
}
- (id)initWithRootView:(id)arg1;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (id)getChildView:(unsigned int)arg1;
- (BOOL)removeChildView:(unsigned int)arg1;
- (id)getChildViewsByClass:(Class)arg1;
- (id)getChildViews;
- (id)getSafeNativeViewsWritable:(BOOL)arg1;
- (id)nativeViews;
- (id)rootChildView;
- (void)setRootChildView:(id)arg1;
- (id)rootView;
- (void)setRootView:(id)arg1;
- (void)setNativeViews:(id)arg1;
- (void).cxx_destruct;
@end
