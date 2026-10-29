@interface PalmReportUtil : NSObject
+ (void)reportEncryptInfoWithSessionId:(id)arg1 timeCost:(unsigned long long)arg2 fileSize1:(unsigned long long)arg3 fileSize2:(unsigned long long)arg4;
+ (void)reportCdnUploadWithSessionId:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 timeCost:(unsigned long long)arg4 fileSize:(unsigned long long)arg5 cdnFileId:(id)arg6;
+ (void)reportVideoInfoWithSessionId:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 fileSize:(unsigned long long)arg4;
+ (void)reportCgiRequestRetWithSessionId:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 timeCost:(unsigned long long)arg4 extValue1:(id)arg5;
+ (void)reportPalmResultWithSessionId:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 timeCost:(unsigned long long)arg4;
+ (void)reportGuidePopupInfoWithSessionId:(id)arg1 showTime:(unsigned long long)arg2 downloadCost:(unsigned long long)arg3 closeReason:(id)arg4;
+ (void)reportWePalmModelInfo:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 mode:(id)arg4 extraMsg:(id)arg5;
+ (void)reportPalmIlogsInfo:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 action:(id)arg4 timeCost:(unsigned long long)arg5 fileSize1:(unsigned long long)arg6 fileSize2:(unsigned long long)arg7 extValue1:(id)arg8 extValue2:(id)arg9 extValue3:(id)arg10;
@end
