@interface MMViewLayoutComponentItem : NSObject
{
    BOOL _duringLayout; // +0x8
    unsigned int _layoutPriority; // +0xc
    long long _type; // +0x10
    UIView * _view; // +0x18
    NSHashTable * _weakChildren; // +0x20
    NSHashTable * _weakChildrenThatAreAlsoParents; // +0x28
    NSHashTable * _weakParents; // +0x30
    NSHashTable * _visitedParentsDuringDescendencyCheck; // +0x38
    MMViewLayoutManager * _layoutMgr; // +0x40
    NSMutableArray * _bindedLayoutCallbacks; // +0x48
}
- (id)init;
- (BOOL)isDescendentItem:(id)arg1 checkFailedSet:(id)arg2;
- (void)updateLayoutPriority:(unsigned int)arg1 curDepth:(unsigned int)arg2;
- (id)getChildrenSet;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (unsigned int)layoutPriority;
- (void)setLayoutPriority:(unsigned int)arg1;
- (BOOL)duringLayout;
- (void)setDuringLayout:(BOOL)arg1;
- (id)weakChildren;
- (void)setWeakChildren:(id)arg1;
- (id)weakChildrenThatAreAlsoParents;
- (void)setWeakChildrenThatAreAlsoParents:(id)arg1;
- (id)weakParents;
- (void)setWeakParents:(id)arg1;
- (id)visitedParentsDuringDescendencyCheck;
- (void)setVisitedParentsDuringDescendencyCheck:(id)arg1;
- (id)layoutMgr;
- (void)setLayoutMgr:(id)arg1;
- (id)bindedLayoutCallbacks;
- (void)setBindedLayoutCallbacks:(id)arg1;
- (void).cxx_destruct;
@end

