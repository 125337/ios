@interface MMLiveBackendSeiMicMsgWrap : NSObject
{
    MMLiveAudioRoomSEIConnectMicMsg * _audioRoomSeiMicMsg; // +0x8
    unsigned long long _beginTimeMs; // +0x10
}
- (id)audioRoomSeiMicMsg;
- (void)setAudioRoomSeiMicMsg:(id)arg1;
- (unsigned long long)beginTimeMs;
- (void)setBeginTimeMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
