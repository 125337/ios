@interface MMBGMSelectedTabTableLyricCell : MMBGMSelectedTabTableBaseCell <WCVideoProducerViewModelExt>
{
    BOOL _isLoading; // +0x8
    MMBGMCoverImageView * _coverImageView; // +0x10
    MMBGMSelectedMarqueeTextView * _songSingerMarqueeView; // +0x18
    MMBGMSelectedMarqueeTextView * _lyricsMarqueeView; // +0x20
    UIImageView * _checkImageView; // +0x28
    WCProgressCircleView * _progressLoadingView; // +0x30
    UIView * _separator; // +0x38
}
+ (id)cellID;
+ (id)lyricsWithMusicInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setIsCellSelected:(BOOL)arg1;
- (void)updateWithMusicData:(id)arg1 config:(id)arg2 globalConfig:(id)arg3 sourceTabType:(unsigned long long)arg4;
- (id)musicId;
- (id)musicIdForMusicData:(id)arg1;
- (void)initView;
- (void)initCoverImageView;
- (void)initSongSingerMarqueeView;
- (void)initLyricsMarqueeView;
- (void)initCheckImageView;
- (void)initProgressLoadingView;
- (void)initSeparator;
- (void)layoutSubviews;
- (id)songSingerDisplayAttributedStringWithQuery:(id)arg1;
- (id)lyricsDisplayAttributedString;
- (void)videoProducerViewModel:(id)arg1 changeMusicInfoWillStart:(id)arg2;
- (void)videoProducerViewModel:(id)arg1 changeMusicInfo:(id)arg2 progress:(double)arg3;
- (void)videoProducerViewModel:(id)arg1 changeMusicInfo:(id)arg2 completeSuccess:(BOOL)arg3;
- (void)updateAccessibility;
- (unsigned long long)accessibilityTraits;
- (id)genAccessibilityLabel;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)songSingerMarqueeView;
- (void)setSongSingerMarqueeView:(id)arg1;
- (id)lyricsMarqueeView;
- (void)setLyricsMarqueeView:(id)arg1;
- (id)checkImageView;
- (void)setCheckImageView:(id)arg1;
- (id)progressLoadingView;
- (void)setProgressLoadingView:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (void).cxx_destruct;
@end
