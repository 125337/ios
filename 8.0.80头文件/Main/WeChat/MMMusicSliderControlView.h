@interface MMMusicSliderControlView : UIView <IMusicPlayerExt>
{
    MMMusicSlider * _slider; // +0x8
    UIColor * _frontgroundColor; // +0x10
    UIColor * _backgroundColor; // +0x18
    MMUILabel * _currentTimeLabel; // +0x20
    MMUILabel * _totalTimeLabel; // +0x28
    MMTimer * _musicProgressTimer; // +0x30
    NSString * _curMusicID; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2 frontgroundColor:(id)arg3;
- (void)initView;
- (void)updateMusicProgress;
- (void)startMusicProgressTimer;
- (void)stopMusicProgressTimer;
- (void)onSliderScrubbBegin;
- (void)onSliderChange;
- (void)onSliderScrubbEnd;
- (void)updateTotalTimeLabel;
- (void)updateSlider:(id)arg1;
- (void)onMusicPlayStatusChanged;
- (BOOL)isMusicEmpty;
- (id)slider;
- (void)setSlider:(id)arg1;
- (id)frontgroundColor;
- (void)setFrontgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)currentTimeLabel;
- (void)setCurrentTimeLabel:(id)arg1;
- (id)totalTimeLabel;
- (void)setTotalTimeLabel:(id)arg1;
- (id)musicProgressTimer;
- (void)setMusicProgressTimer:(id)arg1;
- (id)curMusicID;
- (void)setCurMusicID:(id)arg1;
- (void).cxx_destruct;
@end
