@interface ShakeMusicResultMediaView : MMUIView
{
    MMMusicInfo * _musicInfo; // +0x8
    TingLiteMediaView * _mediaView; // +0x10
}
- (id)initWithMusicInfo:(id)arg1;
- (void)setupSubviews;
- (void)stop;
- (void)loadData:(id)arg1 musicInfo:(id)arg2 mvModel:(id)arg3 openScene:(unsigned long long)arg4;
- (void)enterPlayerWithOpenScene:(unsigned long long)arg1 musicInfo:(id)arg2 qqMusicInfo:(id)arg3 shareItem:(id)arg4 viewController:(id)arg5;
- (void)layoutMediaViewWithFrame:(CGRect)arg1 openScene:(unsigned long long)arg2;
- (void)clearPlayer;
- (void)fillMusicShareItemWithMVPlayerData:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (void).cxx_destruct;
@end

