@interface WAMediaCastingRoutePickerRencentDevicePool : NSObject
{
    NSArray * _lastConnectedDeviceList; // +0x8
}
+ (id)sharedInstance;
- (void)appendDevice:(id)arg1;
- (void)saveToDisk;
- (id)lastConnectedDeviceList;
- (id)recoverFromDisk;
- (void)setLastConnectedDeviceList:(id)arg1;
- (void).cxx_destruct;
@end
