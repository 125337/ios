@interface ShakeMusicResultMediaView : MMUIView
{
    MMMusicInfo * _musicInfo; // +0x8
    TingLiteMediaView * _mediaView; // +0x10
}
- (id)initWithMusicInfo:(id)arg1;
- (void)setupSubviews;
- (void)stop;
- (void)loadDataWithOpenScene:(unsigned long long)arg1;
- (void)enterPlayerWithOpenScene:(unsigned long long)arg1 viewController:(id)arg2;
- (void)layoutMediaViewWithFrame:(CGRect)arg1 openScene:(unsigned long long)arg2;
- (void)clearPlayer;
- (void)fillMusicShareItemWithMVPlayerData:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (void).cxx_destruct;
@end
