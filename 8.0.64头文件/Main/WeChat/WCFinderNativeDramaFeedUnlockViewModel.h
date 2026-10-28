@interface WCFinderNativeDramaFeedUnlockViewModel : NSObject
{
    unsigned long long _dramaID; // +0x8
    unsigned long long _episodeID; // +0x10
    long long _episodeIndex; // +0x18
    NSString * _coverUrl; // +0x20
}
- (unsigned long long)dramaID;
- (void)setDramaID:(unsigned long long)arg1;
- (unsigned long long)episodeID;
- (void)setEpisodeID:(unsigned long long)arg1;
- (long long)episodeIndex;
- (void)setEpisodeIndex:(long long)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (void).cxx_destruct;
@end
