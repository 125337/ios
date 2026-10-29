@interface MMFinderLiveSharePlayerView : MMFinderLiveBaseShareView <TextStateBaseMediaView, MMLiveCDNPlayerViewDelegate>
{
    BOOL _muted; // +0x8
    BOOL _playing; // +0x9
    BOOL _waitPlaying; // +0xa
    MMLiveCDNPlayerView * _CDNPlayerView; // +0x10
    UIView * _tipsView; // +0x18
    UILabel * _endingLabel; // +0x20
    WCFinderDataItem * _mediaDataItem; // +0x28
    id <TextStateBaseMediaViewDelegate> _textStateDelegate; // +0x30
    CGSize _currentMediaSize; // +0x38
}
- (double)mediaAspectRatio;
- (void)startPlayMedia;
- (void)pausePlayMedia;
- (void)resetPlayMedia;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 shareItem:(id)arg2;
- (void)refreshSubviews;
- (void)updateCover;
- (void)refreshStatusViewWithShareItem:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)startPlaying;
- (void)stopPlaying;
- (id)mediaURLFromDataItem:(id)arg1;
- (void)requestMediaURLWithCompletionHandler:(id /* block */)arg1;
- (void)onPlayChangeSize:(CGSize)arg1;
- (BOOL)muted;
- (BOOL)playing;
- (void)setPlaying:(BOOL)arg1;
- (CGSize)currentMediaSize;
- (void)setCurrentMediaSize:(CGSize)arg1;
- (id)CDNPlayerView;
- (void)setCDNPlayerView:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)endingLabel;
- (void)setEndingLabel:(id)arg1;
- (id)mediaDataItem;
- (void)setMediaDataItem:(id)arg1;
- (BOOL)waitPlaying;
- (void)setWaitPlaying:(BOOL)arg1;
- (id)textStateDelegate;
- (void)setTextStateDelegate:(id)arg1;
- (void).cxx_destruct;
@end
