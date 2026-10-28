@interface MMLiteAppErrorReportInfo : NSObject
{
    int _downloadErrorCode; // +0x8
    unsigned long long _errorCode; // +0x10
    unsigned long long _downloadErrorType; // +0x18
}
- (unsigned long long)errorCode;
- (void)setErrorCode:(unsigned long long)arg1;
- (unsigned long long)downloadErrorType;
- (void)setDownloadErrorType:(unsigned long long)arg1;
- (int)downloadErrorCode;
- (void)setDownloadErrorCode:(int)arg1;
@end
