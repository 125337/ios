@interface QBWebItemEvent : NSObject
{
    int _apnType; // +0x8
    long long _eventType; // +0x10
    double _timestamp; // +0x18
    NSDictionary * _userInfo; // +0x20
    NSURL * _URL; // +0x28
    NSURL * _mainDocumentURL; // +0x30
    NSString * _HTTPMethod; // +0x38
    NSString * _errorDescription; // +0x40
    long long _statusCode; // +0x48
    long long _directType; // +0x50
    id _webview; // +0x58
}
+ (id)eventWithType:(long long)arg1 userInfo:(id)arg2;
+ (id)descriptionForTimestamp:(double)arg1;
- (id)JSONInfo;
- (id)eventName;
- (id)validJSONUserInfo;
- (void).cxx_destruct;
- (long long)eventType;
- (void)setEventType:(long long)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)URL;
- (void)setURL:(id)arg1;
- (id)mainDocumentURL;
- (void)setMainDocumentURL:(id)arg1;
- (id)HTTPMethod;
- (void)setHTTPMethod:(id)arg1;
- (id)errorDescription;
- (void)setErrorDescription:(id)arg1;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg1;
- (long long)directType;
- (void)setDirectType:(long long)arg1;
- (int)apnType;
- (void)setApnType:(int)arg1;
- (id)webview;
- (void)setWebview:(id)arg1;
@end

