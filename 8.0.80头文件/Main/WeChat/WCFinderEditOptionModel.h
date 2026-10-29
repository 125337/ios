@interface WCFinderEditOptionModel : NSObject
{
    BOOL _forbiddenFinderLongVideoEntry; // +0x8
    RecommendedMusicInfo * _patMusicInfo; // +0x10
    unsigned long long _enterScene; // +0x18
}
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (BOOL)forbiddenFinderLongVideoEntry;
- (void)setForbiddenFinderLongVideoEntry:(BOOL)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
