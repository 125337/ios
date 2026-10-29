@interface NotificationServiceUtil : NSObject
+ (id)getCurrentUsername;
+ (id)getAppGroupID;
+ (id)containerURL;
+ (id)libaryPath;
+ (id)userDefaults;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (id)getObjectForKey:(id)arg1;
+ (id)getNSEAppGroupRootDir;
+ (id)getPathOfSpeechPosDir;
+ (id)getPathOfSoundsLibary;
+ (id)documentPath;
+ (id)logFolderPath;
+ (id)logFilePath;
+ (unsigned int)genCurrentTime;
+ (id)getPathOfIDKeyReportDataDir;
+ (id)getPathOfIDKeyReportDataWithCurrentTime:(unsigned int)arg1;
+ (id)getCurrentSpeechConfig;
@end

