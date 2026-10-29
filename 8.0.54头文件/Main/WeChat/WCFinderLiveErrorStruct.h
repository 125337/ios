@interface WCFinderLiveErrorStruct : NSObject
{
    int _errorCode; // +0x8
    unsigned long long _liveId; // +0x10
    unsigned long long _errorType; // +0x18
    NSString * _errorInfo; // +0x20
    unsigned long long _errorSeverityLevel; // +0x28
    NSString * _errorTags; // +0x30
}
- (id)toReport;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)errorType;
- (void)setErrorType:(unsigned long long)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)errorInfo;
- (void)setErrorInfo:(id)arg1;
- (unsigned long long)errorSeverityLevel;
- (void)setErrorSeverityLevel:(unsigned long long)arg1;
- (id)errorTags;
- (void)setErrorTags:(id)arg1;
- (void).cxx_destruct;
@end

