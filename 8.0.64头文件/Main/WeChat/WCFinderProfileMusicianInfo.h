@interface WCFinderProfileMusicianInfo : NSObject <PBCoding>
{
    BOOL _hasPlaylist; // +0x8
    FinderMusicBaikeSummary * _summary; // +0x10
}
+ (void)PBArrayAdd_summary;
+ (void)PBArrayAdd_hasPlaylist;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)summary;
- (void)setSummary:(id)arg1;
- (BOOL)hasPlaylist;
- (void)setHasPlaylist:(BOOL)arg1;
- (void).cxx_destruct;
@end
