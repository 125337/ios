@interface WCFinderLiveStarterLiveModeCacheItem : NSObject <PBCoding>
{
    unsigned long long _liveMode; // +0x8
    WCFinderLiveStarterLiveModeVideoSubItem * _videoSubItem; // +0x10
    WCFinderLiveStarterLiveModeAudioSubItem * _audioSubItem; // +0x18
    WCFinderLiveStarterLiveModeGameSubItem * _gameSubItem; // +0x20
    WCFinderLiveStarterLiveModeSubItem * _ktvSubItem; // +0x28
}
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_videoSubItem;
+ (void)PBArrayAdd_audioSubItem;
+ (void)PBArrayAdd_gameSubItem;
+ (void)PBArrayAdd_ktvSubItem;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned long long)liveMode;
- (void)setLiveMode:(unsigned long long)arg1;
- (id)videoSubItem;
- (void)setVideoSubItem:(id)arg1;
- (id)audioSubItem;
- (void)setAudioSubItem:(id)arg1;
- (id)gameSubItem;
- (void)setGameSubItem:(id)arg1;
- (id)ktvSubItem;
- (void)setKtvSubItem:(id)arg1;
- (void).cxx_destruct;
@end

