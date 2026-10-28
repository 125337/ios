@interface WCAdSocialLikeCheerPlayerView : MMUIView <PAGViewListener>
{
    BOOL _bTimelineScene; // +0x8
    id <WCAdSocialLikeCheerPlayerViewDelegate> _delegate; // +0x10
    WCAdSocialLikeInfo * _adSocialLikeInfo; // +0x18
    WCDataItem * _dataItem; // +0x20
    PAGView * _cheerPlayer; // +0x28
    UIView * _cheerPlayerContainer; // +0x30
    PAGView * _attractingPlayer; // +0x38
    PAGView * _fireworkCheerAttractingView; // +0x40
    CGRect _likeBottomFrame; // +0x48
    CGRect _referenceFrame; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 adSocialLikeInfo:(id)arg2 dataItem:(id)arg3 bTimelineScene:(BOOL)arg4 likeBottomFrame:(CGRect)arg5 referenceFrame:(CGRect)arg6;
- (void)setFrame:(CGRect)arg1 likeBottomFrame:(CGRect)arg2 referenceFrame:(CGRect)arg3;
- (void)play;
- (void)stop;
- (BOOL)isPlaying;
- (CGRect)calcPlayerFrameWithPagWidth:(double)arg1 pagHeight:(double)arg2 rangeFrame:(CGRect)arg3 offsetY:(double)arg4;
- (void)tryResumePlayerViewFromCache;
- (void)createPlayerView;
- (void)resumeOrCreatePlayerView;
- (id)fetchPAGFilePath;
- (id)socialLikeLogic;
- (id)fetchAttractingPAGFile;
- (BOOL)generateAttractingPlayer;
- (void)cleanUpAttractingPlayer;
- (void)configAttractingPlayer;
- (void)updateAttractingPlayerFrame;
- (void)tryToResumeAttractingPlayer;
- (void)playAttractingAnimation;
- (void)hideAttractingView:(BOOL)arg1;
- (id)fetchAttractingIconPAGFile;
- (void)generateAttractingIconPlayer;
- (id)fetchAttractingIconPlayer;
- (void)cleanUpAttractingIconPlayer;
- (void)playAttractingIconAnimation:(BOOL)arg1 uponLikeView:(id)arg2;
- (void)onAnimationStart:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)reportAttractingAnimationPlayedWithErrorCode:(int)arg1;
- (void)playFireworkCheerAttracting;
- (void)initFireworkCheerAttractingView;
- (void)updateFireworkCheerAttractingViewFrame;
- (void)tryToResumeFireworkCheerAttractingView;
- (void)cleanUpFireworkCheerAttractingView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)adSocialLikeInfo;
- (void)setAdSocialLikeInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)bTimelineScene;
- (void)setBTimelineScene:(BOOL)arg1;
- (CGRect)likeBottomFrame;
- (void)setLikeBottomFrame:(CGRect)arg1;
- (CGRect)referenceFrame;
- (void)setReferenceFrame:(CGRect)arg1;
- (id)cheerPlayer;
- (void)setCheerPlayer:(id)arg1;
- (id)cheerPlayerContainer;
- (void)setCheerPlayerContainer:(id)arg1;
- (id)attractingPlayer;
- (void)setAttractingPlayer:(id)arg1;
- (id)fireworkCheerAttractingView;
- (void)setFireworkCheerAttractingView:(id)arg1;
- (void).cxx_destruct;
@end
