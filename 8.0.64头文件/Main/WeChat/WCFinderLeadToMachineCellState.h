@interface WCFinderLeadToMachineCellState : NSObject
{
    BOOL _haveFailedToShow; // +0x8
    BOOL _haveShown; // +0x9
    BOOL _haveLeadToMachineTab; // +0xa
    BOOL _machineTabIsTopRefreshing; // +0xb
    WCFinderDataItem * _machineTabFirstPlayableDataItem; // +0x10
}
- (BOOL)checkDisplayState;
- (BOOL)_innerCheckDisplayState;
- (void)notifySwitchToMachineTab;
- (BOOL)haveFailedToShow;
- (void)setHaveFailedToShow:(BOOL)arg1;
- (BOOL)haveShown;
- (void)setHaveShown:(BOOL)arg1;
- (BOOL)haveLeadToMachineTab;
- (void)setHaveLeadToMachineTab:(BOOL)arg1;
- (id)machineTabFirstPlayableDataItem;
- (void)setMachineTabFirstPlayableDataItem:(id)arg1;
- (BOOL)machineTabIsTopRefreshing;
- (void)setMachineTabIsTopRefreshing:(BOOL)arg1;
- (void).cxx_destruct;
@end
