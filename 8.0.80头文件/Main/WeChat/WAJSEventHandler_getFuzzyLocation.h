@interface WAJSEventHandler_getFuzzyLocation : WAJSEventHandler_BaseEvent
{
    unsigned long long m_geoLocationType; // +0x8
    NSString * _openId; // +0x10
    TencentLBSLocationManager * _locationMgr; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (void)startRequestAddress;
- (void)requestAddressSync;
- (void)onDelayDismiss;
- (void)updateWebviewTitle;
- (void)onTencentLBSLocationGot:(id)arg1;
- (void)onTencentLBSLocationError:(id)arg1;
- (CLLocationCoordinate2D)randomDeviate:(CLLocationCoordinate2D)arg1;
- (id)locationMgr;
- (void)setLocationMgr:(id)arg1;
- (void).cxx_destruct;
@end
