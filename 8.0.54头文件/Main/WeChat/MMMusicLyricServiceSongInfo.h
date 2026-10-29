@interface MMMusicLyricServiceSongInfo : NSObject
{
    BOOL _manualOffsetControlEnabled; // +0x8
    int _currentLyricIndex; // +0xc
    NSString * _songId; // +0x10
    MMMusicLyricResolver * _resolver; // +0x18
    long long _observerCount; // +0x20
}
- (id)initWithSongId:(id)arg1;
- (void)setupLyrics:(id)arg1;
- (id)songId;
- (void)setSongId:(id)arg1;
- (id)resolver;
- (void)setResolver:(id)arg1;
- (int)currentLyricIndex;
- (void)setCurrentLyricIndex:(int)arg1;
- (long long)observerCount;
- (void)setObserverCount:(long long)arg1;
- (BOOL)manualOffsetControlEnabled;
- (void)setManualOffsetControlEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

