@interface MMFinderLiveConfigurations : MMUserService <IExptServiceExt, MMConfigMgrExt, MMServiceProtocol>
{
    BOOL _EnergyController_lowPowerModeAvailable; // +0x8
    BOOL _Cast_allowsUsingUPnP; // +0x9
    NSArray * _EnergyController_lowPowerModeRules; // +0x10
}
- (id)init;
- (void)reloadConfigurations;
- (void)onExptItemListChange;
- (void)onMMDynamicConfigUpdated;
- (void)EnergyController_reloadConfigurations;
- (BOOL)EnergyController_lowPowerModeAvailable;
- (BOOL)EnergyController_forcesEnableLowPowerMode;
- (id)EnergyController_kitchenRule;
- (BOOL)EnergyController_WeEffect_allowsAdjustFaceAlignmentToDisabledLevel;
- (BOOL)EnergyController_WeEffect_allowsAdjustOcclusionSegmentToDisabledLevel;
- (float)Gift_PAGFrameRate;
- (float)Gift_fullScreenGiftDisplaySpacingTimeInterval;
- (void)Cast_reloadConfigurations;
- (BOOL)Cast_autoAirPlayWhileEnteringNewLive;
- (BOOL)Cast_allowsUsingUPnP;
- (double)Cast_UPnPDiscoveryTimeoutInterval;
- (BOOL)DocumentsPresentation_usesTestBizArticles;
- (id)EnergyController_lowPowerModeRules;
- (void).cxx_destruct;
@end

