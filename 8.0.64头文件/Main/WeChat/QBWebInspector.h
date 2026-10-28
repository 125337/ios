@interface QBWebInspector : NSObject
{
    NSMutableArray * _webpages; // +0x8
    NSMutableDictionary * _statusInfo; // +0x10
    NSMutableArray * _pageIDsForUpload; // +0x18
    NSMutableArray * _pageIDsHasUploaded; // +0x20
    NSString * _fileName; // +0x28
}
+ (id)sharedInstance;
+ (void)initialize;
+ (BOOL)validationCheckForEvent:(id)arg1;
+ (id)networkDescriptionWithStatus:(long long)arg1;
+ (void)loadStatusAndCheckWebpageVaildation;
+ (void)addWebItemEvent:(id)arg1;
+ (BOOL)saveWebpagesToFile;
+ (id)webpageWithURL:(id)arg1;
+ (id)webItemWithURL:(id)arg1 pageURL:(id)arg2;
+ (void)addEvent:(id)arg1 forRequest:(id)arg2;
+ (void)addStatusWithKey:(id)arg1 value:(id)arg2 allowDuplicateKey:(BOOL)arg3;
+ (BOOL)isWebInspectorURL:(id)arg1;
+ (id)businessIDForWebInspectorURL:(id)arg1;
+ (void)startSpeedTestWithCompletion:(id /* block */)arg1;
+ (id)sortedFilePathsForSubPaths:(id)arg1;
+ (id)filePathForWebLogs;
+ (BOOL)saveToFile;
+ (BOOL)uploadWithDetail:(BOOL)arg1 triggerURL:(id)arg2 completion:(id /* block */)arg3;
+ (BOOL)uploadAllLogsWithCompletion:(id /* block */)arg1;
+ (BOOL)uploadWithBusinessID:(id)arg1 log:(id)arg2 completion:(id /* block */)arg3;
+ (void)uploadLogWithPaths:(id)arg1 completion:(id /* block */)arg2;
+ (id)JSONInfoWithDetail:(BOOL)arg1 shouldUpload:(BOOL)arg2;
- (void).cxx_destruct;
- (id)webpages;
- (void)setWebpages:(id)arg1;
- (id)statusInfo;
- (void)setStatusInfo:(id)arg1;
- (id)pageIDsForUpload;
- (void)setPageIDsForUpload:(id)arg1;
- (id)pageIDsHasUploaded;
- (void)setPageIDsHasUploaded:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
@end
