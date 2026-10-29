@interface WCFinderMinimizePhotoContentView : WCFinderMinimizeDisplayContentBaseView <WCFinderBGMPlayerDelegate>
{
    BOOL _needResetSeek; // +0x30
    WCFinderBGMPlayer * _bgPlayer; // +0x38
    UIView * _contentImageView; // +0x40
    id /* block */ _playerGenerator; // +0x48
    long long _currentIdx; // +0x50
    UIView * _currentView; // +0x58
    CGSize _originSize; // +0x60
}
- (void)didMoveToWindow;
- (void)dealloc;
- (void)cleanUp;
- (void)setContentImageView:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setBgPlayer:(id)arg1;
- (void)pausePlay;
- (void)resumePlay;
- (id)animatingSnapView;
- (BOOL)beTakeOverAudioModel;
- (void)onBGMPlayerPlayToEnd:(id)arg1;
- (void)onBGMPlayerDidPlay:(id)arg1;
- (void)onBGMPlayerDidPause:(id)arg1;
- (id)bgPlayer;
- (CGSize)originSize;
- (void)setOriginSize:(CGSize)arg1;
- (id)contentImageView;
- (id /* block */)playerGenerator;
- (void)setPlayerGenerator:(id /* block */)arg1;
- (long long)currentIdx;
- (void)setCurrentIdx:(long long)arg1;
- (id)currentView;
- (void)setCurrentView:(id)arg1;
- (BOOL)needResetSeek;
- (void)setNeedResetSeek:(BOOL)arg1;
- (void).cxx_destruct;
@end
