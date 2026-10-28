@interface _TtC6WeChat25WCSearchTransitionManager : NSObject
{
     viewSource; // +0x8
     fromVC; // +0x10
     useNoSnapshot; // +0x18
     didSetTransition; // +0x19
     navigationBarColorSameAsVC; // +0x1a
}
- (id)viewSource;
- (void)setViewSource:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (BOOL)useNoSnapshot;
- (void)setUseNoSnapshot:(BOOL)arg1;
- (BOOL)navigationBarColorSameAsVC;
- (void)setNavigationBarColorSameAsVC:(BOOL)arg1;
- (void)setUpAnimationWithSearchBarOffset:(double)arg1 fromVC:(id)arg2;
- (void)setAppearTrasitionFromVC:(id)arg1 fromSearchBar:(id)arg2;
- (void)setNewAppearTrasitionFromVC:(id)arg1 fromSearchBar:(id)arg2;
- (void)onStartInteractivePopTransition;
- (void)onStartNavPopTransitionFrom:(id)arg1;
- (void)onEndInteractivePopTransitionWithIsFinished:(BOOL)arg1;
- (id)init;
- (void).cxx_destruct;
@end
