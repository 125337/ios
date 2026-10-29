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
    MMLiveCDNPlayerView * _playerView; // +0x28
    UIView * _endMaskView; // +0x30
    UIView * _endTipsView; // +0x38
    UIView * _gradientView; // +0x40
    CAGradientLayer * _gradientLayer; // +0x48
    RichTextView * _recommendReasonLabel; // +0x50
    UIView * _recommendReasonView; // +0x58
    RichTextView * _descLabel; // +0x60
    UIView * _authorView; // +0x68
    UIView * _avatorContainer; // +0x70
    WCFinderHeadImageView * _avatorImageView; // +0x78
    RichTextView * _nicknameTV; // +0x80
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x88
    UILabel * _audienceNumLabel; // +0x90
    UIImageView * _soundVolumeAnimationView; // +0x98
    UIView * _playEduView; // +0xa0
    UIView * _playEduTipsView; // +0xa8
    UILabel * _playEduTipsLabel; // +0xb0
    UIImageView * _eduVoiceView; // +0xb8
    unsigned long long _startPlayTimestamp; // +0xc0
    unsigned long long _playerConnectTimestamp; // +0xc8
    MMFinderLiveActivityView * _liveActivityView; // +0xd0
    WCFinderDiscoveryNearbyLiveCollectionViewCellConfig * _config; // +0xd8
    MMFinderLiveFeedHighlightTagView * _highlightTagView; // +0xe0
}
+ (double)bannerCellHeightInWidth:(double)arg1 styleInfo:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)initViews;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (void)updateWithContentVM:(id)arg1 config:(id)arg2;
- (void)updateHighLightTag;
- (void)setHideAudienceNum:(BOOL)arg1;
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
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (unsigned long long)autoPlayCellType;
- (void)play;
- (void)pause;
- (id)liveActivityView;
- (void)layoutLiveActivityView;
- (void)updateAllUIElementsShow:(BOOL)arg1 animate:(BOOL)arg2;
- (void)prepareForMorphTransition;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hiddenVideo;
- (void)setHiddenVideo:(BOOL)arg1;
- (BOOL)hideAudienceNum;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (unsigned long long)playerScene;
- (void)setPlayerScene:(unsigned long long)arg1;
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
- (void).cxx_destruct;
@end

