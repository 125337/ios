@interface MMFinderLiveModeCacheItem : NSObject <PBCoding>
{
    MMFinderLiveModeVideoSubItem * _videoSubItem; // +0x8
    MMFinderLiveModeAudioSubItem * _audioSubItem; // +0x10
    MMFinderLiveModeGameSubItem * _gameSubItem; // +0x18
}
+ (void)PBArrayAdd_videoSubItem;
+ (void)PBArrayAdd_audioSubItem;
+ (void)PBArrayAdd_gameSubItem;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)videoSubItem;
- (void)setVideoSubItem:(id)arg1;
- (id)audioSubItem;
- (void)setAudioSubItem:(id)arg1;
- (id)gameSubItem;
- (void)setGameSubItem:(id)arg1;
- (void).cxx_destruct;
@end
