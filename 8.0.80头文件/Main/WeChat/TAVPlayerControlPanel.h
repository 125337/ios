@interface TAVPlayerControlPanel : UIControl <TAVPlayerControlPanel>
{
    BOOL _dragging; // +0x8
    BOOL _playing; // +0x9
    id <TAVPlayerControlPanelDelegate> _delegate; // +0x10
    UIView * _backgroundView; // +0x18
    UILabel * _progressLabel; // +0x20
    UILabel * _durationLabel; // +0x28
    UISlider * _progressSlider; // +0x30
    UIButton * _playButton; // +0x38
    unsigned long long _timeStyle; // +0x40
    struct _progress; // +0x48
    struct _duration; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)didStartDragging;
- (void)didChangeTime:(id)arg1;
- (void)didEndDragging;
- (void)playAction;
- (void)handleTapRecognizer:(id)arg1;
- (id)imageWithName:(id)arg1;
- (id)playbackFormatter:(double)arg1;
- (void)updateTimeStyle;
- (void)setPlaying:(BOOL)arg1;
- (void)setProgress:(struct)arg1;
- (void)setDuration:(struct)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (struct)progress;
- (struct)duration;
- (BOOL)isDragging;
- (void)setDragging:(BOOL)arg1;
- (BOOL)isPlaying;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)progressSlider;
- (void)setProgressSlider:(id)arg1;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (unsigned long long)timeStyle;
- (void)setTimeStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
