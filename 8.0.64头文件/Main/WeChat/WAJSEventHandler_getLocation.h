@interface WAJSEventHandler_getLocation : WAJSEventHandler_BaseEvent
{
    unsigned long long m_geoLocationType; // +0x8
    NSString * _subKey; // +0x10
    NSString * _openId; // +0x18
    BOOL _enableIndoor; // +0x20
    double _highAccuracyTimeout; // +0x28
    double _beginTime; // +0x30
    double _getLocationTimeStamp; // +0x38
    TencentLBSLocationManager * _locationMgr; // +0x40
}
- (void)handleJSEvent:(id)arg1;
- (void)startRequestAddress;
- (void)requestAddressSync;
- (void)onDelayDismiss;
- (void)updateWebviewTitle;
- (void)onTencentLBSLocationChanged:(id)arg1;
- (void)reportID;
- (void)onTencentLBSLocationError:(id)arg1;
- (double)getLocationTimeStamp;
- (void)setGetLocationTimeStamp:(double)arg1;
- (id)locationMgr;
- (void)setLocationMgr:(id)arg1;
- (void).cxx_destruct;
@end
