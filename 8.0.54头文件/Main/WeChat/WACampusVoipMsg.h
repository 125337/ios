@interface WACampusVoipMsg : NSObject
{
    BOOL _isFromApns; // +0x8
    long long _type; // +0x10
    long long _expireTime; // +0x18
    long long _msgId; // +0x20
    NSString * _roomId; // +0x28
    long long _debugMode; // +0x30
    NSString * _roomType; // +0x38
    NSString * _signature; // +0x40
    NSString * _appId; // +0x48
    NSString * _pathBanner; // +0x50
    NSString * _pathAnswer; // +0x58
    WACampusVoipUserInfo * _userInfo; // +0x60
    long long _receiveTime; // +0x68
    long long _createTime; // +0x70
    long long _styleType; // +0x78
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)intentUserInfos;
- (BOOL)isVideoCall;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)expireTime;
- (void)setExpireTime:(long long)arg1;
- (long long)msgId;
- (void)setMsgId:(long long)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (long long)debugMode;
- (void)setDebugMode:(long long)arg1;
- (id)roomType;
- (void)setRoomType:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)pathBanner;
- (void)setPathBanner:(id)arg1;
- (id)pathAnswer;
- (void)setPathAnswer:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)isFromApns;
- (void)setIsFromApns:(BOOL)arg1;
- (long long)receiveTime;
- (void)setReceiveTime:(long long)arg1;
- (long long)createTime;
- (void)setCreateTime:(long long)arg1;
- (long long)styleType;
- (void)setStyleType:(long long)arg1;
- (void).cxx_destruct;
@end

