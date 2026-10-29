@interface WCFinderLiveDiscoveryRelatedLiveCell : WCFinderLiveFeedBaseStyleableCell <MMLiveCDNPlayerViewDelegate, ILinkEventExt, WCFinderFeedContentVMExt, WCFinderMoreLiveCellPlayProtocol>
{
    BOOL _canShowLiveActivityView; // +0x8
    BOOL _isJustTappedByUser; // +0x9
    id <WCFinderLiveDiscoveryRelatedLiveCellDelegate> _delegate; // +0x10
    WCFinderLiveFeedContentVM * _contentVM; // +0x18
    UIView * _backgroundMaskView; // +0x20
    MMLiveCDNPlayerView * _playerView; // +0x28
    WCFinderFeedImageCDNView * _topCoverView; // +0x30
    WCFinderFeedImageCDNView * _midCoverView; // +0x38
    WCFinderFeedImageCDNView * _bottomCoverView; // +0x40
    UIView * _gradientView; // +0x48
    CAGradientLayer * _gradientLayer; // +0x50
    UIView * _endMaskView; // +0x58
    UIView * _endTipsView; // +0x60
    RichTextView * _recommendReasonLabel; // +0x68
    UIView * _recommendReasonView; // +0x70
    UIView * _authorView; // +0x78
    WCFinderHeadImageView * _avatarImageView; // +0x80
    RichTextView * _nicknameTV; // +0x88
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x90
    UILabel * _audienceNumLabel; // +0x98
    MMFinderLiveActivityView * _liveActivityView; // +0xa0
    unsigned long long _startPlayTimestamp; // +0xa8
    unsigned long long _playerConnectTimestamp; // +0xb0
    MMFinderLiveFeedHighlightTagView * _highlightTagView; // +0xb8
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)prepareForReuse;
- (void)updateHighLightTag;
- (void)updateWithContentVM:(id)arg1;
- (void)relayoutNickname;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (void)adjustSize;
- (void)layoutUI;
- (void)addBlurEffectIfNeed;
- (void)updateLiveCardBlurState;
- (void)removeBlurEffectIfNeed;
- (void)onAuthorViewDidClick;
- (void)playWithSound:(BOOL)arg1;
- (void)stop;
- (void)stop:(BOOL)arg1;
- (void)setMute:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)markTappedByUser;
- (void)onForwardGestureAction:(id)arg1;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)onPlayBegin;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayViewCoverLoadFinish:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)liveActivityView;
- (void)layoutLiveActivityView;
- (void)prepareForMorphTransition;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedLiveHighlightTagUpdate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)backgroundMaskView;
- (void)setBackgroundMaskView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)topCoverView;
- (void)setTopCoverView:(id)arg1;
- (id)midCoverView;
- (void)setMidCoverView:(id)arg1;
- (id)bottomCoverView;
- (void)setBottomCoverView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)endMaskView;
- (void)setEndMaskView:(id)arg1;
- (id)endTipsView;
- (void)setEndTipsView:(id)arg1;
- (id)recommendReasonLabel;
- (void)setRecommendReasonLabel:(id)arg1;
- (id)recommendReasonView;
- (void)setRecommendReasonView:(id)arg1;
- (id)authorView;
- (void)setAuthorView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nicknameTV;
- (void)setNicknameTV:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)audienceNumLabel;
- (void)setAudienceNumLabel:(id)arg1;
- (BOOL)canShowLiveActivityView;
- (void)setCanShowLiveActivityView:(BOOL)arg1;
- (void)setLiveActivityView:(id)arg1;
- (unsigned long long)startPlayTimestamp;
- (void)setStartPlayTimestamp:(unsigned long long)arg1;
- (unsigned long long)playerConnectTimestamp;
- (void)setPlayerConnectTimestamp:(unsigned long long)arg1;
- (BOOL)isJustTappedByUser;
- (void)setIsJustTappedByUser:(BOOL)arg1;
- (id)highlightTagView;
- (void)setHighlightTagView:(id)arg1;
- (void).cxx_destruct;
@end

