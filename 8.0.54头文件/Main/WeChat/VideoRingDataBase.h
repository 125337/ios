@interface VideoRingDataBase : NSObject
{
    MemoryMappedKV * _soundsFileKVMap; // +0x8
    MemoryMappedKV * _defaultKVMap; // +0x10
}
- (id)getSoundsFileForFriend:(id)arg1;
- (void)setSoundsFile:(id)arg1 forUser:(id)arg2;
- (id)getLatestListendRingBackIDForFriend:(id)arg1;
- (void)setLatestListendRingBackID:(id)arg1 forUser:(id)arg2;
- (id)globalRingName;
- (void)setGlobalRingName:(id)arg1;
- (BOOL)hasAnyExclusiveRing;
- (id)soundsFileKVMap;
- (id)defaultKVMap;
- (BOOL)firstSetRingTone;
- (void)setFirstSetRingTone:(BOOL)arg1;
- (unsigned long long)lastGlobalRingNotificationFileIdentifer;
- (void)setLastGlobalRingNotificationFileIdentifer:(unsigned long long)arg1;
- (BOOL)cachedShouldShowRingBackSwitch;
- (void)setCachedShouldShowRingBackSwitch:(BOOL)arg1;
- (float)ringToneVolume;
- (void)setRingToneVolume:(float)arg1;
- (float)ringBackVolume;
- (void)setRingBackVolume:(float)arg1;
- (unsigned int)vibrateFileVersion;
- (void)setVibrateFileVersion:(unsigned int)arg1;
- (void)setSoundsFileKVMap:(id)arg1;
- (void)setDefaultKVMap:(id)arg1;
- (void).cxx_destruct;
@end

