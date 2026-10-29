@interface EditVideoBGMCommon : MMUserService <MMServiceProtocol>
{
    MMLRUCache * _urlToFilePathMap; // +0x8
}
+ (void)downloadMusic:(id)arg1 completion:(id /* block */)arg2;
+ (id)genLyricsFromLrcString:(id)arg1;
+ (id)setAllText:(id)arg1 andSpcifiStr:(id)arg2 withColor:(id)arg3 specifiStrFont:(id)arg4;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)_saveMap:(id)arg1;
- (id)_restoreMap;
- (id)getMusicPath:(id)arg1;
- (id)getMusicPathWithMusicData:(id)arg1;
- (id)saveMusicPathWithMusicData:(id)arg1 components:(id)arg2;
- (BOOL)hasDownloadData:(id)arg1;
- (void)cachedMusicData:(id)arg1 WithFullPath:(id)arg2;
- (id)urlToFilePathMap;
- (void)setUrlToFilePathMap:(id)arg1;
- (void).cxx_destruct;
@end
