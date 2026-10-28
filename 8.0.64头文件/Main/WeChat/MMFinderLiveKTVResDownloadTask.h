@interface MMFinderLiveKTVResDownloadTask : NSObject
{
    BOOL _needsSongResources; // +0x8
    MMFinderLiveKTVSongItem * _songItem; // +0x10
    NSArray * _necessaryResources; // +0x18
    NSMutableDictionary * _necessaryResDownloadResultDict; // +0x20
}
- (id)init;
- (BOOL)recordNecessaryRes:(unsigned int)arg1 downloadResult:(int)arg2;
- (id)getNecessaryResDownloadResult:(unsigned int)arg1;
- (BOOL)isResourceNeccessary:(unsigned int)arg1;
- (id)songItem;
- (void)setSongItem:(id)arg1;
- (id)necessaryResources;
- (void)setNecessaryResources:(id)arg1;
- (BOOL)needsSongResources;
- (void)setNeedsSongResources:(BOOL)arg1;
- (id)necessaryResDownloadResultDict;
- (void)setNecessaryResDownloadResultDict:(id)arg1;
- (void).cxx_destruct;
@end
