@interface MultiDeviceReportObject : NSObject
+ (void)reportTapBannerWithLoginDevices:(id)arg1;
+ (void)reportAutoLoginToastWithIconType:(unsigned int)arg1 deviceId:(id)arg2;
+ (void)reportManageAction:(unsigned int)arg1 info:(id)arg2;
+ (void)reportLoginAction:(unsigned int)arg1 info:(id)arg2 options:(long long)arg3;
+ (void)reportUnlockAction:(unsigned int)arg1 iconType:(unsigned int)arg2 deviceId:(id)arg3;
+ (void)reportAction:(unsigned int)arg1 iconType:(unsigned int)arg2 deviceId:(id)arg3 options:(long long)arg4 devices:(id)arg5;
@end
