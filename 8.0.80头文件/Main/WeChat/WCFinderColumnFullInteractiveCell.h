@interface WCFinderColumnFullInteractiveCell : UICollectionViewCell <WCFinderFeedContentMediaActionProtocol, WCFinderZoomAnimatorBehavior, WCFinderFeedContentVMExt, UIGestureRecognizerDelegate, WCFinderColumnCollectionViewBaseCellProtocol>
{
    BOOL _hasNotifiedPlayPositionMilestone; // +0x8
    id <WCFinderColumnFullInteractiveCellDelegate> _delegate; // +0x10
    WCFinderSimplePlayerView * _playerView; // +0x18
    double _playPositionMilestone; // +0x20
    WCFinderFeedContentVM * _contentVM; // +0x28
    WCFinderRichTextView * _descView; // +0x30
    WCFinderHeadImageView * _headImageView; // +0x38
    WCFinderAuthInfoIconView * _authView; // +0x40
    WCFinderHeadContactInfoView * _contactInfoView; // +0x48
    WCFinderFriendLikeCustomInfoView * _friendLikeView; // +0x50
    WCFinderRichTextView * _recommendReasonTextView; // +0x58
    UIButton * _likeButton; // +0x60
    WCFinderColumnDetailButton * _detailButton; // +0x68
    CAGradientLayer * _gradientLayer; // +0x70
    UIView * _gradientView; // +0x78
    UILongPressGestureRecognizer * _longPressGesture; // +0x80
    long long _playRateBeforeSpeedPlay; // +0x88
    MMUIButton * _pauseButton; // +0x90
}
+ (id)cellId;
+ (id)adjustContent:(id)arg1 withColorHexStr:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setup;
- (void)setupDescView;
- (void)setupPlayerView;
- (void)setupGradientView;
- (void)setupHeadImageView;
- (void)setupAuthInfoIconView;
- (void)setupContactInfoView;
- (void)setupFriendLikeView;
- (void)setupRecommendReasonTextView;
- (void)setupLikeButton;
- (void)setupDetailButton;
- (void)setupLongPressGesture;
- (void)setupPauseButton;
- (void)onClickPauseButton:(id)arg1;
- (void)updateWithContentVM:(id)arg1;
- (void)playVideoIfSupportWithSilencePlay:(BOOL)arg1;
- (void)stopVideoIfSupport;
- (void)pause;
- (BOOL)isPlaying;
- (void)setThumbImageHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (void)_updateToolBarAreaWithContentVM:(id)arg1;
- (void)onClickLikeButton:(id)arg1;
- (void)onClickDetailButton:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (BOOL)shouldEnableSpeedPlay;
- (void)lightImpact;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)_checkPlayPositionMilestoneWithPosition:(double)arg1;
- (void)contentMediaDidEndPlay:(id)arg1;
- (void)pauseByAudioInterruptionWithSource:(id)arg1;
- (void)onPlayerMuteByAudioModuleInterruptionBegin:(id)arg1;
- (void)onPlayerUnMuteByAudioModuleInterruptionEnd:(id)arg1;
- (void)onAVAudioSessionInterruption:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (BOOL)zoomAnimiatorShouldCacheSnapView;
- (id)zoomAnimatorKey;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_hideAllUIElementsForSpeedPlay;
- (void)_restoreUIElementsVisibility;
- (void)togglePlayPause;
- (BOOL)isCurrentMediaPlaying;
- (BOOL)isPaused;
- (void)updatePauseButtonState;
- (void)startSpeedPlay;
- (void)_changeSpeedPlayWithPlayRate:(long long)arg1;
- (void)stopSpeedPlayWithType:(long long)arg1;
- (void)_setPlayRate:(double)arg1 resumeMediaPlay:(BOOL)arg2;
- (long long)_getNextSpeedPlayRateFromCurrentRate:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (double)playPositionMilestone;
- (void)setPlayPositionMilestone:(double)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)descView;
- (void)setDescView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)authView;
- (void)setAuthView:(id)arg1;
- (id)contactInfoView;
- (void)setContactInfoView:(id)arg1;
- (id)friendLikeView;
- (void)setFriendLikeView:(id)arg1;
- (id)recommendReasonTextView;
- (void)setRecommendReasonTextView:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)detailButton;
- (void)setDetailButton:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (long long)playRateBeforeSpeedPlay;
- (void)setPlayRateBeforeSpeedPlay:(long long)arg1;
- (id)pauseButton;
- (void)setPauseButton:(id)arg1;
- (BOOL)hasNotifiedPlayPositionMilestone;
- (void)setHasNotifiedPlayPositionMilestone:(BOOL)arg1;
- (void).cxx_destruct;
@end
