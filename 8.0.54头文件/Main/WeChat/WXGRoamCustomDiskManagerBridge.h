@interface WXGRoamCustomDiskManagerBridge : NSObject <CustomRoamDiskManagerBase>
{
    CustomRoamDiskManagerCallback * _diskManagerCb; // +0x8
}
+ (id)sharedInstance;
- (void)setCallback:(id)arg1;
- (void)scanDevices;
- (id)genAutoTestDeviceInfo;
- (id)diskManagerCb;
- (void)setDiskManagerCb:(id)arg1;
- (void).cxx_destruct;
@end

