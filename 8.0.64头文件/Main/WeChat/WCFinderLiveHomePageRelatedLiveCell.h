@interface WCFinderLiveHomePageRelatedLiveCell : WCFinderLiveFeedBaseStyleableCell <MMLiveCDNPlayerViewDelegate, ILinkEventExt, WCFinderFeedContentVMLiveExt, WCFinderLiveGenericFeedVMDelegate, WCFinderLiveFeedGenericCellPlayProtocol, WCFinderLiveFeedGenericCardCellProtocol, WCFinderLiveFeedGenericCoverReportProtocol>
{
    BOOL _canShowLiveActivityView; // +0x8
    BOOL _isJustTappedByUser; // +0x9
    id <WCFinderLiveHomePageRelatedLiveCellDelegate> _delegate; // +0x10
    UIView * _backgroundMaskView; // +0x18
    MMLiveCDNPlayerView * _playerView; // +0x20
    WCFinderFeedImageCDNView * _topCoverView; // +0x28
    WCFinderFeedImageCDNView * _midCoverView; // +0x30
    WCFinderFeedImageCDNView * _bottomCoverView; // +0x38
    UIView * _gradientView; // +0x40
    CAGradientLayer * _gradientLayer; // +0x48
    UIView * _endMaskView; // +0x50
    UIView * _endTipsView; // +0x58
    RichTextView * _recommendReasonLabel; // +0x60
    UIView * _recommendReasonView; // +0x68
    UIView * _authorView; // +0x70
    WCFinderHeadImageView * _avatarImageView; // +0x78
    RichTextView * _nicknameTV; // +0x80
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x88
    UILabel * _audienceNumLabel; // +0x90
    MMFinderLiveActivityView * _liveActivityView; // +0x98
    unsigned long long _startPlayTimestamp; // +0xa0
    unsigned long long _playerConnectTimestamp; // +0xa8
    WCFinderLiveGenericFeedVM * _feedVM; // +0xb0
    MMFinderLiveFeedHighlightTagView * _highlightTagView; // +0xb8
    WCFinderLiveFeedGenericCoverReportInfo * _coverReportInfo; // +0xc0
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)arg1;
- (void)updateHighLightTag;
- (void)relayoutNickname;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)initViews;
- (void)adjustSize;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateLiveCardBlurState;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (void)onAuthorViewDidClick;
- (void)playWithSound:(BOOL)arg1;
- (void)stop;
- (void)stop:(BOOL)arg1;
- (void)setMute:(BOOL)arg1;
- (void)markTappedByUser;
- (id)takePlayerViewSnapshot;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)onForwardGestureAction:(id)arg1;
- (void)onPlayBegin;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayViewCoverLoadFinish:(id)arg1;
- (void)onLiveFinderObjectAsyncLoadInfoReady:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)liveActivityView;
- (void)layoutLiveActivityView;
- (void)prepareForMorphTransition;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedHighlightTagUpdate;
- (BOOL)onFeedLiveGetIsAutoPlaying;
- (id)getCoverReportInfo;
- (void)resetCoverReportInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
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
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (id)highlightTagView;
- (void)setHighlightTagView:(id)arg1;
- (id)coverReportInfo;
- (void)setCoverReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
