@interface WAWebViewPlugin_embedView : WAWebViewPluginBase
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (void)resizeView:(unsigned int)arg1 region:(CGRect)arg2;
- (void)updateZIndex:(long long)arg1 ViewId:(unsigned int)arg2;
- (void)setViewVisible:(unsigned int)arg1 visible:(BOOL)arg2;
- (id)getChildView:(unsigned int)arg1;
- (BOOL)removeChildView:(unsigned int)arg1;
- (id)getChildViews;
- (id)getChildViewsByClass:(Class)arg1;
- (void)setViewFixed:(BOOL)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)setViewFullScreen:(id)arg1;
@end
