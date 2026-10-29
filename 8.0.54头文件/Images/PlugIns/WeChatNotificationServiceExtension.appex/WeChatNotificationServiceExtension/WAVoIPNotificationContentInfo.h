@interface WAVoIPNotificationContentInfo : NSObject
{
    BOOL _isInvite; // +0x8
    BOOL _isPrivate; // +0x9
    BOOL _isVideo; // +0xa
    BOOL _isFromAPNS; // +0xb
    unsigned int _createTime; // +0xc
    NSString * _roomID; // +0x10
    NSString * _headImgBase64Url; // +0x18
    NSString * _callerUserName; // +0x20
    NSString * _msgID; // +0x28
    NSString * _requestID; // +0x30
    double _receiveTimestamp; // +0x38
    NSString * _name; // +0x40
}
+ (id)notificationContentFromAPNSPushRequest:(id)arg1;
+ (id)notificationContentFromUserInfo:(id)arg1;
- (unsigned long long)VoIPExIntent_contentType;
- (id)userInfos;
- (id)userInfosWithAPNSPushRequest:(id)arg1;
- (id)initWithRoomID:(id)arg1 requestID:(id)arg2 name:(id)arg3 isInvite:(BOOL)arg4 isPrivate:(BOOL)arg5 headImgBase64Url:(id)arg6 isVideo:(BOOL)arg7 callerUserName:(id)arg8 msgID:(id)arg9 createTime:(unsigned int)arg10 isFromAPNS:(BOOL)arg11 receiveTimestamp:(double)arg12;
- (id)roomID;
- (void)setRoomID:(id)arg1;
- (BOOL)isInvite;
- (void)setIsInvite:(BOOL)arg1;
- (BOOL)isPrivate;
- (void)setIsPrivate:(BOOL)arg1;
- (id)headImgBase64Url;
- (void)setHeadImgBase64Url:(id)arg1;
- (BOOL)isVideo;
- (void)setIsVideo:(BOOL)arg1;
- (id)callerUserName;
- (void)setCallerUserName:(id)arg1;
- (id)msgID;
- (void)setMsgID:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)requestID;
- (void)setRequestID:(id)arg1;
- (BOOL)isFromAPNS;
- (void)setIsFromAPNS:(BOOL)arg1;
- (double)receiveTimestamp;
- (void)setReceiveTimestamp:(double)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void).cxx_destruct;
@end

