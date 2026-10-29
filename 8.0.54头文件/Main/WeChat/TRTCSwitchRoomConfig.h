@interface TRTCSwitchRoomConfig : NSObject
{
    unsigned int _roomId; // +0x8
    NSString * _strRoomId; // +0x10
    NSString * _userSig; // +0x18
    NSString * _privateMapKey; // +0x20
}
- (unsigned int)roomId;
- (void)setRoomId:(unsigned int)arg1;
- (id)strRoomId;
- (void)setStrRoomId:(id)arg1;
- (id)userSig;
- (void)setUserSig:(id)arg1;
- (id)privateMapKey;
- (void)setPrivateMapKey:(id)arg1;
- (void).cxx_destruct;
@end

