@interface CdnServiceReporter : NSObject
+ (void)ReportWhenStartDownloadErrorWithRequest:(void *)arg1 errorCode:(int)arg2;
+ (void)ReportWhenDownloadErrorWithRequest:(void *)arg1 errorCode:(int)arg2;
+ (void)ReportWhenStartUploadErrorWithRequest:(void *)arg1 errorCode:(int)arg2;
+ (void)ReportWhenUploadErrorWithRequest:(void *)arg1 errorCode:(int)arg2;
+ (void)ReportCdnServiceErrorWithRequestFileType:(int)arg1 appType:(int)arg2 errorCode:(int)arg3 fileKey:(id)arg4 reportType:(int)arg5;
@end
