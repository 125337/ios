@interface FavRecordTingAudioNodeView : FavRecordLeftThumbRightLabelNodeView <MMImageLoaderObserver>
{
    TingSharePlayButton * _playButton; // +0x78
}
- (id)playButton;
- (void)addContentSubView;
- (void)updateContentSubview;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)setPlayButton:(id)arg1;
- (void).cxx_destruct;
@end

