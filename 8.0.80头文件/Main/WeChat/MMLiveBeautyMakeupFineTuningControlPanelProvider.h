@interface MMLiveBeautyMakeupFineTuningControlPanelProvider : NSObject <MMLiveBeautyFineTuningControlPanelDelegate, MMLiveBeautyControlPanelProvider>
{
    UIView * _navigatorView; // +0x8
    id <MMLiveBeautyControlPanelNavigationProvider> _navigationProvider; // +0x10
    MMLiveBeautyFineTuningControlPanel * _controlPanelImpl; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    MMLiveBeautyLogic * _beautyLogic; // +0x28
    MMLiveMakeupDataItem * _makeup; // +0x30
}
- (id)initWithLiveTaskId:(id)arg1 beautyLogic:(id)arg2 makeup:(id)arg3;
- (id)controlPanel;
- (void)onDetaching;
- (void)resetValues;
- (void)onValueChanged:(double)arg1 forItem:(id)arg2;
- (id)navigatorView;
- (id)navigationProvider;
- (void)setNavigationProvider:(id)arg1;
- (id)controlPanelImpl;
- (void)setControlPanelImpl:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)beautyLogic;
- (void)setBeautyLogic:(id)arg1;
- (id)makeup;
- (void)setMakeup:(id)arg1;
- (void).cxx_destruct;
@end
