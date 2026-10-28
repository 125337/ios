@interface WCFinderColumnCollectionViewLiveCell : UICollectionViewCell <MMLiveCDNPlayerViewDelegate, WCFinderFeedContentVMExt, WCFinderFeedContentVMLiveExt, WCFinderColumnCollectionViewBaseCellProtocol>
{
    BOOL _isJustTappedByUser; // +0x8
    MMLiveCDNPlayerView * _playerView; // +0x10
    id <WCFinderColumnCollectionViewLiveCellDelegate> _delegate; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    UIView * _endMaskView; // +0x28
    UIView * _endTipsView; // +0x30
    WCFinderRichTextView * _descView; // +0x38
    WCFinderHeadImageView * _headImageView; // +0x40
    WCFinderAuthInfoIconView * _authView; // +0x48
    WCFinderHeadContactInfoView * _contactInfoView; // +0x50
    WCFinderFriendLikeCustomInfoView * _friendLikeView; // +0x58
    WCFinderRichTextView * _recommendReasonTextView; // +0x60
    unsigned long long _startPlayTimestamp; // +0x68
    unsigned long long _playerConnectTimestamp; // +0x70
    WCFinderLiveNowView * _liveNowView; // +0x78
}
+ (id)cellId;
+ (id)adjustContent:(id)arg1 withColorHexStr:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateWithContentVM:(id)arg1;
- (void)playVideoIfSupportWithSilencePlay:(BOOL)arg1;
- (void)pause;
- (void)stopVideoIfSupport;
- (void)setMute:(BOOL)arg1;
- (void)markTappedByUser;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (void)_updateToolBarAreaWithContentVM:(id)arg1;
- (void)updateLiveCardBlurState;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onPlayBegin;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayViewCoverLoadFinish:(id)arg1;
- (void)prepareForMorphTransition;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)endMaskView;
- (void)setEndMaskView:(id)arg1;
- (id)endTipsView;
- (void)setEndTipsView:(id)arg1;
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
- (unsigned long long)startPlayTimestamp;
- (void)setStartPlayTimestamp:(unsigned long long)arg1;
- (unsigned long long)playerConnectTimestamp;
- (void)setPlayerConnectTimestamp:(unsigned long long)arg1;
- (BOOL)isJustTappedByUser;
- (void)setIsJustTappedByUser:(BOOL)arg1;
- (id)liveNowView;
- (void)setLiveNowView:(id)arg1;
- (void).cxx_destruct;
@end
