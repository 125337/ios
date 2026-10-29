@interface WADeviceVoipAuthViewController : ZZFLEXTableViewController
{
    NSArray * _deviceList; // +0x68
    NSMutableSet * _statusChangedDevice; // +0x70
}
- (id)init;
- (void)viewDidLoad;
- (void)reloadUI;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)deviceList;
- (void)setDeviceList:(id)arg1;
- (id)statusChangedDevice;
- (void)setStatusChangedDevice:(id)arg1;
- (void).cxx_destruct;
@end

