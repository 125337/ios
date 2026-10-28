@interface MMListenGetLyricService : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _musicKey2GetLyricResponseItem; // +0x8
    NSMutableDictionary * _musicKey2GetLyricResponseTime; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)sendGetListenLyricWithSongId:(id)arg1 musicInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)sendGetListenItemWithSongId:(id)arg1 musicInfo:(id)arg2 completion:(id /* block */)arg3;
- (id)lyricItemWithListenId:(id)arg1 listenGetLyricResponse:(id)arg2;
- (id)musicKey2GetLyricResponseItem;
- (id)musicKey2GetLyricResponseTime;
- (id)genMusicKeyWithMusicInfo:(id)arg1;
- (void)setMusicKey2GetLyricResponseItem:(id)arg1;
- (void)setMusicKey2GetLyricResponseTime:(id)arg1;
- (void).cxx_destruct;
@end
