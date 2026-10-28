@interface WCAdSocialLikeLogic : WCAdvertiseOperationLogicBase <WCAdFireworkCheerAnimationViewDelegate>
{
    BOOL _attractingViewPlayed; // +0x8
    BOOL _attractingViewErrorReported; // +0x9
    BOOL _fireworkCheerAttractingPlayed; // +0xa
    BOOL _fireworkCheerHideButtonIconPendingFlag; // +0xb
    BOOL _fireworkCheerLikePendingFlag; // +0xc
    BOOL _fireworkCheerCommentAnimationPendingFlag; // +0xd
    BOOL _mainMediaPlayingFlag; // +0xe
    int _continuousLikeState; // +0x10
    int _continuousLikeCount; // +0x14
    UIView * _playerViewCache; // +0x18
    UIView * _attractingViewCache; // +0x20
    UIView * _attractingIconCache; // +0x28
    UIView * _bannerAnimationViewCache; // +0x30
    PAGView * _fireworkCheerAttractingViewCache; // +0x38
    PAGView * _fireworkCheerLikeIconCache; // +0x40
    WCAdPagView * _patIconPagCache; // +0x48
    WCAdPagView * _patIconPagDarkCache; // +0x50
    WCDataItem * _dataItem; // +0x58
    unsigned long long _contentItemScene; // +0x60
    WCAdFireworkCheerAnimationView * _fullScreenAnimationView; // +0x68
}
+ (id)getSocialLikeLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)dealloc;
- (void)continuousLike;
- (void)continuousLikeCancel;
- (void)exitContinuousLikingState;
- (void)notifyContinuousLikeStateChanged;
- (void)notifyContinuousLikeCountChanged;
- (BOOL)playFireworkCheerAnimation;
- (BOOL)isFireworkCheerAnimationPlaying;
- (void)fireworkCheerPendingLike;
- (void)notifyFireworkCheerRealLike;
- (void)fireworkCheerRealLike;
- (void)notifyFireworkCheerCommentAnimationStarted;
- (BOOL)isFireworkCheerCommentPendingToAnimation;
- (void)mainMediaPlay;
- (void)mainMediaStop;
- (void)notifyMainMediaPlayStateChanged;
- (BOOL)isMainMediaPlaying;
- (BOOL)playFullScreenAnimation:(id)arg1 canCloseDelayTime:(double)arg2 vibrateDelayTime:(double)arg3;
- (void)onFireworkCheerAnimationFinished:(id)arg1;
- (id)playerViewCache;
- (void)setPlayerViewCache:(id)arg1;
- (BOOL)attractingViewPlayed;
- (void)setAttractingViewPlayed:(BOOL)arg1;
- (id)attractingViewCache;
- (void)setAttractingViewCache:(id)arg1;
- (id)attractingIconCache;
- (void)setAttractingIconCache:(id)arg1;
- (BOOL)attractingViewErrorReported;
- (void)setAttractingViewErrorReported:(BOOL)arg1;
- (id)bannerAnimationViewCache;
- (void)setBannerAnimationViewCache:(id)arg1;
- (int)continuousLikeState;
- (void)setContinuousLikeState:(int)arg1;
- (int)continuousLikeCount;
- (void)setContinuousLikeCount:(int)arg1;
- (BOOL)fireworkCheerAttractingPlayed;
- (void)setFireworkCheerAttractingPlayed:(BOOL)arg1;
- (id)fireworkCheerAttractingViewCache;
- (void)setFireworkCheerAttractingViewCache:(id)arg1;
- (id)fireworkCheerLikeIconCache;
- (void)setFireworkCheerLikeIconCache:(id)arg1;
- (BOOL)fireworkCheerHideButtonIconPendingFlag;
- (void)setFireworkCheerHideButtonIconPendingFlag:(BOOL)arg1;
- (id)patIconPagCache;
- (void)setPatIconPagCache:(id)arg1;
- (id)patIconPagDarkCache;
- (void)setPatIconPagDarkCache:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (BOOL)fireworkCheerLikePendingFlag;
- (void)setFireworkCheerLikePendingFlag:(BOOL)arg1;
- (BOOL)fireworkCheerCommentAnimationPendingFlag;
- (void)setFireworkCheerCommentAnimationPendingFlag:(BOOL)arg1;
- (BOOL)mainMediaPlayingFlag;
- (void)setMainMediaPlayingFlag:(BOOL)arg1;
- (id)fullScreenAnimationView;
- (void)setFullScreenAnimationView:(id)arg1;
- (void).cxx_destruct;
@end
