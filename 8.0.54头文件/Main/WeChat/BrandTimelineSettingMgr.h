@interface BrandTimelineSettingMgr : MMUserService <MMServiceProtocol>
{
    unsigned int _timelineSettingInfoControlBit; // +0x8
}
- (BOOL)shouldShowBrandTimelineSettingEntry;
- (unsigned int)getTimelineSettingInfoControlBit;
- (void)getTimelineSetting:(id /* block */)arg1;
- (void)setPersonalRecommendSwitch:(id)arg1 completion:(id /* block */)arg2;
- (void)setCreationCenterNotifySwitch:(id)arg1 completion:(id /* block */)arg2;
- (void)setFinderRecommendSwitch:(id)arg1 completion:(id /* block */)arg2;
- (void)setHeadForPaySwitch:(id)arg1 completion:(id /* block */)arg2;
- (void)runSetCgi:(id)arg1 complection:(id /* block */)arg2;
- (BOOL)creationCenterNotifySwitch;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initData;
- (void)clearAllData;
- (unsigned int)timelineSettingInfoControlBit;
- (void)setTimelineSettingInfoControlBit:(unsigned int)arg1;
@end

