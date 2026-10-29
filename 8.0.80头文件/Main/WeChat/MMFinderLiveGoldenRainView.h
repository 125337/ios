@interface MMFinderLiveGoldenRainView : UIView <PAGViewListener>
{
    BOOL _isPlaying; // +0x8
    id /* block */ _onPlayFinished; // +0x10
    id /* block */ _onOrientationMismatch; // +0x18
    PAGView * _pagView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)pagView;
- (void)layoutSubviews;
- (void)playWithPAGFile:(id)arg1;
- (void)replay;
- (void)stopAndHide;
- (void)startPlayback;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (BOOL)isPlaying;
- (id /* block */)onPlayFinished;
- (void)setOnPlayFinished:(id /* block */)arg1;
- (id /* block */)onOrientationMismatch;
- (void)setOnOrientationMismatch:(id /* block */)arg1;
- (void)setPagView:(id)arg1;
- (void).cxx_destruct;
@end
