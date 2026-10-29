@interface WSWebviewErrorReporter14928 : WSReportBaseItem
{
    BOOL _useReusePool; // +0x8
    BOOL _isWebviewOnForeground; // +0x9
    unsigned int _scene; // +0xc
    unsigned int _h5version; // +0x10
    unsigned long long _errorType; // +0x18
    long long _errorCode; // +0x20
    NSString * _errorMsg; // +0x28
    unsigned long long _timeStamp; // +0x30
    NSString * _webviewID; // +0x38
    unsigned long long _evaluateJSTimes; // +0x40
    NSString * _lastEvaluateJSString; // +0x48
    unsigned long long _survivalTime; // +0x50
    NSString * _baseLoadURLString; // +0x58
    unsigned long long _stayInReuablePoolTime; // +0x60
    NSString * _topViewControllerName; // +0x68
    unsigned long long _bizType; // +0x70
}
- (id)init;
- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (void)getInfoFrom:(id)arg1;
- (void)doReport;
- (unsigned long long)errorType;
- (void)setErrorType:(unsigned long long)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)h5version;
- (void)setH5version:(unsigned int)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (id)errorMsg;
- (void)setErrorMsg:(id)arg1;
- (unsigned long long)timeStamp;
- (void)setTimeStamp:(unsigned long long)arg1;
- (id)webviewID;
- (void)setWebviewID:(id)arg1;
- (unsigned long long)evaluateJSTimes;
- (void)setEvaluateJSTimes:(unsigned long long)arg1;
- (id)lastEvaluateJSString;
- (void)setLastEvaluateJSString:(id)arg1;
- (unsigned long long)survivalTime;
- (void)setSurvivalTime:(unsigned long long)arg1;
- (id)baseLoadURLString;
- (void)setBaseLoadURLString:(id)arg1;
- (BOOL)useReusePool;
- (void)setUseReusePool:(BOOL)arg1;
- (unsigned long long)stayInReuablePoolTime;
- (void)setStayInReuablePoolTime:(unsigned long long)arg1;
- (id)topViewControllerName;
- (void)setTopViewControllerName:(id)arg1;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg1;
- (BOOL)isWebviewOnForeground;
- (void)setIsWebviewOnForeground:(BOOL)arg1;
- (void).cxx_destruct;
@end
