@interface TPDeviceUtil : NSObject
+ (float)osVersionFloat;
+ (id)osVersionString;
+ (float)sysVersion;
+ (id)sysVersionString;
+ (BOOL)isPadInterface;
+ (BOOL)isPadModel;
+ (BOOL)isPhoneModel;
+ (long long)deviceType;
+ (id)iPhoneDeviceMap;
+ (id)iPadDeviceMap;
+ (BOOL)supportMetal;
+ (BOOL)isSystemVersionLessThan:(id)arg1;
+ (BOOL)isSystemVersionLessAndEqual:(id)arg1;
+ (BOOL)isSystemVersionGreaterThan:(id)arg1;
+ (BOOL)isSystemVersionGreaterAndEqual:(id)arg1;
+ (id)splitIntStringWithDot:(id)arg1;
+ (int)compareIntAndDotVersion:(id)arg1 version2:(id)arg2 compareLevel:(long long)arg3;
+ (CGSize)deviceResolution;
+ (id)deviceResolutionString;
+ (id)deviceMachine;
@end
