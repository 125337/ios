@interface WCNotificationArrivalReportResultInfo : NSObject
{
    BOOL _isFailed; // +0x8
    unsigned long long _channel; // +0x10
    NSString * _url; // +0x18
    NSString * _messageID; // +0x20
    unsigned long long _contentType; // +0x28
    long long _statusCode; // +0x30
    long long _errorCode; // +0x38
    NSString * _errorDescription; // +0x40
    unsigned long long _voIPContentType; // +0x48
    NSString * _voIPContentRoomID; // +0x50
    NSString * _voIPContentRoomKey; // +0x58
}
+ (id)resultInfoWithUserInfos:(id)arg1;
+ (id)resultInfoWithChannel:(unsigned long long)arg1 notificationUserInfo:(id)arg2 cbURLResponse:(id)arg3 cbURLSessionError:(id)arg4;
- (id)initWithChannel:(unsigned long long)arg1 url:(id)arg2 messageID:(id)arg3 contentType:(unsigned long long)arg4 isFailed:(BOOL)arg5 statusCode:(long long)arg6 errorCode:(long long)arg7 errorDescription:(id)arg8 voIPContentType:(unsigned long long)arg9 voIPContentRoomID:(id)arg10 voIPContentRoomKey:(id)arg11;
- (id)userInfos;
- (id)description;
- (unsigned long long)channel;
- (void)setChannel:(unsigned long long)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)messageID;
- (void)setMessageID:(id)arg1;
- (unsigned long long)contentType;
- (void)setContentType:(unsigned long long)arg1;
- (BOOL)isFailed;
- (void)setIsFailed:(BOOL)arg1;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (id)errorDescription;
- (void)setErrorDescription:(id)arg1;
- (unsigned long long)voIPContentType;
- (void)setVoIPContentType:(unsigned long long)arg1;
- (id)voIPContentRoomID;
- (void)setVoIPContentRoomID:(id)arg1;
- (id)voIPContentRoomKey;
- (void)setVoIPContentRoomKey:(id)arg1;
- (void).cxx_destruct;
@end

