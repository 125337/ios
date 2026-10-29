@interface NSEShareDataUtil : NSObject
+ (id)appGroupID;
+ (id)containerURL;
+ (id)userDefaults;
+ (void)saveCurrentSpeechConfigId:(id)arg1;
+ (void)saveCurrentUsername:(id)arg1;
+ (id)getObjectForKey:(id)arg1;
+ (id)getNSEAppGroupRootDir;
+ (id)getPathOfSpeechPosDir;
+ (BOOL)syncUserDefaultData;
+ (id)libaryPath;
+ (id)getPathOfSoundsLibary;
+ (void)saveCurrentSpeechConfig:(id)arg1;
+ (void)clearSynthesizeSoundData;
+ (id)documentPath;
+ (id)logFolderPath;
+ (id)logFilePath;
+ (id)getPathOfIDKeyReportDataDir;
+ (id)getAllExtIdKeyReportFiles;
+ (void)handleShareExtIdKeyReportAfterAppActive;
+ (void)clearAllExtIdKeyReportFiles;
+ (id)getCurrentConfig;
@end

