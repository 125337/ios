@interface WCFinderLiveFeedGenericCdnCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveFeedGenericCellPlayProtocol, WCFinderLiveFeedGenericCardCellProtocol, WCFinderLiveFeedGenericCoverReportProtocol, MMLiveCDNPlayerViewDelegate, WCFinderLiveGenericFeedVMDelegate>
{
    BOOL _isJustTappedByUser; // +0x8
    BOOL _disableEndMask; // +0x9
    BOOL _needAsyncLoadGetLiveStatus; // +0xa
    BOOL _isPlayerCoverLoaded; // +0xb
    UIView * _containerView; // +0x10
    MMLiveCDNPlayerView * _playerView; // +0x18
    UIImageView * _gradientView; // +0x20
    unsigned long long _startPlayTimestamp; // +0x28
    unsigned long long _playerConnectTimestamp; // +0x30
    UIView * _endMaskView; // +0x38
    id <WCFinderLiveFeedGenericCdnCellDelegate> _delegate; // +0x40
    UIView * _endTipsView; // +0x48
    WCFinderLiveGenericFeedVM * _feedVM; // +0x50
    WCFinderLiveFeedGenericCoverReportInfo * _coverReportInfo; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)initViews;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)arg1;
- (void)updateLiveCardBlurState;
- (void)playWithSound:(BOOL)arg1;
- (void)stop;
- (void)stop:(BOOL)arg1;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)setMute:(BOOL)arg1;
- (BOOL)isPlayingWithSound;
- (void)markTappedByUser;
- (id)takePlayerViewSnapshot;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (void)onForwardGestureAction:(id)arg1;
- (void)updateGradientVisible;
- (void)onPlayBegin;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayMuteByNotifyOuter:(BOOL)arg1;
- (void)prepareForMorphTransition;
- (void)onPlayChangeSize:(CGSize)arg1;
- (void)onPlayMessageReceive:(id)arg1;
- (void)onPlayMuteForExternalPlaybackMode;
- (void)onPlayViewCoverLoadFinish:(id)arg1;
- (void)onPlayEventRecvAnchorSEIInfo:(id)arg1;
- (void)onPlayAudioModeChange:(BOOL)arg1;
- (BOOL)hasBizInfoForVM:(id)arg1;
- (void)onPlayVideoBackViewVisibleChanged:(BOOL)arg1;
- (void)onLiveFinderObjectAsyncLoadInfoReady:(id)arg1;
- (id)getCoverReportInfo;
- (void)resetCoverReportInfo;
- (BOOL)onFeedLiveGetIsAutoPlaying;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (unsigned long long)startPlayTimestamp;
- (void)setStartPlayTimestamp:(unsigned long long)arg1;
- (unsigned long long)playerConnectTimestamp;
- (void)setPlayerConnectTimestamp:(unsigned long long)arg1;
- (BOOL)isJustTappedByUser;
- (void)setIsJustTappedByUser:(BOOL)arg1;
- (id)endMaskView;
- (void)setEndMaskView:(id)arg1;
- (BOOL)disableEndMask;
- (void)setDisableEndMask:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)endTipsView;
- (void)setEndTipsView:(id)arg1;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (BOOL)needAsyncLoadGetLiveStatus;
- (void)setNeedAsyncLoadGetLiveStatus:(BOOL)arg1;
- (id)coverReportInfo;
- (void)setCoverReportInfo:(id)arg1;
- (BOOL)isPlayerCoverLoaded;
- (void)setIsPlayerCoverLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end
