@interface MMMusicLyricsAlbumMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    NSMutableArray * m_arrMusicItems; // +0x8
    NSString * m_nsLyricsRootPath; // +0x10
    NSString * m_nsAlbumCoverRootPath; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)GetLyricsAndAlbumCoverByMusicInfo:(id)arg1;
- (id)getLyricFileName:(id)arg1 AndSinger:(id)arg2;
- (id)getAlbumCoverName:(id)arg1 AndSinger:(id)arg2;
- (id)getLyricsFromFile:(id)arg1;
- (BOOL)saveLyricsToFile:(id)arg1 FilePath:(id)arg2;
- (BOOL)saveAlbumCoverToFile:(id)arg1 FilePath:(id)arg2;
- (unsigned long long)indexOfMusicByWeUrl:(id)arg1;
- (BOOL)GetLyricsAndAlbumFromSvr:(id)arg1;
- (void)handleGetLyricsAndAlbumResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
