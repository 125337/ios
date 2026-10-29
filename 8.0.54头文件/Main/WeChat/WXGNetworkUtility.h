@interface WXGNetworkUtility : NSObject
+ (BOOL)isBatteryChargeAndLevel:(float *)arg1;
+ (BOOL)isHotspotActivity;
+ (BOOL)isSameWifi:(id)arg1 selfWifiName:(id *)arg2;
+ (int)isSameNetGateWay:(id)arg1;
+ (id)_getCorrectMaskWithIP:(id)arg1;
+ (BOOL)isOpenHotSpot;
+ (BOOL)isOnWifiOrHostSpotMode;
+ (id)currentHotSpotOrWifiSSID;
+ (int)isInnerIP:(id)arg1;
+ (id)getLocalIPString;
@end

