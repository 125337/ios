@interface VoipRecentStatusFinderImagesView : UIView <VoipRecentStatusProperties, VoipRecentStatusFinderBackgroundProtocol>
{
    BOOL _shouldPlaySound; // +0x8
    BOOL _shouldHideSoundBtn; // +0x9
    BOOL _isVisable; // +0xa
    id /* block */ _didClickSoundButtonCallback; // +0x10
    id /* block */ _didSlideImagesCallback; // +0x18
    WCFinderDataItem * _wcFinderDataItem; // +0x20
    RecommendedMusicInfo * _musicInfo; // +0x28
    NSArray * _mediaInfos; // +0x30
    EditVideoBGMPlayer * _bgmPlayer; // +0x38
    VoipRecentStatusImagesView * _imagesView; // +0x40
    NSMutableArray * _dotViews; // +0x48
    UIView * _soundView; // +0x50
    UIImageView * _soundIconImageView; // +0x58
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
- (id /* block */)didSlideImagesCallback;
- (void)setDidSlideImagesCallback:(id /* block */)arg1;
- (id)wcFinderDataItem;
- (void)setWcFinderDataItem:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)mediaInfos;
- (void)setMediaInfos:(id)arg1;
- (id)bgmPlayer;
- (void)setBgmPlayer:(id)arg1;
- (id)imagesView;
- (void)setImagesView:(id)arg1;
- (id)dotViews;
- (void)setDotViews:(id)arg1;
- (id)soundView;
- (void)setSoundView:(id)arg1;
- (id)soundIconImageView;
- (void)setSoundIconImageView:(id)arg1;
- (void).cxx_destruct;
@end

