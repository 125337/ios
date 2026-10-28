@interface WXGUploadFileInformationParse : NSObject
+ (id)sharedInstance;
+ (id)GetWatchLogPathWithTimeSpan:(id)arg1;
- (id)files;
- (void)onIPXX:(id)arg1;
- (void)parseFileInformationsWithXml:(id)arg1;
- (void)uploadImmediateUploadFile:(id)arg1;
- (void)onIPXXReportShareExtensionLog:(id)arg1;
- (void)uploadExtensionLogWithTimeSpan:(id)arg1;
- (void)onIPXXReportWatchLog:(id)arg1;
- (void)uploadWatchLogWithTimeSpan:(id)arg1;
- (id)flutterProfilerPathTransform:(id)arg1;
@end
