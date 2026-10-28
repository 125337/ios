@interface TextStateMVPlayerView : UIView <MMMVPlayerDelegate, TextStateBaseMediaView>
{
    BOOL _startPlayerAfterLoad; // +0x8
    id <TextStateMVPlayerViewDelegate> _delegate; // +0x10
    MMMVPlayer * _mvPlayer; // +0x18
    MMMusicVideoStatusOpenParams * _openParams; // +0x20
    UIEdgeInsets _lyricViewInsets; // +0x28
}
- (id)initWithOpenParams:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)playerView;
- (id)lyricView;
- (void)configurateSubviews;
- (void)layoutSubviews;
- (void)loadMvModel:(id)arg1 inputParamters:(id)arg2;
- (void)fillImformationIntoMvModel:(id)arg1 inputParamters:(id)arg2;
- (void)fetchDataItemWithOpenParams:(id)arg1;
- (void)fetchDataItemWithOpenParams:(id)arg1 completion:(id /* block */)arg2;
- (id)generateMvModelFromOpenParams:(id)arg1;
- (double)fullScreenAspectRatio;
- (double)mediaAspectRatio;
- (void)startPlayMedia;
- (void)pausePlayMedia;
- (void)pausePlayMediaVideoStream;
- (BOOL)isMuted;
- (void)setMuted:(BOOL)arg1;
- (void)MVPlayer:(id)arg1 onMusicProgressUpdate:(double)arg2 totalDuration:(double)arg3;
- (void)MVPlayer:(id)arg1 onMusicStateChanged:(unsigned long long)arg2 musicInfo:(id)arg3 errorInfo:(id)arg4;
- (void)MVPlayer:(id)arg1 onInnerMusicStateChanged:(unsigned long long)arg2 musicInfo:(id)arg3 errorInfo:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mvPlayer;
- (void)setMvPlayer:(id)arg1;
- (id)openParams;
- (void)setOpenParams:(id)arg1;
- (BOOL)startPlayerAfterLoad;
- (void)setStartPlayerAfterLoad:(BOOL)arg1;
- (UIEdgeInsets)lyricViewInsets;
- (void)setLyricViewInsets:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end
