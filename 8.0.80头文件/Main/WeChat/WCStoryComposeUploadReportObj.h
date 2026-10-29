@interface WCStoryComposeUploadReportObj : NSObject
{
    unsigned long long _composeTime; // +0x8
    unsigned long long _composeErrorType; // +0x10
    unsigned long long _uploadTime; // +0x18
    unsigned long long _uploadErrorType; // +0x20
    NSString * _composeErrorTypeStr; // +0x28
    NSString * _uploadErrorTypeStr; // +0x30
}
+ (void)reportComposeFailedWithStartTime:(unsigned long long)arg1 errorType:(long long)arg2;
+ (void)reportUploadFailedWithStartTime:(unsigned long long)arg1 errorType:(long long)arg2;
- (void)reportComposeUploadFailed;
- (unsigned long long)composeTime;
- (void)setComposeTime:(unsigned long long)arg1;
- (unsigned long long)composeErrorType;
- (void)setComposeErrorType:(unsigned long long)arg1;
- (unsigned long long)uploadTime;
- (void)setUploadTime:(unsigned long long)arg1;
- (unsigned long long)uploadErrorType;
- (void)setUploadErrorType:(unsigned long long)arg1;
- (id)composeErrorTypeStr;
- (void)setComposeErrorTypeStr:(id)arg1;
- (id)uploadErrorTypeStr;
- (void)setUploadErrorTypeStr:(id)arg1;
- (void).cxx_destruct;
@end
