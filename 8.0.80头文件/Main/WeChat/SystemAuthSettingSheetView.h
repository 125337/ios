@interface SystemAuthSettingSheetView : MMAutoLayoutSheetView <LocationRetrieveDelegate>
{
    _TtC6WeChat24SystemAuthCapabilityInfo * _capabilityInfo; // +0x8
    SystemAuthBizInfo * _bizInfo; // +0x10
    MMUILabel * _locationLabel; // +0x18
    LocationRetriever * _locationRetriever; // +0x20
    MMLocatingCoordinateLogic * _locatingLogic; // +0x28
}
- (id)initWithAuthCapability:(id)arg1 scene:(id)arg2;
- (id)locatingLogic;
- (void)customArrangeViews;
- (id)genSwitchView:(id)arg1;
- (void)onPermissionSwitchChangeWithCapability:(unsigned int)arg1 scene:(unsigned long long)arg2 switchOn:(BOOL)arg3;
- (BOOL)isSwitchOn;
- (BOOL)showLocationAddress;
- (void)requestLocationAddress;
- (void)onRetrieveLocationOK:(id)arg1;
- (id)capabilityInfo;
- (void)setCapabilityInfo:(id)arg1;
- (id)bizInfo;
- (void)setBizInfo:(id)arg1;
- (id)locationLabel;
- (void)setLocationLabel:(id)arg1;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (void)setLocatingLogic:(id)arg1;
- (void).cxx_destruct;
@end
