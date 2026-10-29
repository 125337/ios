@interface WCFinderDiscoveryNearbyLiveCollectionViewCell : WCFinderLiveFeedBaseStyleableCell <WCFinderFeedContentVMExt, MMLiveCDNPlayerViewDelegate, ILinkEventExt, WCFinderMoreLiveCellPlayProtocol, WCFinderFlowCellAutoplayProtocol>
{
    BOOL _hiddenVideo; // +0x8
    BOOL _hideAudienceNum; // +0x9
    BOOL _canShowVolumeEduView; // +0xa
    BOOL _canShowLiveActivityView; // +0xb
    BOOL _isJustTappedByUser; // +0xc
    id <WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate> _delegate; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    unsigned long long _playerScene; // +0x20
    WCFinderCoLiveAuthor * _coLiveAuthor; // +0x28
    MMLiveCDNPlayerView * _playerView; // +0x30
    UIView * _endMaskView; // +0x38
    UIView * _endTipsView; // +0x40
    UIView * _gradientView; // +0x48
    CAGradientLayer * _gradientLayer; // +0x50
    RichTextView * _innerRecommendReasonLabel; // +0x58
    MMUILabel * _innerRecommendExpandActionLabel; // +0x60
    UIScrollView * _innerRecommendReasonView; // +0x68
    RichTextView * _recommendReasonLabel; // +0x70
    UIView * _recommendReasonView; // +0x78
    RichTextView * _descLabel; // +0x80
    UIView * _authorView; // +0x88
    UIView * _avatorContainer; // +0x90
    WCFinderHeadImageView * _avatorImageView; // +0x98
    RichTextView * _nicknameTV; // +0xa0
    WCFinderAuthInfoIconView * _authInfoIconView; // +0xa8
    UILabel * _audienceNumLabel; // +0xb0
    UIImageView * _soundVolumeAnimationView; // +0xb8
    UIView * _playEduView; // +0xc0
    UIView * _playEduTipsView; // +0xc8
    UILabel * _playEduTipsLabel; // +0xd0
    UIImageView * _eduVoiceView; // +0xd8
    unsigned long long _startPlayTimestamp; // +0xe0
    unsigned long long _playerConnectTimestamp; // +0xe8
    MMFinderLiveActivityView * _liveActivityView; // +0xf0
    WCFinderDiscoveryNearbyLiveCollectionViewCellConfig * _config; // +0xf8
    MMFinderLiveFeedHighlightTagView * _highlightTagView; // +0x100
    WCFinderMoreLiveFriendLikeRecommendReasonView * _friendLikeReasonView; // +0x108
    NSString * _innerRecommendReason; // +0x110
    long long _innerRecommendLabelState; // +0x118
}
+ (double)bannerCellHeightInWidth:(double)arg1 styleInfo:(id)arg2;
+ (double)maxRecommendWidthInCellWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)initViews;
- (void)onFriendLikeClick;
- (void)prepareForReuse;
- (BOOL)showFriendLikeRecommendReason;
- (BOOL)isPlaying;
- (void)updateWithContentVM:(id)arg1 config:(id)arg2;
- (void)updateHighLightTag;
- (void)setHideAudienceNum:(BOOL)arg1;
- (void)updateHeadImage;
- (void)relayoutNickname;
- (void)updateLiveCardBlurState;
- (void)onConfigUpdated;
- (void)playWithSound:(BOOL)arg1;
- (void)stop;
- (void)stop:(BOOL)arg1;
- (void)setMute:(BOOL)arg1;
- (void)showTouchEduViewWithTip:(BOOL)arg1;
- (void)hideTouchEduView;
- (BOOL)isPlayingWithSound;
- (void)updateShowVolumeEduView:(BOOL)arg1;
- (BOOL)isEduViewHidden;
- (void)markTappedByUser;
- (void)layoutUI;
- (void)layoutRecommendReasonView;
- (void)layoutSubviews;
- (void)updateSoundVolumeAnimationView;
- (void)updateSoundVolumeAnimationViewHidden;
- (void)startAnimatingAsyncLoadImagesIfNeeded;
- (void)onAuthorViewDidClick;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)onForwardGestureAction:(id)arg1;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedLiveHighlightTagUpdate:(id)arg1;
- (void)onPlayBegin;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayMuteByNotifyOuter:(BOOL)arg1;
- (void)onPlayViewCoverLoadFinish:(id)arg1;
- (void)onRecommendExpandActionTapped;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (unsigned long long)autoPlayCellType;
- (void)play;
- (void)pause;
- (id)liveActivityView;
- (void)layoutLiveActivityView;
- (void)updateAllUIElementsShow:(BOOL)arg1 animate:(BOOL)arg2;
- (void)prepareForMorphTransition;
- (id)panEnterPlayerView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hiddenVideo;
- (void)setHiddenVideo:(BOOL)arg1;
- (BOOL)hideAudienceNum;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (unsigned long long)playerScene;
- (void)setPlayerScene:(unsigned long long)arg1;
- (id)coLiveAuthor;
- (void)setCoLiveAuthor:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)endMaskView;
- (void)setEndMaskView:(id)arg1;
- (id)endTipsView;
- (void)setEndTipsView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)innerRecommendReasonLabel;
- (void)setInnerRecommendReasonLabel:(id)arg1;
- (id)innerRecommendExpandActionLabel;
- (void)setInnerRecommendExpandActionLabel:(id)arg1;
- (id)innerRecommendReasonView;
- (void)setInnerRecommendReasonView:(id)arg1;
- (id)recommendReasonLabel;
- (void)setRecommendReasonLabel:(id)arg1;
- (id)recommendReasonView;
- (void)setRecommendReasonView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)authorView;
- (void)setAuthorView:(id)arg1;
- (id)avatorContainer;
- (void)setAvatorContainer:(id)arg1;
- (id)avatorImageView;
- (void)setAvatorImageView:(id)arg1;
- (id)nicknameTV;
- (void)setNicknameTV:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)audienceNumLabel;
- (void)setAudienceNumLabel:(id)arg1;
- (id)soundVolumeAnimationView;
- (void)setSoundVolumeAnimationView:(id)arg1;
- (BOOL)canShowVolumeEduView;
- (void)setCanShowVolumeEduView:(BOOL)arg1;
- (id)playEduView;
- (void)setPlayEduView:(id)arg1;
- (id)playEduTipsView;
- (void)setPlayEduTipsView:(id)arg1;
- (id)playEduTipsLabel;
- (void)setPlayEduTipsLabel:(id)arg1;
- (id)eduVoiceView;
- (void)setEduVoiceView:(id)arg1;
- (unsigned long long)startPlayTimestamp;
- (void)setStartPlayTimestamp:(unsigned long long)arg1;
- (unsigned long long)playerConnectTimestamp;
- (void)setPlayerConnectTimestamp:(unsigned long long)arg1;
- (BOOL)canShowLiveActivityView;
- (void)setCanShowLiveActivityView:(BOOL)arg1;
- (void)setLiveActivityView:(id)arg1;
- (BOOL)isJustTappedByUser;
- (void)setIsJustTappedByUser:(BOOL)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)highlightTagView;
- (void)setHighlightTagView:(id)arg1;
- (id)friendLikeReasonView;
- (void)setFriendLikeReasonView:(id)arg1;
- (id)innerRecommendReason;
- (void)setInnerRecommendReason:(id)arg1;
- (long long)innerRecommendLabelState;
- (void)setInnerRecommendLabelState:(long long)arg1;
- (void).cxx_destruct;
@end
