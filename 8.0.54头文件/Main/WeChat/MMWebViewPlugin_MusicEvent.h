@interface MMWebViewPlugin_MusicEvent : MMWebViewPluginBase <IMusicPlayerExt>
{
    BOOL _isNotifyMusicStateChange; // +0x8
    BOOL _isSeeking; // +0x9
    NSString * _curMusicId; // +0x10
    NSString * _curMusicSrc; // +0x18
    NSString * _curMusicSrcId; // +0x20
    NSString * _curAlbumId; // +0x28
}
- (void)dealloc;
- (id)init;
- (void)resetObserveValues;
- (void)beginObserveMusicStateChange:(id)arg1 musicSrc:(id)arg2 srcId:(id)arg3;
- (void)beginObserveMusicStateChangeForAlbumId:(id)arg1;
- (id)getPlayerState;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)onPlayMusic:(id)arg1 fromScene:(long long)arg2;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)sendBackgroundStateChangeEvent:(id)arg1;
- (BOOL)isUrl:(id)arg1 HostEqualTo:(id)arg2;
- (id)filterStrCommaSymbol:(id)arg1;
- (id)curMusicId;
- (void)setCurMusicId:(id)arg1;
- (id)curMusicSrc;
- (void)setCurMusicSrc:(id)arg1;
- (id)curMusicSrcId;
- (void)setCurMusicSrcId:(id)arg1;
- (id)curAlbumId;
- (void)setCurAlbumId:(id)arg1;
- (BOOL)isNotifyMusicStateChange;
- (void)setIsNotifyMusicStateChange:(BOOL)arg1;
- (BOOL)isSeeking;
- (void)setIsSeeking:(BOOL)arg1;
- (void).cxx_destruct;
@end

