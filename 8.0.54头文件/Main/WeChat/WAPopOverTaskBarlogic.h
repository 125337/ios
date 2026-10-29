@interface WAPopOverTaskBarlogic : MMObject <WAPopOverTaskBarViewDelegate>
{
    unsigned int _currentDebugMode; // +0x8
    NSMutableArray * _arrTaskItem; // +0x10
    MMUIViewController * _containerVC; // +0x18
    WAPopOverView * _popOverView; // +0x20
    NSString * _currentUsername; // +0x28
}
- (id)initWithUsername:(id)arg1 debugMode:(unsigned int)arg2;
- (void)initData;
- (void)reloadTaskItems;
- (void)loadTaskItemListWithCount:(unsigned int)arg1;
- (id)taskItemAtRowIndex:(long long)arg1;
- (BOOL)isShouldShowTaskBarView;
- (void)taskBarView:(id)arg1 didSelectTaskItem:(id)arg2;
- (id)arrTaskItem;
- (void)setArrTaskItem:(id)arg1;
- (id)containerVC;
- (void)setContainerVC:(id)arg1;
- (id)popOverView;
- (void)setPopOverView:(id)arg1;
- (id)currentUsername;
- (void)setCurrentUsername:(id)arg1;
- (unsigned int)currentDebugMode;
- (void)setCurrentDebugMode:(unsigned int)arg1;
- (void).cxx_destruct;
@end

