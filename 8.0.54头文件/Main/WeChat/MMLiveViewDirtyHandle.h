@interface MMLiveViewDirtyHandle : NSObject
{
    BOOL _isDirty; // +0x8
    UIView * _rootView; // +0x10
}
- (void)dirty;
- (void)forceLiveDirty;
- (void)notifyRefresh;
- (id)rootView;
- (void)setRootView:(id)arg1;
- (BOOL)isDirty;
- (void)setIsDirty:(BOOL)arg1;
- (void).cxx_destruct;
@end

