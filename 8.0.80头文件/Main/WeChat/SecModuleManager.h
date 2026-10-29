@interface SecModuleManager : NSObject
+ (id)jailbreakModules;
+ (void)setJailbreakModules:(id)arg1;
+ (id)suspiciousModules;
+ (void)setSuspiciousModules:(id)arg1;
+ (BOOL)isAlreadyGet;
+ (void)setIsAlreadyGet:(BOOL)arg1;
+ (void)doGetSecInfo;
+ (id)getDeviceName;
+ (id)getDeviceModelName;
+ (id)getSystemName;
+ (id)getSystemVersion;
+ (id)jailbreakPaths;
+ (id)suspiciousPathKeywords;
+ (id)getJailbreakSuspiciousModules;
+ (int)getSupiciousModulesBySyscallWithProtection:(char[256] *)arg1 maxCount:(int)arg2;
+ (id)getSuspiciousProcessModulesByDyld;
+ (long long)compareSystemVersion:(id)arg1 withVersion:(id)arg2;
+ (id)getSuspiciousProcessModules;
+ (id)getSecExtendInfoWithScene:(id)arg1;
+ (id)getSecInfo:(id)arg1;
+ (BOOL)isSceneEnable:(id)arg1;
@end
