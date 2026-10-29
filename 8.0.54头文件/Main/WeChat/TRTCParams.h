@interface TRTCParams : NSObject
{
    unsigned int _sdkAppId; // +0x8
    unsigned int _roomId; // +0xc
    NSString * _userId; // +0x10
    NSString * _userSig; // +0x18
    NSString * _strRoomId; // +0x20
    long long _role; // +0x28
    NSString * _streamId; // +0x30
    NSString * _userDefineRecordId; // +0x38
    NSString * _privateMapKey; // +0x40
    NSString * _bussInfo; // +0x48
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)sdkAppId;
- (void)setSdkAppId:(unsigned int)arg1;
- (id)userId;
- (void)setUserId:(id)arg1;
- (id)userSig;
- (void)setUserSig:(id)arg1;
- (unsigned int)roomId;
- (void)setRoomId:(unsigned int)arg1;
- (id)strRoomId;
- (void)setStrRoomId:(id)arg1;
- (long long)role;
- (void)setRole:(long long)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)userDefineRecordId;
- (void)setUserDefineRecordId:(id)arg1;
- (id)privateMapKey;
- (void)setPrivateMapKey:(id)arg1;
- (id)bussInfo;
- (void)setBussInfo:(id)arg1;
- (void).cxx_destruct;
@end

