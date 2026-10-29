@interface MMLiveAnchorSEIInfo : NSObject
{
    NSDictionary * _baseInfoDic; // +0x8
    MMLiveSEIConnectMicMsg * _connectMicSEIInfo; // +0x10
    MMLiveAudioRoomSEIConnectMicMsg * _audioRoomMicSEIInfo; // +0x18
    MMLiveAnchorSEILiveModeInfo * _liveModeInfo; // +0x20
    MMLiveSEIKTVStateInfo * _ktvStateInfo; // +0x28
    MMLiveSEIRecordScreenInfo * _recordScreenInfo; // +0x30
}
- (id)baseInfoDic;
- (void)setBaseInfoDic:(id)arg1;
- (id)connectMicSEIInfo;
- (void)setConnectMicSEIInfo:(id)arg1;
- (id)audioRoomMicSEIInfo;
- (void)setAudioRoomMicSEIInfo:(id)arg1;
- (id)liveModeInfo;
- (void)setLiveModeInfo:(id)arg1;
- (id)ktvStateInfo;
- (void)setKtvStateInfo:(id)arg1;
- (id)recordScreenInfo;
- (void)setRecordScreenInfo:(id)arg1;
- (void).cxx_destruct;
@end
