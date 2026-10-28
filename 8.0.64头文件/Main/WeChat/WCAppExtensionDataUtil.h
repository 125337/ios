@interface WCAppExtensionDataUtil : NSObject
+ (void)setLocale:(id)arg1;
+ (void)setBrandType:(unsigned int)arg1;
+ (id)getLocalizationDirectoryPath;
+ (void)setDomainDict:(id)arg1;
+ (id)domainDictPath;
+ (void)WCNotificationArrivalReport_saveResultInfo:(id)arg1;
+ (id)WCNotificationArrivalReport_resultInfoArray;
+ (void)WCNotificationArrivalReport_clearAllResultInfo;
+ (id)appGroupID;
+ (id)userDefaults;
+ (BOOL)syncUserDefaults;
+ (id)containerURL;
@end
