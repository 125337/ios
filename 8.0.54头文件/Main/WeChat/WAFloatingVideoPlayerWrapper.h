@interface WAFloatingVideoPlayerWrapper : WAFloatingViewBaseWrapper
{
    BOOL _originEnablePageGesture; // +0x8
    BOOL _originEnablePageGestureFull; // +0x9
    BOOL _originShowDanmu; // +0xa
    BOOL _originHideCoverMask; // +0xb
    unsigned int _originControlParam; // +0xc
    id <WAStreamPlayerInterface> _videoPlayerView; // +0x10
}
- (void)updateFromDic:(id)arg1;
- (id)videoPlayerView;
- (void)setParams;
- (void)resetParams;
- (id)playerView;
- (void)pause;
- (void)play;
- (void)stop;
- (BOOL)canFloat;
- (BOOL)isLoading;
- (id)getCurrentSnapShotImage;
- (id)videoURL;
- (BOOL)originEnablePageGesture;
- (void)setOriginEnablePageGesture:(BOOL)arg1;
- (BOOL)originEnablePageGestureFull;
- (void)setOriginEnablePageGestureFull:(BOOL)arg1;
- (BOOL)originShowDanmu;
- (void)setOriginShowDanmu:(BOOL)arg1;
- (unsigned int)originControlParam;
- (void)setOriginControlParam:(unsigned int)arg1;
- (BOOL)originHideCoverMask;
- (void)setOriginHideCoverMask:(BOOL)arg1;
- (void)setVideoPlayerView:(id)arg1;
- (void).cxx_destruct;
@end

