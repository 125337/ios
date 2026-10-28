@interface WAVoIPNotificationContentInfo : NSObject
{
    BOOL _isInvite; // +0x8
    BOOL _isPrivate; // +0x9
    BOOL _isVideo; // +0xa
    BOOL _isFromAPNS; // +0xb
    unsigned int _createTime; // +0xc
    NSString * _roomID; // +0x10
    NSString * _headImgUrl; // +0x18
    NSString * _callerUserName; // +0x20
    NSString * _msgID; // +0x28
    NSString * _requestID; // +0x30
    double _receiveTimestamp; // +0x38
}
+ (id)notificationContentFromUserInfo:(id)arg1;
- (unsigned long long)VoIPIntent_contentType;
- (id)userInfos;
- (id)initWithRoomID:(id)arg1 requestID:(id)arg2 isInvite:(BOOL)arg3 isPrivate:(BOOL)arg4 headImgUrl:(id)arg5 isVideo:(BOOL)arg6 callerUserName:(id)arg7 msgID:(id)arg8 createTime:(unsigned int)arg9 isFromAPNS:(BOOL)arg10 receiveTimestamp:(double)arg11;
- (id)roomID;
- (void)setRoomID:(id)arg1;
- (BOOL)isInvite;
- (void)setIsInvite:(BOOL)arg1;
- (BOOL)isPrivate;
- (void)setIsPrivate:(BOOL)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
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
- (void).cxx_destruct;
@end
