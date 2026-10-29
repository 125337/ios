@interface WAMemoryReleaseAction : WAReportBaseItem
{
    unsigned int _triggerMemoryEvent; // +0x8
    unsigned int _foregroundWeAppCount; // +0xc
    unsigned int _backgroundWeAppCount; // +0x10
    unsigned int _foregroundSimulatedNativeCount; // +0x14
    unsigned int _foregroundGameCount; // +0x18
    unsigned int _backgroundGameCount; // +0x1c
    unsigned int _releasePolicy; // +0x20
    unsigned int _releaseWeAppCount; // +0x24
    unsigned int _releaseSimulatedNativeCount; // +0x28
    unsigned int _releaseGameCount; // +0x2c
    unsigned int _releasePageCount; // +0x30
    unsigned int _releasePreloadPageCount; // +0x34
    unsigned int _releasePreloadWeAppCount; // +0x38
    unsigned int _releasePreloadGameCount; // +0x3c
    unsigned int _footprintMemoryPercent; // +0x40
    unsigned int _freeMemoryPercent; // +0x44
    unsigned int _backgroundSimulatedNativeCount; // +0x48
    unsigned long long _deviceTotalMemoryInBytes; // +0x50
    unsigned long long _roundedDeviceTotalMemoryInBytes; // +0x58
    unsigned long long _footprintMemoryInBytes; // +0x60
    unsigned long long _freeMemoryInBytes; // +0x68
    NSString * _foregroundWeAppAppIDs; // +0x70
    NSString * _backgroundWeAppAppIDs; // +0x78
    NSString * _foregroundGameAppIDs; // +0x80
    NSString * _backgroundGameAppIDs; // +0x88
    NSString * _foregroundSimulatedNativeAppIDs; // +0x90
    NSString * _backgroundSimulatedNativeAppIDs; // +0x98
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (unsigned int)triggerMemoryEvent;
- (void)setTriggerMemoryEvent:(unsigned int)arg1;
- (unsigned int)foregroundWeAppCount;
- (void)setForegroundWeAppCount:(unsigned int)arg1;
- (unsigned int)backgroundWeAppCount;
- (void)setBackgroundWeAppCount:(unsigned int)arg1;
- (unsigned int)foregroundSimulatedNativeCount;
- (void)setForegroundSimulatedNativeCount:(unsigned int)arg1;
- (unsigned int)foregroundGameCount;
- (void)setForegroundGameCount:(unsigned int)arg1;
- (unsigned int)backgroundGameCount;
- (void)setBackgroundGameCount:(unsigned int)arg1;
- (unsigned int)releasePolicy;
- (void)setReleasePolicy:(unsigned int)arg1;
- (unsigned int)releaseWeAppCount;
- (void)setReleaseWeAppCount:(unsigned int)arg1;
- (unsigned int)releaseSimulatedNativeCount;
- (void)setReleaseSimulatedNativeCount:(unsigned int)arg1;
- (unsigned int)releaseGameCount;
- (void)setReleaseGameCount:(unsigned int)arg1;
- (unsigned int)releasePageCount;
- (void)setReleasePageCount:(unsigned int)arg1;
- (unsigned int)releasePreloadPageCount;
- (void)setReleasePreloadPageCount:(unsigned int)arg1;
- (unsigned int)releasePreloadWeAppCount;
- (void)setReleasePreloadWeAppCount:(unsigned int)arg1;
- (unsigned int)releasePreloadGameCount;
- (void)setReleasePreloadGameCount:(unsigned int)arg1;
- (unsigned long long)deviceTotalMemoryInBytes;
- (void)setDeviceTotalMemoryInBytes:(unsigned long long)arg1;
- (unsigned long long)roundedDeviceTotalMemoryInBytes;
- (void)setRoundedDeviceTotalMemoryInBytes:(unsigned long long)arg1;
- (unsigned long long)footprintMemoryInBytes;
- (void)setFootprintMemoryInBytes:(unsigned long long)arg1;
- (unsigned int)footprintMemoryPercent;
- (void)setFootprintMemoryPercent:(unsigned int)arg1;
- (unsigned long long)freeMemoryInBytes;
- (void)setFreeMemoryInBytes:(unsigned long long)arg1;
- (unsigned int)freeMemoryPercent;
- (void)setFreeMemoryPercent:(unsigned int)arg1;
- (unsigned int)backgroundSimulatedNativeCount;
- (void)setBackgroundSimulatedNativeCount:(unsigned int)arg1;
- (id)foregroundWeAppAppIDs;
- (void)setForegroundWeAppAppIDs:(id)arg1;
- (id)backgroundWeAppAppIDs;
- (void)setBackgroundWeAppAppIDs:(id)arg1;
- (id)foregroundGameAppIDs;
- (void)setForegroundGameAppIDs:(id)arg1;
- (id)backgroundGameAppIDs;
- (void)setBackgroundGameAppIDs:(id)arg1;
- (id)foregroundSimulatedNativeAppIDs;
- (void)setForegroundSimulatedNativeAppIDs:(id)arg1;
- (id)backgroundSimulatedNativeAppIDs;
- (void)setBackgroundSimulatedNativeAppIDs:(id)arg1;
- (void).cxx_destruct;
@end
