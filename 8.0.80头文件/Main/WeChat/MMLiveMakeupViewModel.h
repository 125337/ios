@interface MMLiveMakeupViewModel : NSObject
{
    MMLiveTaskId * _taskId; // +0x8
    id <MMLiveBeautyLogicProvider> _beautyLogicProvider; // +0x10
    NSArray * _makeupEffectItems; // +0x18
    id <MMLiveMakeupViewModelObserver> _observer; // +0x20
    unsigned long long _currentUsedItemIndex; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)setDetailValueDefault;
- (void)updateMakeup:(id)arg1;
- (void)saveMakeupValues;
- (void)updateMakupDetail:(id)arg1;
- (void)saveMakeupDetailValues;
- (id)makeupEffectItems;
- (id)getLiveTask;
- (id)beautyLogic;
- (id)currentItem;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)beautyLogicProvider;
- (void)setBeautyLogicProvider:(id)arg1;
- (void)setMakeupEffectItems:(id)arg1;
- (id)observer;
- (void)setObserver:(id)arg1;
- (unsigned long long)currentUsedItemIndex;
- (void)setCurrentUsedItemIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
