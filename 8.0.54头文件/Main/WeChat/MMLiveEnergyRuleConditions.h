@interface MMLiveEnergyRuleConditions : NSObject
{
    NSArray * _thermalStates; // +0x8
    NSArray * _overheatingTorchStatuses; // +0x10
    NSArray * _batteryStates; // +0x18
    NSNumber * _minimumBatteryLevel; // +0x20
    NSNumber * _maximumBatteryLevel; // +0x28
    NSArray * _networkTypes; // +0x30
}
- (id)thermalStates;
- (void)setThermalStates:(id)arg1;
- (id)overheatingTorchStatuses;
- (void)setOverheatingTorchStatuses:(id)arg1;
- (id)batteryStates;
- (void)setBatteryStates:(id)arg1;
- (id)minimumBatteryLevel;
- (void)setMinimumBatteryLevel:(id)arg1;
- (id)maximumBatteryLevel;
- (void)setMaximumBatteryLevel:(id)arg1;
- (id)networkTypes;
- (void)setNetworkTypes:(id)arg1;
- (void).cxx_destruct;
@end

