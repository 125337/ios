@interface FavAudioPlayerController : MMUIView <IFavAudioPlayerExt>
{
    FavAudioInfo * m_audioInfo; // +0x8
    UIView * m_backgroundView; // +0x10
    BOOL m_bBtnForPlay; // +0x18
    UILabel * m_durationLabel; // +0x20
    unsigned int m_uiVoiceTime; // +0x28
    UIImageView * playingImageView; // +0x30
}
- (id)initWithFavAudioInfo:(id)arg1;
- (void)initView;
- (void)setM_audioInfo:(id)arg1;
- (void)layoutSubviewsWithDefault;
- (void)layoutSubviews;
- (void)initBtn;
- (void)initDurationLabel;
- (id)getDuration:(int)arg1;
- (void)updateBtnImage;
- (void)showNormalView;
- (void)showPlayingView;
- (BOOL)isCurrentControllForPlayer;
- (void)onPlayBtnClick;
- (void)play;
- (void)stop;
- (void)OnBeginPlay:(id)arg1;
- (void)OnEndPlay:(id)arg1;
- (void)OnPlayError:(id)arg1;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onTouchBegin:(id)arg1;
- (void)onTouchEnd:(id)arg1;
- (void)setSelected;
- (void)setUnSelected;
- (void)onClickObject;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)m_audioInfo;
- (void).cxx_destruct;
@end
