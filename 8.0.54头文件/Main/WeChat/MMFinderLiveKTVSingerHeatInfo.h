@interface MMFinderLiveKTVSingerHeatInfo : MMFinderLiveKTVHeatInfo
{
    unsigned int _boardType; // +0x8
    NSString * _sdkUserId; // +0x10
    FinderLiveContact * _finderLiveContact; // +0x18
    NSString * _boardKey; // +0x20
}
- (unsigned long long)liveHeatValue;
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (id)finderLiveContact;
- (void)setFinderLiveContact:(id)arg1;
- (id)boardKey;
- (void)setBoardKey:(id)arg1;
- (unsigned int)boardType;
- (void)setBoardType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

