@interface VoipRecentStatusFinderVideoView : UIView <VoipRecentStatusProperties, VoipRecentStatusFinderBackgroundProtocol>
{
    BOOL _shouldPlaySound; // +0x8
    BOOL _isSoundBtnHidden; // +0x9
    BOOL _isVisable; // +0xa
    id /* block */ _didClickSoundButtonCallback; // +0x10
    WCFinderSimplePlayerView * _contentsView; // +0x18
    UIView * _soundView; // +0x20
    UIImageView * _soundIconImageView; // +0x28
    VoipRecentStatusFadeView * _topFadeView; // +0x30
    VoipRecentStatusFadeView * _bottomFadeView; // +0x38
}
- (id)initWithWCFinderDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)onSilenceViewClickWithSender:(id)arg1;
- (void)onTerminate;
- (BOOL)shouldPlaySound;
- (void)setShouldPlaySound:(BOOL)arg1;
- (BOOL)isSoundBtnHidden;
- (void)setIsSoundBtnHidden:(BOOL)arg1;
- (BOOL)isVisable;
- (void)setIsVisable:(BOOL)arg1;
- (id /* block */)didClickSoundButtonCallback;
- (void)setDidClickSoundButtonCallback:(id /* block */)arg1;
- (id)contentsView;
- (void)setContentsView:(id)arg1;
- (id)soundView;
- (void)setSoundView:(id)arg1;
- (id)soundIconImageView;
- (void)setSoundIconImageView:(id)arg1;
- (id)topFadeView;
- (void)setTopFadeView:(id)arg1;
- (id)bottomFadeView;
- (void)setBottomFadeView:(id)arg1;
- (void).cxx_destruct;
@end

