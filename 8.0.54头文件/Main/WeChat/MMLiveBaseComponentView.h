@interface MMLiveBaseComponentView : MMIndexedContainerView
{
    MMLiveBaseComponentView * _parentComponentView; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    MMLiveTask * _liveTask; // +0x18
    NSString * _componentKey; // +0x20
    OrderedDictionary * _components; // +0x28
    NSMutableDictionary * _layoutDependentKeys; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;
- (id)initWithFrame:(CGRect)arg1 andLiveTask:(id)arg2 componentKey:(id)arg3;
- (void)layoutSubviews;
- (id)liveViewController;
- (id)liveTask;
- (BOOL)addSubComponent:(id)arg1 layoutDependentKeys:(id)arg2;
- (BOOL)removeSubComponent:(id)arg1;
- (BOOL)removeFromParentComponent;
- (void)onSubComponentLayoutChanged:(id)arg1;
- (id)subComponents;
- (id)subComponentForKey:(id)arg1;
- (void)layoutUI;
- (void)onPrepareLive;
- (void)onCreateLive;
- (void)onEnterLive;
- (void)onEnterLiveWithError:(id)arg1;
- (void)onLiveUpdated;
- (void)onLivePaused;
- (void)onLiveResumed;
- (void)onLiveQualityUpdated:(id)arg1;
- (void)onLiveProgressUpdated:(unsigned int)arg1;
- (void)onExitLive;
- (void)visibilityChanged:(BOOL)arg1 invokeType:(unsigned long long)arg2;
- (id)parentComponentView;
- (void)setParentComponentView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setLiveTask:(id)arg1;
- (id)componentKey;
- (void)setComponentKey:(id)arg1;
- (id)components;
- (void)setComponents:(id)arg1;
- (id)layoutDependentKeys;
- (void)setLayoutDependentKeys:(id)arg1;
- (void).cxx_destruct;
@end

