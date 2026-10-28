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
    NSString * _realCallerUserName; // +0x38
    NSString * _inviteID; // +0x40
    NSString * _msgID; // +0x48
    NSString * _requestID; // +0x50
    double _receiveTimestamp; // +0x58
    NSString * _ilinkctx; // +0x60
    long long _ilinkctxver; // +0x68
    NSString * _lckinviter; // +0x70
}
+ (id)notificationContentInfoFromAppExtensionDataUtil;
+ (id)notificationContentFromUserInfo:(id)arg1;
+ (id)notificationContentFromAPNSPushRequest:(id)arg1 decryptPayload:(id)arg2;
- (unsigned long long)WCNotificationArrivalReport_voIPContentType;
- (id)voIPMtInviteMsg;
- (id)monoMsg;
- (unsigned long long)VoIPIntent_contentType;
- (id)initWithRoomID:(id)arg1 roomKey:(id)arg2 isInvite:(BOOL)arg3 isMultiply:(BOOL)arg4 isPrivate:(BOOL)arg5 headImgBase64Url:(id)arg6 isVideo:(BOOL)arg7 callerUserName:(id)arg8 realCallerUserName:(id)arg9 inviteID:(id)arg10 msgID:(id)arg11 createTime:(unsigned int)arg12 requestID:(id)arg13 isFromAPNS:(BOOL)arg14 receiveTimestamp:(double)arg15 isIlink:(BOOL)arg16 ilinkctx:(id)arg17 ilinkctxver:(long long)arg18 lckinviter:(id)arg19;
- (id)userInfos;
- (id)userInfosWithAPNSPushRequest:(id)arg1;
- (id)description;
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
- (id)realCallerUserName;
- (void)setRealCallerUserName:(id)arg1;
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
- (id)lckinviter;
- (void)setLckinviter:(id)arg1;
- (void).cxx_destruct;
@end
