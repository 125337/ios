@interface TingTapePlayingInfo : NSObject
{
    int _status; // +0x8
    double _currentTime; // +0x10
    NSString * _coverUrl; // +0x18
    TingItem * _playingItem; // +0x20
    TingTapeItem * _tapeItem; // +0x28
}
- (id)initWithTapeSnapshot:(id)arg1;
- (id)clientId;
- (BOOL)isPlaying;
- (BOOL)isPlayingAudio;
- (id)playingCategoryItem;
- (id)title;
- (id)desc;
- (int)status;
- (void)setStatus:(int)arg1;
- (double)currentTime;
- (void)setCurrentTime:(double)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)playingItem;
- (void)setPlayingItem:(id)arg1;
- (id)tapeItem;
- (void)setTapeItem:(id)arg1;
- (void).cxx_destruct;
@end
