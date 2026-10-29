@interface WCDeviceSearchGuideViewController : MMUIViewController <AirKissViewControllerDelegate, IWCDeviceBrandMgrExt, CNetworkStatusExt>
{
    WCDevice * m_device; // +0x68
    AirKissConfData * m_confData; // +0x70
    UIScrollView * m_scrolView; // +0x78
    UIView * m_noWifiOrBLEView; // +0x80
}
- (id)initWithFilterUserData:(id)arg1;
- (void)viewDidLoad;
- (void)initGuideView;
- (void)initNoWifiOrBLEView;
- (void)onAirKiss;
- (void)onDeviceSearch;
- (void)onAirKissReturn:(BOOL)arg1;
- (void)updateConnectState;
- (BOOL)isBLEConnected;
- (BOOL)isWifiConnected;
- (void)onWCDeviceBlueToothStateChanged:(int)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void).cxx_destruct;
@end

