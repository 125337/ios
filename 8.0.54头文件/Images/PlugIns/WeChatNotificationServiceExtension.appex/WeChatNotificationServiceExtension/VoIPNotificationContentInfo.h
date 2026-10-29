@interface VoIPNotificationContentInfo : NSObject
{
    BOOL _isInvite; // +0x8
    BOOL _isMultiply; // +0x9
    BOOL _isPrivate; // +0xa
    BOOL _isVideo; // +0xb
    BOOL _isFromAPNS; // +0xc
    BOOL _isIlink; // +0xd
    unsigned int _createTime; // +0x10
    NSString * _roomID; // +0x18
    NSString * _roomKey; // +0x20
    NSString * _headImgBase64Url; // +0x28
    NSString * _callerUserName; // +0x30
    NSString * _inviteID; // +0x38
    NSString * _msgID; // +0x40
    NSString * _requestID; // +0x48
    double _receiveTimestamp; // +0x50
    NSString * _ilinkctx; // +0x58
    long long _ilinkctxver; // +0x60
}
+ (id)notificationContentFromUserInfo:(id)arg1;
+ (id)notificationContentFromAPNSPushRequest:(id)arg1 decryptPayload:(id)arg2;
- (unsigned long long)WCNotificationArrivalReport_voIPContentType;
- (unsigned long long)VoIPExIntent_contentType;
- (id)initWithRoomID:(id)arg1 roomKey:(id)arg2 isInvite:(BOOL)arg3 isMultiply:(BOOL)arg4 isPrivate:(BOOL)arg5 headImgBase64Url:(id)arg6 isVideo:(BOOL)arg7 callerUserName:(id)arg8 inviteID:(id)arg9 msgID:(id)arg10 createTime:(unsigned int)arg11 requestID:(id)arg12 isFromAPNS:(BOOL)arg13 receiveTimestamp:(double)arg14 isIlink:(BOOL)arg15 ilinkctx:(id)arg16 ilinkctxver:(long long)arg17;
- (id)userInfos;
- (id)userInfosWithAPNSPushRequest:(id)arg1;
- (id)roomID;
- (void)setRoomID:(id)arg1;
- (id)roomKey;
- (void)setRoomKey:(id)arg1;
- (BOOL)isInvite;
- (void)setIsInvite:(BOOL)arg1;
- (BOOL)isMultiply;
- (void)setIsMultiply:(BOOL)arg1;
- (BOOL)isPrivate;
- (void)setIsPrivate:(BOOL)arg1;
- (id)headImgBase64Url;
- (void)setHeadImgBase64Url:(id)arg1;
- (BOOL)isVideo;
- (void)setIsVideo:(BOOL)arg1;
- (id)callerUserName;
- (void)setCallerUserName:(id)arg1;
- (id)inviteID;
- (void)setInviteID:(id)arg1;
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
- (BOOL)isIlink;
- (void)setIsIlink:(BOOL)arg1;
- (id)ilinkctx;
- (void)setIlinkctx:(id)arg1;
- (long long)ilinkctxver;
- (void)setIlinkctxver:(long long)arg1;
- (void).cxx_destruct;
@end

