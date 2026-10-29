@interface WCDataService : NSObject
{
    NSBundle * _bundle; // +0x8
    NSString * _hostBundleID; // +0x10
    NSUserDefaults * _userDefaults; // +0x18
}
+ (void)WCNotificationArrivalReport_saveResultInfo:(id)arg1;
+ (void)WCNotificationArrivalReport_saveResultInfoWithNotificationRequest:(id)arg1 cbURLResponse:(id)arg2 cbURLSessionError:(id)arg3;
+ (id)WCNotificationArrivalReport_resultInfoArray;
+ (void)WCNotificationArrivalReport_clearAllResultInfo;
+ (id)sharedInstance;
+ (id)allocWithZone:(_NSZone *)arg1;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)mutableCopyWithZone:(_NSZone *)arg1;
- (id)appGroupID;
- (id)containerURL;
- (id)userDefaults;
- (BOOL)syncUserDefaults;
- (long long)getBrandType;
- (id)getLocale;
- (id)getLocalizationDirectoryPath;
- (id)getDomainDict;
- (id)getBrandLemmaTable;
- (void)initLocalizationService;
- (BOOL)isLaunchFromWeixin;
- (id)bundle;
- (void)setBundle:(id)arg1;
- (id)hostBundleID;
- (void)setHostBundleID:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (void).cxx_destruct;
@end

