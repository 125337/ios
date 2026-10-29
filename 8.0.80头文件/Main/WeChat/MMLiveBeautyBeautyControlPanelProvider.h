@interface MMLiveBeautyBeautyControlPanelProvider : NSObject <MMLiveBeautyPresetControlPanelDelegate, MMLiveBeautyNavigatorViewDelegate, MMLiveBeautyBeautyFineTuningControlPanelProviderDelegate, MMLiveBeautyControlPanelProvider>
{
    BOOL _itemValueChangeReported; // +0x8
    UIView * _controlPanel; // +0x10
    id <MMLiveBeautyControlPanelNavigationProvider> _navigationProvider; // +0x18
    MMLiveBeautyNavigatorView * _navigatorViewImpl; // +0x20
    MMLiveTaskId * _taskId; // +0x28
    MMLiveBeautyLogic * _beautyLogic; // +0x30
}
- (id)initWithLiveTaskId:(id)arg1 beautyLogic:(id)arg2 navigatorView:(id)arg3;
- (id)navigatorView;
- (void)onAttached;
- (void)onDetaching;
- (void)onItemSelected:(id)arg1;
- (void)onFineTuningRequestedForItem:(id)arg1;
- (void)onNavigatorItemSelected:(id)arg1;
- (void)onValueChanged:(double)arg1 forItem:(id)arg2 inSuite:(id)arg3;
- (id)liveTask;
- (id)controlPanel;
- (void)setControlPanel:(id)arg1;
- (id)navigationProvider;
- (void)setNavigationProvider:(id)arg1;
- (id)navigatorViewImpl;
- (void)setNavigatorViewImpl:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)beautyLogic;
- (void)setBeautyLogic:(id)arg1;
- (BOOL)itemValueChangeReported;
- (void)setItemValueChangeReported:(BOOL)arg1;
- (void).cxx_destruct;
@end
