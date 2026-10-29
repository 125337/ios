@interface QBBeaconNetworkUtil : NSObject
+ (id)getWifiMac;
+ (id)getWifiName;
+ (BOOL)networkAvaliable;
+ (BOOL)activeWLAN;
+ (BOOL)activeWWAN;
+ (id)getIMSI;
+ (id)getAPN;
+ (id)getMobileNetType;
@end

