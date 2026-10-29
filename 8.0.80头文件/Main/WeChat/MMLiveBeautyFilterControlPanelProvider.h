@interface MMLiveBeautyFilterControlPanelProvider : NSObject <MMLiveBeautySingleLevelControlPanelDelegate, MMLiveBeautyNavigatorViewDelegate, MMLiveBeautyLogicExt, MMLiveBeautyControlPanelProvider>
{
    id <MMLiveBeautyControlPanelNavigationProvider> _navigationProvider; // +0x8
    MMLiveBeautySingleLevelControlPanel * _controlPanelImpl; // +0x10
    MMLiveBeautyNavigatorView * _navigatorViewImpl; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    MMLiveBeautyLogic * _beautyLogic; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1 beautyLogic:(id)arg2 navigatorView:(id)arg3;
- (id)controlPanel;
- (id)navigatorView;
- (void)onAttached;
- (void)onDetaching;
- (void)onItemSelected:(id)arg1;
- (void)onValueChanged:(double)arg1 forItem:(id)arg2;
- (void)onNavigatorItemSelected:(id)arg1;
- (void)onFilterSourceChangedTo:(unsigned long long)arg1;
- (id)liveTask;
- (id)navigationProvider;
- (void)setNavigationProvider:(id)arg1;
- (id)controlPanelImpl;
- (void)setControlPanelImpl:(id)arg1;
- (id)navigatorViewImpl;
- (void)setNavigatorViewImpl:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)beautyLogic;
- (void)setBeautyLogic:(id)arg1;
- (void).cxx_destruct;
@end
