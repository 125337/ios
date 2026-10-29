@interface WACanvasCoverViewContainer : UIView
{
    unsigned int _containerId; // +0x8
    id <WACanvasCoverViewContainerDelegate> _delegate; // +0x10
    NSMutableDictionary * _coverViewDic; // +0x18
}
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (BOOL)insertChildViewInCoverView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (BOOL)updateParentIdInCoverView:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (id)getChildViewInCoverView:(unsigned int)arg1;
- (BOOL)removeChildViewInCoverView:(unsigned int)arg1;
- (void)checkComponentCountChange:(BOOL)arg1;
- (id)getChildViewsInCoverView;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)delegate;
- (unsigned int)containerId;
- (void)setContainerId:(unsigned int)arg1;
- (id)coverViewDic;
- (void)setCoverViewDic:(id)arg1;
- (void).cxx_destruct;
@end
