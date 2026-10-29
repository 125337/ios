@interface MMLiveBeautyBeautyFineTuningControlPanelProvider : NSObject <MMLiveBeautyFineTuningControlPanelDelegate, MMLiveBeautyNavigatorViewDelegate, MMLiveBeautyControlPanelProvider>
{
    id <MMLiveBeautyControlPanelNavigationProvider> _navigationProvider; // +0x8
    id <MMLiveBeautyBeautyFineTuningControlPanelProviderDelegate> _delegate; // +0x10
    MMLiveBeautyFineTuningControlPanel * _controlPanelImpl; // +0x18
    MMLiveBeautyNavigatorView * _navigatorViewImpl; // +0x20
    MMLiveTaskId * _taskId; // +0x28
    MMLiveBeautyLogic * _beautyLogic; // +0x30
    MMLiveBeautySuite * _suite; // +0x38
}
- (id)initWithLiveTaskId:(id)arg1 beautyLogic:(id)arg2 suite:(id)arg3;
- (id)controlPanel;
- (id)navigatorView;
- (void)onAttached;
- (void)onDetaching;
- (void)resetValues;
- (void)onValueChanged:(double)arg1 forItem:(id)arg2;
- (void)onMostRevealedGroupChanged:(id)arg1;
- (void)onItemSettingsRequested:(id)arg1;
- (void)onNavigatorItemSelected:(id)arg1;
- (void)onActiveItemSelected:(id)arg1 forExclusiveGroup:(id)arg2;
- (void)reportCustomEvent:(unsigned long long)arg1 viewId:(id)arg2;
- (id)liveTask;
- (id)navigationProvider;
- (void)setNavigationProvider:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)controlPanelImpl;
- (void)setControlPanelImpl:(id)arg1;
- (id)navigatorViewImpl;
- (void)setNavigatorViewImpl:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)beautyLogic;
- (void)setBeautyLogic:(id)arg1;
- (id)suite;
- (void)setSuite:(id)arg1;
- (void).cxx_destruct;
@end
