@interface WCFinderPostDirectUploadConfig : NSObject
{
    unsigned long long _experimentGroup; // +0x8
    long long _wifiSmallFileMaxFileSizeBytes; // +0x10
    long long _serverMaxFileSizeBytes; // +0x18
    long long _serverMaxDurationMs; // +0x20
    NSSet * _serverIncompatibleCodecBlacklist; // +0x28
}
- (id)initWithExperimentGroup:(unsigned long long)arg1 wifiSmallFileMaxFileSizeBytes:(long long)arg2 serverMaxFileSizeBytes:(long long)arg3 serverMaxDurationMs:(long long)arg4 serverIncompatibleCodecBlacklist:(id)arg5;
- (id)description;
- (unsigned long long)experimentGroup;
- (long long)wifiSmallFileMaxFileSizeBytes;
- (long long)serverMaxFileSizeBytes;
- (long long)serverMaxDurationMs;
- (id)serverIncompatibleCodecBlacklist;
- (void).cxx_destruct;
@end
