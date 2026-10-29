@interface MMMusicPickerContentView : MMUIView
{
    BOOL _isFromBgmSearch; // +0x8
    UIImageView * _musicLogoView; // +0x10
    WCStoryLyricWaveView * _soundShapeView; // +0x18
    WCFlowLyricsView * _flowLyricsView; // +0x20
    MMUIActivityIndicatorView * _loadingView; // +0x28
    UILabel * _songNameAndSingerNameView; // +0x30
    RecommendedMusicInfo * _musicInfo; // +0x38
    NSString * _musicLogoName; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 musicLogoName:(id)arg2;
- (void)initViews;
- (void)addMusicLogo;
- (void)addSoundShapeView;
- (void)addFlowLyricsView;
- (void)addSongNameAndSingerNameView;
- (void)stopLoading;
- (void)setSelectState:(BOOL)arg1;
- (void)readyToPlay;
- (void)replay;
- (void)replayFromFlowInMs:(unsigned long long)arg1;
- (void)startLoading;
- (BOOL)isAnimating;
- (void)setContentViewData:(id)arg1 withFromeBgmSearch:(BOOL)arg2;
- (id)musicLogoView;
- (void)setMusicLogoView:(id)arg1;
- (id)soundShapeView;
- (void)setSoundShapeView:(id)arg1;
- (id)flowLyricsView;
- (void)setFlowLyricsView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)songNameAndSingerNameView;
- (void)setSongNameAndSingerNameView:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (BOOL)isFromBgmSearch;
- (void)setIsFromBgmSearch:(BOOL)arg1;
- (id)musicLogoName;
- (void)setMusicLogoName:(id)arg1;
- (void).cxx_destruct;
@end

