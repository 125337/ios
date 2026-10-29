@interface WCFinderJumpInfoPagLinkIconView : WCFinderJumpInfoView <WCFinderNetPagViewDelegate, WCFinderJumpInfoInteractable>
{
    id <WCFinderJumpInfoInteractDelegate> _interactDelegate; // +0x8
    WCFinderNetPagView * _pagView; // +0x10
    UILabel * _wordingLabel; // +0x18
    MMWebImageView * _rightIconView; // +0x20
    double _maxWidth; // +0x28
    unsigned long long _playbackState; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)updateContentLayout;
- (void)onTap;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)onVideoPlayStateChanged:(BOOL)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)didMoveToWindow;
- (void)setHidden:(BOOL)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)updatePlayback;
- (void)onFinderPagViewDidLoad:(BOOL)arg1 path:(id)arg2;
- (id)interactDelegate;
- (void)setInteractDelegate:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (id)rightIconView;
- (void)setRightIconView:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (unsigned long long)playbackState;
- (void)setPlaybackState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
