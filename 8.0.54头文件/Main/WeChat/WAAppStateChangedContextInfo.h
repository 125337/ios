@interface WAAppStateChangedContextInfo : MMObject
{
    WAAppStateChangedContextInfoMusicInfo * _musicInfo; // +0x8
    WAAppStateChangedContextInfoLocationInfo * _locationInfo; // +0x10
    WAAppStateChangedContextInfoWXABGAudioInfo * _wxaBGAudioInfo; // +0x18
    WAAppStateChangedContextInfoBluetoothInfo * _bluetoothInfo; // +0x20
}
- (id)init;
- (id)description;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (id)wxaBGAudioInfo;
- (void)setWxaBGAudioInfo:(id)arg1;
- (id)bluetoothInfo;
- (void)setBluetoothInfo:(id)arg1;
- (void).cxx_destruct;
@end

