@interface WACanvasPlugin_embedView : WAWebViewPluginBase
{
    WACanvasCoverViewContainer * _coverViewContainer; // +0x8
    NSString * _frameSetId; // +0x10
}
- (id)curCoverView;
- (BOOL)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (BOOL)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (void)resizeView:(unsigned int)arg1 region:(CGRect)arg2;
- (void)setViewVisible:(unsigned int)arg1 visible:(BOOL)arg2;
- (void)updateZIndex:(long long)arg1 ViewId:(unsigned int)arg2;
- (id)getChildView:(unsigned int)arg1;
- (BOOL)removeChildView:(unsigned int)arg1;
- (id)getChildViews;
- (id)getChildViewsByClass:(Class)arg1;
- (id)coverViewContainer;
- (void)setCoverViewContainer:(id)arg1;
- (id)frameSetId;
- (void)setFrameSetId:(id)arg1;
- (void).cxx_destruct;
@end

