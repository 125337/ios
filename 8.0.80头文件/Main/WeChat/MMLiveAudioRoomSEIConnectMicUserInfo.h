@interface MMLiveAudioRoomSEIConnectMicUserInfo : NSObject
{
    unsigned int _us; // +0x8
    NSString * _uId; // +0x10
    unsigned long long _i; // +0x18
}
- (void)updateWithMicUserInfo:(id)arg1;
- (BOOL)isTalking;
- (BOOL)isOtherAnchor;
- (BOOL)isInOtherRoom;
- (BOOL)isMicMutedByAnchor;
- (id)uId;
- (void)setUId:(id)arg1;
- (unsigned int)us;
- (void)setUs:(unsigned int)arg1;
- (unsigned long long)i;
- (void)setI:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
