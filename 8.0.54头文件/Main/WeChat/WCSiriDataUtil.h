@interface WCSiriDataUtil : MMObject
+ (id)userDefaults;
+ (id)appGroupID;
+ (id)containerURL;
+ (void)saveUsername:(id)arg1;
+ (void)saveCryptUin:(unsigned long long)arg1;
+ (void)saveAppVersion:(unsigned int)arg1;
+ (void)saveDeviceID:(id)arg1;
+ (void)saveDeviceType:(id)arg1;
+ (void)saveHeadDeviceType:(unsigned short)arg1;
+ (void)saveExtensionServerID:(id)arg1;
+ (void)saveExtensionKey:(id)arg1;
+ (void)saveShortHost:(id)arg1;
+ (BOOL)syncUserDefaults;
+ (BOOL)clearAllValues;
+ (id)contactsFilePath;
+ (id)reportFolderPath;
+ (id)reportFilePath;
+ (id)avatarFolderPath;
+ (id)logFolderPath;
@end

