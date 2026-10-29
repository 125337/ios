@interface MMLiveAudioVolumeManageLogic : NSObject
{
    int _defaultVolume; // +0x8
    OrderedDictionary * _volumeManageDict; // +0x10
}
- (id)init;
- (void)setVolume:(long long)arg1 business:(long long)arg2;
- (void)unSetVolume:(long long)arg1;
- (void)unSetAllVolumesExcept:(long long)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)manageVolumesPriority;
- (void)printVolumes;
- (int)volume;
- (id)preferVolumeInfo;
- (int)defaultVolume;
- (void)setDefaultVolume:(int)arg1;
- (id)volumeManageDict;
- (void)setVolumeManageDict:(id)arg1;
- (void).cxx_destruct;
@end
